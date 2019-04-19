//
//  HomeViewController.swift
//  Collection & Table View
//
//  Created by KiwiTech on 15/04/19.
//  Copyright © 2019 KiwiTech. All rights reserved.
//

import UIKit
import WebKit

class HomeViewController: UIViewController,UICollectionViewDelegate,UICollectionViewDataSource,UICollectionViewDelegateFlowLayout {
   
    var imageView:UIImageView!

    @IBOutlet weak var ScrollView: UIScrollView!
    @IBOutlet weak var webView: WKWebView!
    @IBOutlet weak var userNameLabel: UILabel!
    @IBOutlet weak var messageBoardBut: UIButton!
    @IBOutlet weak var collectionView: UICollectionView!
    @IBOutlet weak var imgView: UIImageView!
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
        userNameLabel.minimumScaleFactor = 0.5
        userNameLabel.adjustsFontSizeToFitWidth = true
        messageBoardBut.setImage(UIImage(named: "6.png"), for: UIControl.State.normal)
        
        //Background View Image
        let backgroundImage = UIImageView(frame: UIScreen.main.bounds)
        backgroundImage.image = UIImage(named: "7.png")
        backgroundImage.contentMode = UIView.ContentMode.scaleAspectFill
        ScrollView.insertSubview(backgroundImage, at: 0)
        ScrollView.backgroundColor = UIColor(patternImage: UIImage(named:"7.png")!)
       
        //Views Border
        messageBoardBut.layer.borderColor = UIColor.white.cgColor
        messageBoardBut.layer.borderWidth = 2
        userInfoView.layer.borderColor = UIColor.white.cgColor
        userInfoView.layer.borderWidth = 2
        webView.layer.borderColor = UIColor.white.cgColor
        webView.layer.borderWidth = 1
        
        //UserStatusView
        imgView.image = UIImage(named: "jass")
        imgView.layer.cornerRadius = imgView.frame.size.width / 2
        imgView.clipsToBounds = true
        
        //web view
        let url = URL(string: "https://www.countrylife.co.za/wp-content/uploads/2016/11/Digital-Dogs-Part-of-the-Herd-Sue-Adams-1.jpg")
        let requestObj = URLRequest(url: url! as URL)
        webView.load(requestObj)

        //Tab Bar
        self.tabBarController?.tabBar.tintColor = UIColor.init(red: 230/255.0, green: 67/255.0, blue: 2/255.0, alpha: 1.0)
        self.tabBarController?.tabBar.barTintColor = UIColor.white
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
    
    func collectionView(_ collectionView: UICollectionView, didHighlightItemAt indexPath: IndexPath) {
        UIView.animate(withDuration: 0.2) {
            let cell = self.collectionView.cellForItem(at: indexPath)
            cell?.transform = .init(scaleX: 1.02, y: 1.02)
        }
    }
    
    func collectionView(_ collectionView: UICollectionView, didUnhighlightItemAt indexPath: IndexPath) {
        UIView.animate(withDuration: 0.2) {
            let cell = self.collectionView.cellForItem(at: indexPath)
            cell?.transform = .identity
        }
    }
}
