//
//  ViewController.swift
//  Collection & Table View
//
//  Created by KiwiTech on 02/04/19.
//  Copyright © 2019 KiwiTech. All rights reserved.
//

import UIKit

class ViewController: UIViewController, UICollectionViewDelegate, UICollectionViewDataSource, UITableViewDelegate, UITableViewDataSource, UICollectionViewDelegateFlowLayout {
    
   
    @IBOutlet weak var uiViewBack: UIView!
    var leftConstraint: NSLayoutConstraint?
    var trailingConstraint: NSLayoutConstraint?
    var topConstraint: NSLayoutConstraint?
    var bottomConstraint: NSLayoutConstraint?
    let myView = UIView()

    override func viewDidLoad() {
        super.viewDidLoad()
        navigationController?.navigationBar.barStyle = .black
        view.backgroundColor = UIColor.black
        tableView.register(UINib(nibName: "customCell", bundle: nil), forCellReuseIdentifier: "customCell")
        setupCollectionView()
    }
    
    override func viewDidAppear(_ animated: Bool) {
        super.viewDidAppear(animated)
        let indexPathForFirstRow = IndexPath(row: 0, section: 0)
        customCollectionView.selectItem(at: indexPathForFirstRow, animated:false, scrollPosition: UICollectionView.ScrollPosition(rawValue: 0))
        self.collectionView(customCollectionView, didSelectItemAt: indexPathForFirstRow)
      
    }
    
    var label:UILabel!
    var cell:UICollectionViewCell!
    var text = [String]()
    var arrayText = ["Community","Following","Popular"]
    var arrayText1 = ["1","2","3","4","5","6","7","8","9","10"]
    var arrayText2 = ["11","12","13","14","15","16","17","18","19","20"]
    var arrayText3 = ["21","23","23","24","25","26","27","28","29","30"]
    
    @IBOutlet weak var customCollectionView: UICollectionView!
    @IBOutlet weak var tableView: UITableView!
    
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
        cell.backgroundColor = UIColor.black

        return cell
    }
   
    var horizontalBarLeftAnchorConstraint: NSLayoutConstraint?

    func bar(x:Int) {
       

    }
    
    func collectionView(_ collectionView: UICollectionView, didSelectItemAt indexPath: IndexPath) {
        if indexPath.row == 0 {
            bar(x: 120)
            text = arrayText1
        } else if indexPath.row == 1 {
              bar(x: 120)
            text = arrayText2
        } else if indexPath.row == 2 {
             bar(x: 240)
            text = arrayText3
        }
        tableView.reloadData()
        scrollToMenuIndex(menuIndex: indexPath.item)
        setupCollectionView()
    }
    
    func setupCollectionView() {
        if let flowLayout = self.customCollectionView.collectionViewLayout as? UICollectionViewFlowLayout {
                flowLayout.scrollDirection = .horizontal
                flowLayout.minimumLineSpacing = 0
        }
    }

    func scrollToMenuIndex(menuIndex: Int) {
        let indexPath = IndexPath(item: menuIndex, section: 0)
        let scrollView = UIScrollView(frame: CGRect(x: 0, y: 23, width: 120, height: 5))
        scrollView.backgroundColor = UIColor.red
        customCollectionView.addSubview(scrollView)
        
        scrollView.isScrollEnabled = true
        scrollView.bounces = true
        
        scrollView.setNeedsLayout()
        customCollectionView?.scrollToItem(at: indexPath, at: .centeredHorizontally, animated: true)
    }

    func scrollViewDidScroll(_ scrollView: UIScrollView) {
        horizontalBarLeftAnchorConstraint?.constant = scrollView.contentOffset.x / 3
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
    
    
    
    //Table View
    func numberOfSections(in tableView: UITableView) -> Int {
        return 1
    }
    
    func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return arrayText1.count
    }
    
    func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        let myCell = tableView.dequeueReusableCell(withIdentifier: "customCell", for: indexPath) as! customCell
        print(indexPath.row)
        if text.count > 0 {
            myCell.labelName.text = text[indexPath.row]
        }
        
        return myCell
    }
    

}


