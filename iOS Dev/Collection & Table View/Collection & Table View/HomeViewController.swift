//
//  HomeViewController.swift
//  Collection & Table View
//
//  Created by KiwiTech on 15/04/19.
//  Copyright © 2019 KiwiTech. All rights reserved.
//

import UIKit

class HomeViewController: UIViewController,UICollectionViewDelegate,UICollectionViewDataSource,UICollectionViewDelegateFlowLayout {
   
    var imageView:UIImageView!
    
    @IBOutlet weak var userNameLabel: UILabel!
    @IBOutlet weak var backView: UIView!
    @IBOutlet weak var messageBoardBut: UIButton!
    @IBOutlet weak var collectionView: UICollectionView!
    @IBOutlet weak var imgView: UIImageView!
    @IBOutlet weak var pic: UIImageView!
    @IBOutlet weak var userInfoView: UIView!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        //Collection View
        collectionView.dataSource = self
        collectionView.delegate = self
        
        //Naviagation Controller
        navigationController?.navigationBar.barStyle = .black
        navigationController?.navigationBar.tintColor = .white
        navigationController?.toolbar.tintColor = .gray
        view.backgroundColor = UIColor.black
        let logo = UIImage(named: "logo3")
        let imageVw = UIImageView(image:logo)
        imageVw.contentMode = .scaleAspectFit
        self.navigationItem.titleView = imageVw
        
        //images
        imageView = view.viewWithTag(5) as? UIImageView
        imageView.image = UIImage(named: "5.jpg")
        imageView = view.viewWithTag(6) as? UIImageView
        imageView.image = UIImage(named: "cowherd.jpg")
        userNameLabel.minimumScaleFactor = 0.5
        userNameLabel.adjustsFontSizeToFitWidth = true
        
       
        //Views Border
        messageBoardBut.layer.borderColor = UIColor.white.cgColor
        messageBoardBut.layer.borderWidth = 2
        pic.layer.borderColor = UIColor.white.cgColor
        pic.layer.borderWidth = 2
        userInfoView.layer.borderColor = UIColor.white.cgColor
        userInfoView.layer.borderWidth = 2
        
        //UserStatusView
        imgView.image = UIImage(named: "jass")
        imgView.layer.cornerRadius = imgView.frame.size.width / 2
        imgView.clipsToBounds = true
        
        //Tab Bar
        self.tabBarController?.tabBar.tintColor = UIColor.red
        self.tabBarController?.tabBar.barTintColor = UIColor(red: 38/255, green: 196/255, blue: 133/255, alpha: 1)
    }
    
    //Collection View
    func numberOfSections(in collectionView: UICollectionView) -> Int {
        return 1
    }
    
    func collectionView(_ collectionView: UICollectionView, numberOfItemsInSection section: Int) -> Int {
        return 6
    }
    
    func collectionView(_ collectionView: UICollectionView, cellForItemAt indexPath: IndexPath) -> UICollectionViewCell {
        let cell = collectionView.dequeueReusableCell(withReuseIdentifier: "cell", for: indexPath)
        imageView = cell.viewWithTag(1) as? UIImageView
        imageView?.image = UIImage(named: "1.jpg")
        cell.backgroundColor = UIColor.orange
        cell.layer.borderColor = UIColor.white.cgColor
        cell.layer.borderWidth = 2
        return cell
    }
    
    func collectionView(_ collectionView: UICollectionView, layout collectionViewLayout: UICollectionViewLayout, sizeForItemAt indexPath: IndexPath) -> CGSize {
        let width = collectionView.frame.width / 2
        let hight = collectionView.frame.height / 2
        return CGSize(width: width, height: hight)
    }
    
    func collectionView(_ collectionView: UICollectionView, layout collectionViewLayout: UICollectionViewLayout, minimumLineSpacingForSectionAt section: Int) -> CGFloat {
        return 0
    }
    
    func collectionView(_ collectionView: UICollectionView, layout collectionViewLayout: UICollectionViewLayout, minimumInteritemSpacingForSectionAt section: Int) -> CGFloat {
        return 0
    }
}
