//
//  ViewController.swift
//  Collection & Table View
//
//  Created by KiwiTech on 02/04/19.
//  Copyright © 2019 KiwiTech. All rights reserved.
//

import UIKit
import Alamofire
import SwiftyJSON
import NVActivityIndicatorView

class ViewController: UIViewController, UICollectionViewDelegate, UICollectionViewDataSource, UITableViewDelegate, UITableViewDataSource, UICollectionViewDelegateFlowLayout,UITabBarDelegate,UIScrollViewDelegate,NVActivityIndicatorViewable {
    
    var indexPaths:IndexPath = IndexPath(row: 0, section: 0)
    var horizontalBarView = UIView()
    var label:UILabel!
    var cell:UICollectionViewCell!
    var text = [String]()
    var temp = [String]()
    var jsonData :JSON = []
    var refreshControl: UIRefreshControl!
    
    var arrayText = ["Community","Following","Popular"]
    let URL = "https://api.plos.org/search?q=title:DNA"
    
    @IBOutlet weak var uiViewBack: UIView!
    @IBOutlet weak var customCollectionView: UICollectionView!
    @IBOutlet weak var tableView: UITableView!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        navigationController?.navigationBar.barStyle = .black
        navigationController?.navigationBar.tintColor = .white
        navigationController?.navigationBar.barTintColor = .black
        view.backgroundColor = .darkGray
        navigationController?.toolbar.tintColor = .gray
        let logo = UIImage(named: "logo3")
        let imageView = UIImageView(image:logo)
        imageView.contentMode = .scaleAspectFit
        self.navigationItem.titleView = imageView
        
        //Collection View
        customCollectionView.backgroundColor = UIColor.init(red: 31/255.0, green: 33/255.0, blue: 37/255.0, alpha: 1.0)
        customizeHorizontalBarView()
        
        //table View
        tableView.register(UINib(nibName: "customCell", bundle: nil), forCellReuseIdentifier: "customCell")
        
        //gesture
        let directions: [UISwipeGestureRecognizer.Direction] = [.right, .left]
        for direction in directions {
            let gesture = UISwipeGestureRecognizer(target: self, action: #selector(ViewController.handleSwipe(gesture:)))
            gesture.direction = direction
            tableView.addGestureRecognizer(gesture)
        }
        
        //Pull Down to refresh Table View
        refreshControl = UIRefreshControl()
        refreshControl.tintColor = UIColor.init(red: 230/255.0, green: 67/255.0, blue: 2/255.0, alpha: 1.0)
        //refreshControl.attributedTitle = NSAttributedString(string: "Pull to refresh")
        refreshControl.addTarget(self, action: #selector(refresh), for: .valueChanged)
        tableView.addSubview(refreshControl)
    }
    
    override func viewDidAppear(_ animated: Bool) {
        super.viewDidAppear(animated)
        //Json praising
        getData(url: URL)
        
        //NVActivityIndicatorView Waiting For Server Response
        let activityData = ActivityData()
        NVActivityIndicatorPresenter.sharedInstance.startAnimating(activityData)
        
        //Navigation View Unhide
        navigationController?.setNavigationBarHidden(false, animated: true)
        customCollectionView.isHidden = false
        horizontalBarView.isHidden = false
        let frame = self.view.safeAreaLayoutGuide.layoutFrame
        tableView.frame = CGRect(x: 0, y: frame.origin.y + customCollectionView.frame.height + horizontalBarView.frame.height, width: frame.width, height: frame.height)
    }
    
    override func viewWillDisappear(_ animated: Bool) {
        super.viewWillDisappear(animated)
        tableView.scrollToRow(at: IndexPath(row: 0, section: 0), at: .top, animated: true)
    }
    
    //Collection View Selection of First Cell
    func cellSelection() {
        self.customCollectionView.selectItem(at: indexPaths, animated:false, scrollPosition: UICollectionView.ScrollPosition(rawValue: 0))
        self.collectionView(self.customCollectionView, didSelectItemAt: indexPaths)
    }
    
    //Get The Data From API as JSON
    func getData(url:String) {
        Alamofire.request(url, method: .get).responseJSON {
            response in
            if response.result.isSuccess {
                print("success got the data")
                self.jsonData = JSON(response.result.value!)
                self.updateDataInUI(json: self.jsonData)
                self.cellSelection()
            } else {
                print("Error \(String(describing: response.result.error))")
                self.temp = ["Connection Issues"]
            }
        }
    }
    
    //Json Parsing as String
    func updateDataInUI(json : JSON) {
        for i in 0 ..< json["response"]["docs"].count {
            if let jsonResult = json["response"]["docs"][i]["author_display"][indexPaths.row].string {
            temp.append(jsonResult)
            } else {
                temp.append("No Name Found")
            }
        }
        if temp.count > 0 {
            self.text = self.temp
            self.temp.removeAll()
            NVActivityIndicatorPresenter.sharedInstance.stopAnimating()
        } else {
            NVActivityIndicatorPresenter.sharedInstance.setMessage("Connection error")
        }
    }
    
   
//CollectionView
    func numberOfSections(in collectionView: UICollectionView) -> Int {
        return 1
    }
    
    func collectionView(_ collectionView: UICollectionView, numberOfItemsInSection section: Int) -> Int {
        return arrayText.count
    }
    
    func collectionView(_ collectionView: UICollectionView, cellForItemAt indexPath: IndexPath) -> UICollectionViewCell {
        cell = collectionView.dequeueReusableCell(withReuseIdentifier: "cell", for: indexPath)
        label = cell.viewWithTag(1) as? UILabel
        label.text = arrayText[indexPath.row]
        label.textColor = UIColor.white
        cell.backgroundColor = UIColor.init(red: 31/255.0, green: 33/255.0, blue: 37/255.0, alpha: 1.0)
        return cell
    }
    
    func customizeHorizontalBarView() {
        horizontalBarView = UIView(frame: CGRect(x: 0, y: 0, width: uiViewBack.frame.width/3, height: 5))
        horizontalBarView.backgroundColor = UIColor.init(red: 230/255.0, green: 67/255.0, blue: 2/255.0, alpha: 1.0)
        horizontalBarView.translatesAutoresizingMaskIntoConstraints = false
        uiViewBack.addSubview(horizontalBarView)
    }
    
    func collectionView(_ collectionView: UICollectionView, didSelectItemAt indexPath: IndexPath) {
        cell = customCollectionView.cellForItem(at: indexPath)
        label = cell.viewWithTag(1) as? UILabel
        label.highlightedTextColor = UIColor.init(red: 230/255.0, green: 67/255.0, blue: 2/255.0, alpha: 1.0)
    
        UIView.animate(withDuration: 1.0, delay: 0, usingSpringWithDamping: 0.5, initialSpringVelocity: 0.3, options: .curveEaseIn, animations: {
            if (indexPath.item == 0) {
                self.horizontalBarView.frame = CGRect(x:0 ,y: 0,width: self.uiViewBack.bounds.width/3,height: self.uiViewBack.frame.height )
            } else if (indexPath.item == 1) {
                self.horizontalBarView.frame = CGRect(x:self.uiViewBack.bounds.width/3 ,y: 0,width: self.uiViewBack.bounds.width/3,height: self.uiViewBack.frame.height )
            } else if (indexPath.item == 2) {
                self.horizontalBarView.frame = CGRect(x:self.uiViewBack.bounds.width/1.5 ,y: 0,width: self.uiViewBack.bounds.width/3,height: self.uiViewBack.frame.height )
            }
        })
        
        indexPaths = indexPath
        updateDataInUI(json : jsonData)
        tableView.reloadData()
        refreshControl.endRefreshing()
    }
    
    func collectionView(_ collectionView: UICollectionView, didDeselectItemAt indexPath: IndexPath) {
        collectionView.deselectItem(at: indexPath, animated: true)
    }
    
    func collectionView(_ collectionView: UICollectionView, layout collectionViewLayout: UICollectionViewLayout, sizeForItemAt indexPath: IndexPath) -> CGSize {
        let width = collectionView.frame.width / 3
        let hight = collectionView.frame.height
        return CGSize(width: width, height: hight)
    }
    
    func collectionView(_ collectionView: UICollectionView, layout collectionViewLayout: UICollectionViewLayout, minimumLineSpacingForSectionAt section: Int) -> CGFloat {
        return 0.0
    }
    
    func collectionView(_ collectionView: UICollectionView, didHighlightItemAt indexPath: IndexPath) {
        UIView.animate(withDuration: 0.2) {
            let cell = self.customCollectionView.cellForItem(at: indexPath)
            cell?.transform = .init(scaleX: 1.10, y: 1.10)
        }
    }
    
    func collectionView(_ collectionView: UICollectionView, didUnhighlightItemAt indexPath: IndexPath) {
        UIView.animate(withDuration: 0.2) {
            let cell = self.customCollectionView.cellForItem(at: indexPath)
            cell?.transform = .identity
        }
    }
    
    //Table View
    func numberOfSections(in tableView: UITableView) -> Int {
        return 1
    }
    
    func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return text.count
    }
    
    func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        let myCell = tableView.dequeueReusableCell(withIdentifier: "customCell", for: indexPath) as! customCell
        if text.count > 0 {
            myCell.labelName.text = text[indexPath.row]
        }
        return myCell
    }
    
    
    //Handle the swipe
    @objc func handleSwipe(gesture: UISwipeGestureRecognizer) {
        var index = indexPaths.row
        switch gesture.direction {
        case UISwipeGestureRecognizer.Direction.left:
            index += 1
            if index < arrayText.count {
                customCollectionView.selectItem(at: IndexPath(row: index, section: 0), animated:false, scrollPosition: UICollectionView.ScrollPosition(rawValue: 0))
                self.collectionView(customCollectionView, didSelectItemAt: IndexPath(row: index, section: 0))
            }
            print("left swipe")
        case UISwipeGestureRecognizer.Direction.right:
            index -= 1
            if index >= 0 {
                customCollectionView.selectItem(at: IndexPath(row: index, section: 0), animated:false, scrollPosition: UICollectionView.ScrollPosition(rawValue: 0))
                self.collectionView(customCollectionView, didSelectItemAt: IndexPath(row: index, section: 0))
            }
            print("right swipe")
        default:
            print("other swipe")
        }
    }
    
    
    // hide NavigationBar with scroll
    func scrollViewDidScroll(_ scrollView: UIScrollView) {
        if scrollView.panGestureRecognizer.translation(in: scrollView).y < 0 {
            navigationController?.setNavigationBarHidden(true, animated: true)
            let frame = self.view.safeAreaLayoutGuide.layoutFrame
            tableView.frame = CGRect(x: 0, y: frame.origin.y, width: frame.width, height: frame.height)
            customCollectionView.isHidden = true
            horizontalBarView.isHidden = true
        } else {
            navigationController?.setNavigationBarHidden(false, animated: true)
            customCollectionView.isHidden = false
            horizontalBarView.isHidden = false
        }
    }
    
    //Pull Down to refresh Table View
    @objc func refresh(_ sender: Any) {
       getData(url: URL)
    }
}


