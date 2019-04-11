//
//  ViewController.swift
//  Collection & Table View
//
//  Created by KiwiTech on 02/04/19.
//  Copyright © 2019 KiwiTech. All rights reserved.
//

import UIKit

class ViewController: UIViewController, UICollectionViewDelegate, UICollectionViewDataSource, UITableViewDelegate, UITableViewDataSource, UICollectionViewDelegateFlowLayout,UITabBarDelegate,UIScrollViewDelegate {
    
    var horizontalBarView = UIView()
    var label:UILabel!
    var cell:UICollectionViewCell!
    var text = [String]()
    
    var arrayText = ["Community","Following","Popular"]
    var arrayText1 = ["1","2","3","4","5","6","7","8","9","10"]
    var arrayText2 = ["11","12","13","14","15","16","17","18","19","20"]
    var arrayText3 = ["21","23","23","24","25","26","27","28","29","30"]
   
    @IBOutlet weak var scrollView: UIScrollView!
    @IBOutlet weak var uiViewBack: UIView!
    @IBOutlet weak var customCollectionView: UICollectionView!
    @IBOutlet weak var tableView: UITableView!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        navigationController?.navigationBar.barStyle = .black
        navigationController?.navigationBar.tintColor = .white
        navigationController?.toolbar.tintColor = .gray
        view.backgroundColor = UIColor.black
        let logo = UIImage(named: "logo3")
        let imageView = UIImageView(image:logo)
        imageView.contentMode = .scaleAspectFit
        self.navigationItem.titleView = imageView
        
        //Collection View
        uiViewBack.backgroundColor = UIColor.black
        customCollectionView.isScrollEnabled = true
        customCollectionView.isPagingEnabled = true
        customizeHorizontalBarView()
        
        //table View
        tableView.register(UINib(nibName: "customCell", bundle: nil), forCellReuseIdentifier: "customCell")
        
        //Tab Bar
        self.tabBarController?.tabBar.tintColor = UIColor.orange
        self.tabBarController?.tabBar.barTintColor = UIColor(red: 38/255, green: 196/255, blue: 133/255, alpha: 1)
        
        //scrollView
        self.scrollView.delegate = self
        scrollView.isPagingEnabled = true
        scrollView.isScrollEnabled = true
        scrollView.frame = CGRect(x: 0, y: 0, width: view.frame.width, height: view.frame.height)
        scrollView.panGestureRecognizer.isEnabled = false
        scrollView.addSubview(tableView)
        scrollView.addSubview(uiViewBack)
        scrollView.addSubview(customCollectionView)
    }

    var index:Int = 0
    override func viewDidAppear(_ animated: Bool) {
        super.viewDidAppear(animated)
        //Collection View
        let indexPathForFirstRow = IndexPath(row: 0, section: 0)
        customCollectionView.selectItem(at: indexPathForFirstRow, animated:false, scrollPosition: UICollectionView.ScrollPosition(rawValue: 0))
        self.collectionView(customCollectionView, didSelectItemAt: indexPathForFirstRow)
    }

    func scrollViewDidScroll(_ scrollView: UIScrollView) {
        customCollectionView.scrollToItem(at: IndexPath(row: 2, section: 0), at: UICollectionView.ScrollPosition.centeredHorizontally, animated: true)
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
        label.backgroundColor = UIColor.black
        label.textColor = UIColor.white
        cell.backgroundColor = UIColor.black
        return cell
    }
   
    func customizeHorizontalBarView() {
        horizontalBarView = UIView(frame: CGRect(x: 0, y: 0, width: uiViewBack.frame.width/3, height: 5))
        horizontalBarView.backgroundColor = UIColor.red
        horizontalBarView.translatesAutoresizingMaskIntoConstraints = false
        uiViewBack.addSubview(horizontalBarView)
    }
    
    func collectionView(_ collectionView: UICollectionView, didSelectItemAt indexPath: IndexPath) {
        cell = customCollectionView.cellForItem(at: indexPath)
        label = cell.viewWithTag(1) as? UILabel
        label.textColor = UIColor.red
        
        UIView.animate(withDuration: 1.0, delay: 0, usingSpringWithDamping: 0.5, initialSpringVelocity: 0.3, options: .curveEaseIn, animations: {
            if (indexPath.item == 0) {
                self.horizontalBarView.frame = CGRect(x:0 ,y: 0,width: self.uiViewBack.bounds.width/3,height: self.uiViewBack.frame.height )
                self.text = self.arrayText1
            } else if (indexPath.item == 1) {
                self.horizontalBarView.frame = CGRect(x:self.uiViewBack.bounds.width/3 ,y: 0,width: self.uiViewBack.bounds.width/3,height: self.uiViewBack.frame.height )
                self.text = self.arrayText2
            } else if (indexPath.item == 2) {
                self.horizontalBarView.frame = CGRect(x:self.uiViewBack.bounds.width/1.5 ,y: 0,width: self.uiViewBack.bounds.width/3,height: self.uiViewBack.frame.height )
                self.text = self.arrayText3
            }
        })
        index = indexPath.row
        tableView.reloadData()
    }
    
    func collectionView(_ collectionView: UICollectionView, didDeselectItemAt indexPath: IndexPath) {
        cell = customCollectionView.cellForItem(at: indexPath)
        label = cell.viewWithTag(1) as? UILabel
        label.textColor = UIColor.white
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
   
    //Table View
    func tableView(_ tableView: UITableView, titleForHeaderInSection section: Int) -> String? {
        return arrayText[index]
    }
    
    func numberOfSections(in tableView: UITableView) -> Int {
        return 1
    }
    
    func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return arrayText1.count
        
    }
    
    func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        let myCell = tableView.dequeueReusableCell(withIdentifier: "customCell", for: indexPath) as! customCell
        if text.count > 0 {
            myCell.labelName.text = text[indexPath.row]
        }
        return myCell
    }
    
    func tableView(_ tableView: UITableView, didSelectRowAt indexPath: IndexPath) {
    }
}


