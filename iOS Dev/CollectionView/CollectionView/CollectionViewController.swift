//
//  CollectionViewController.swift
//  CollectionView
//
//  Created by Jasbeer Singh on 24/03/19.
//  Copyright © 2019 Jasbeer Singh. All rights reserved.
//

import UIKit
import Photos

class CollectionViewController: UICollectionViewController, UICollectionViewDelegateFlowLayout {
    
    var index:IndexPath = []
    var animalsPhotos = [UIImage]()
    //var imageArray = ["horse.jpg", "cow.jpg", "camel.jpg", "sheap.jpg", "goat.jpg","jass.jpg","jasss.jpg"]
    var count = 0
    var i:Int = 0
    var cell:UICollectionViewCell!
    var imageView:UIImageView!
    
    func grabPhotos() {
        DispatchQueue.global(qos: .background).async {
        let imgManager = PHImageManager.default()
        let requestOptions = PHImageRequestOptions()
        requestOptions.isSynchronous = true
        requestOptions.deliveryMode = .highQualityFormat
        let fetchOptions = PHFetchOptions()
        fetchOptions.sortDescriptors = [NSSortDescriptor(key: "creationDate", ascending: false)]
        
            let fetchResult : PHFetchResult = PHAsset.fetchAssets(with: .image, options: fetchOptions)
            if fetchResult.count > 0 {
                for i in 0..<fetchResult.count {
                    imgManager.requestImage(for: fetchResult.object(at: i) as PHAsset, targetSize: CGSize(width: 200, height: 200), contentMode: .aspectFill, options: requestOptions, resultHandler: { (image, error) in
                        self.animalsPhotos.append(image!)
                    })
                }
            } else {
                print("no photos")
            }
         print("imageArray count: \(self.animalsPhotos.count)")
        DispatchQueue.main.async {
            print("This is run on the main queue, after the previous code in outer block")
            self.collectionView.reloadData()
            }
        }
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
        grabPhotos()
        self.navigationItem.rightBarButtonItem = self.editButtonItem
        editButtonItem.title = "Select"
        self.navigationItem.title = "Camera Roll"
        trashButtonOutlet.isEnabled = false
        editButtonOutlet.isEnabled = false
        
        let directions: [UISwipeGestureRecognizer.Direction] = [.up, .down, .right, .left]
        for direction in directions {
            let gesture = UISwipeGestureRecognizer(target: self, action: #selector(CollectionViewController.handleSwipe(gesture:)))
            gesture.direction = direction
            self.view?.addGestureRecognizer(gesture)
        }
    }
    
    @objc func handleSwipe(gesture: UISwipeGestureRecognizer) {
        print(gesture.direction)
        cell = collectionView.cellForItem(at: index as IndexPath)
        imageView = cell?.viewWithTag(1) as? UIImageView
        switch gesture.direction {
        case UISwipeGestureRecognizer.Direction.down:
            diselectItem()
            print("down swipe")
        case UISwipeGestureRecognizer.Direction.up:
            print("up swipe")
        case UISwipeGestureRecognizer.Direction.left:
            if i < animalsPhotos.count - 1 {
                i = i + 1
                imageView.image = animalsPhotos[i]
                print("left swipe")
            }
        case UISwipeGestureRecognizer.Direction.right:
            if i > 0  {
                i = i - 1
                imageView.image = animalsPhotos[i]
                print("right swipe")
            }
        default:
            print("other swipe")
        }
    }
    
    @IBOutlet var collectionPhotos: UICollectionView!
    @IBOutlet weak var trashButtonOutlet: UIBarButtonItem!
    @IBOutlet weak var editButtonOutlet: UIBarButtonItem!
    @IBAction func editButtonAction(_ sender: Any) {
        //still not in use
    }
    
    @IBAction func trashButton(_ sender: Any) {
        if let selectedRows = collectionView.indexPathsForSelectedItems {
            var items = [UIImage]()
            for indexPath in selectedRows  {
                items.append(animalsPhotos[indexPath.row])
            }
            for item in items {
                if let index = animalsPhotos.index(of: item) {
                    animalsPhotos.remove(at: index)
                }
            }
            collectionView.deleteItems(at: selectedRows)
            collectionView.reloadData()
        }
        setEditing(false, animated: true)
        diselectItem()
    }
    
    override func setEditing(_ editing: Bool, animated: Bool) {
        super.setEditing(editing, animated: animated)
        if editing == true {
            self.collectionView.allowsMultipleSelection = true
            self.navigationItem.title = "Select Items"
            editButtonItem.title = "Cancel"
        } else if editing == false {
            self.collectionView.allowsMultipleSelection = false
            self.navigationItem.title = "Camera Roll"
            editButtonItem.title = "Select"
            trashButtonOutlet.isEnabled = false
            collectionView.reloadData()
            count = 0
        }
    }
    
    // MARK: UICollectionViewDataSource
    override func numberOfSections(in collectionView: UICollectionView) -> Int {
        // #warning Incomplete implementation, return the number of sections
        return 1
    }
    
    override func collectionView(_ collectionView: UICollectionView, numberOfItemsInSection section: Int) -> Int {
        // #warning Incomplete implementation, return the number of items
        return animalsPhotos.count
    }
    
    override func collectionView(_ collectionView: UICollectionView, cellForItemAt indexPath: IndexPath) -> UICollectionViewCell {
        let myCell = collectionView.dequeueReusableCell(withReuseIdentifier: "cell", for: indexPath)
        let imageView = myCell.viewWithTag(1) as! UIImageView
        
        imageView.image = animalsPhotos[indexPath.row]
        myCell.layer.borderColor = UIColor.clear.cgColor
        myCell.layer.borderWidth = 0
        
        return myCell
    }
    
    override func collectionView(_ collectionView: UICollectionView, didSelectItemAt indexPath: IndexPath) {
        cell = collectionView.cellForItem(at: indexPath as IndexPath)
        if editButtonOutlet.isEnabled == true {
            self.cell?.backgroundColor = UIColor.white
        } else if self.collectionView.allowsMultipleSelection == true {
            if cell?.isSelected == true {
                count = count + 1
                trashButtonOutlet.isEnabled = true
                if count == 1 { 
                    self.navigationItem.title = "\(count) Photo Selected"
                } else if count > 1 {
                    self.navigationItem.title = "\(count) Photos Selected"
                } else if count == 0 {
                    self.navigationItem.title = "Select Items"
                }
                cell?.layer.borderColor = UIColor.black.cgColor
                cell?.layer.borderWidth = 4
            }
        } else {
            imageView = cell?.viewWithTag(1) as? UIImageView
            imageView?.contentMode = .scaleAspectFit
            cell?.superview?.bringSubviewToFront(cell!)
            UIView.animate(withDuration: 0.8, delay: 0.0, usingSpringWithDamping: 0.5, initialSpringVelocity: 0.3, options: .curveEaseIn, animations: {
                self.cell?.frame = collectionView.bounds
                self.cell?.backgroundColor = UIColor.white
                collectionView.isScrollEnabled = false
            }, completion: nil)
            self.navigationItem.rightBarButtonItem = editButtonOutlet
            editButtonOutlet.isEnabled = true
            editButtonOutlet.tintColor = UIColor(red: 0.170, green: 0.459, blue: 0.700, alpha: 1.00)
            trashButtonOutlet.isEnabled = true
            self.navigationItem.title = "Image"
            self.collectionView.allowsMultipleSelection = true
            navigationController?.hidesBarsOnTap = true
        }
        index = indexPath
        i = index.row
    }
    
    override func collectionView(_ collectionView: UICollectionView, didDeselectItemAt indexPath: IndexPath) {
        cell = collectionView.cellForItem(at: indexPath as IndexPath)
        if editButtonOutlet.isEnabled == false {
            if cell?.isSelected == false {
                cell?.layer.borderColor = UIColor.clear.cgColor
                cell?.layer.borderWidth = 0
                count = count - 1
                if count == 1 {
                    self.navigationItem.title = "\(count) Photo Selected"
                } else if count > 1 {
                    self.navigationItem.title = "\(count) Photos Selected"
                } else if count == 0 {
                    self.navigationItem.title = "Select Items"
                    trashButtonOutlet.isEnabled = false
                }
            }
        } else {
            self.cell?.backgroundColor = UIColor.black
        }
    }
    
    func diselectItem() {
        imageView = cell?.viewWithTag(1) as? UIImageView
        imageView?.contentMode = .scaleToFill
        collectionView.isScrollEnabled = true
        collectionView.reloadItems(at: [index])
        self.collectionView.allowsMultipleSelection = false
        self.navigationItem.rightBarButtonItem = editButtonItem
        self.navigationItem.title = "Camera Roll"
        trashButtonOutlet.isEnabled = false
        editButtonOutlet.isEnabled = false
        editButtonOutlet.tintColor = UIColor.clear
        navigationController?.hidesBarsOnTap = false
    }
    
    
    func collectionView(_ collectionView: UICollectionView, layout collectionViewLayout: UICollectionViewLayout, sizeForItemAt indexPath: IndexPath) -> CGSize {
        let width = collectionView.frame.width / 4-1
        return CGSize(width: width, height: width)
    }
    
    func collectionView(_ collectionView: UICollectionView, layout collectionViewLayout: UICollectionViewLayout, minimumLineSpacingForSectionAt section: Int) -> CGFloat {
        return 1.0
    }
    
    func collectionView(_ collectionView: UICollectionView, layout collectionViewLayout: UICollectionViewLayout, minimumInteritemSpacingForSectionAt section: Int) -> CGFloat {
        return 1.0
    }
    
    override func collectionView(_ collectionView: UICollectionView, didHighlightItemAt indexPath: IndexPath) {
        UIView.animate(withDuration: 0.5) {
            if let cell = collectionView.cellForItem(at: indexPath) {
                cell.transform = .init(scaleX: 0.95, y: 0.95)
            }
        }
    }
    
    override func collectionView(_ collectionView: UICollectionView, didUnhighlightItemAt indexPath: IndexPath) {
        UIView.animate(withDuration: 0.5) {
            if let cell = collectionView.cellForItem(at: indexPath) {
                cell.transform = .identity
                cell.contentView.backgroundColor = .clear
            }
        }
    }
    
    
    /*
     // MARK: - Navigation
     //In a storyboard-based application, you will often want to do a little preparation before navigation
     override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
     }
     }
     */
    
    // MARK: UICollectionViewDelegate
    /*
     // Uncomment this method to specify if the specified item should be highlighted during tracking
     override func collectionView(_ collectionView: UICollectionView, shouldHighlightItemAt indexPath: IndexPath) -> Bool {
     return true
     }
     */
    
    /*
     // Uncomment this method to specify if the specified item should be selected
     override func collectionView(_ collectionView: UICollectionView, shouldSelectItemAt indexPath: IndexPath) -> Bool {
     return true
     }*/
    
    /*
     // Uncomment these methods to specify if an action menu should be displayed for the specified item, and react to actions performed on the item
     override func collectionView(_ collectionView: UICollectionView, shouldShowMenuForItemAt indexPath: IndexPath) -> Bool {
     return false
     }
     
     override func collectionView(_ collectionView: UICollectionView, canPerformAction action: Selector, forItemAt indexPath: IndexPath, withSender sender: Any?) -> Bool {
     return false
     }
     
     override func collectionView(_ collectionView: UICollectionView, performAction action: Selector, forItemAt indexPath: IndexPath, withSender sender: Any?) {
     
     }
     */
    
}
