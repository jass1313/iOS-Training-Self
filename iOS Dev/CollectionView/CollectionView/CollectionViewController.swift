//
//  CollectionViewController.swift
//  CollectionView
//
//  Created by Jasbeer Singh on 24/03/19.
//  Copyright © 2019 Jasbeer Singh. All rights reserved.
//

import UIKit

class CollectionViewController: UICollectionViewController, UICollectionViewDelegateFlowLayout {
    
    var animalsPhotos = ["horse.jpg", "cow.jpg", "camel.jpg", "sheap.jpg", "goat.jpg","jass.jpg","jasss.jpg"]
    var count = 0
    var cellIndexPath:Int = 0
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Uncomment the following line to preserve selection between presentations
        // self.clearsSelectionOnViewWillAppear = false
        
        // Uncomment the following line to display an Edit button in the navigation bar for this view controller.
        self.navigationItem.rightBarButtonItem = self.editButtonItem
        editButtonItem.title = "Select"
        self.navigationItem.title = "Camera Roll"
        trashButtonOutlet.isEnabled = false
        
    }
    
    @IBOutlet weak var trashButtonOutlet: UIBarButtonItem!
    
    @IBAction func trashButton(_ sender: Any) {
        if let selectedRows = collectionView.indexPathsForSelectedItems {
            var items = [String]()
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
        
        imageView.image = UIImage(named: animalsPhotos[indexPath.row])
        myCell.layer.borderColor = UIColor.clear.cgColor
        myCell.layer.borderWidth = 0
        return myCell
        
    }
    
    override func collectionView(_ collectionView: UICollectionView, didSelectItemAt indexPath: IndexPath) {
        let cell = collectionView.cellForItem(at: indexPath as IndexPath)
        if self.collectionView.allowsMultipleSelection == true {
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
            let imageView = cell?.viewWithTag(1) as? UIImageView
            imageView?.contentMode = .scaleAspectFit
            cell?.superview?.bringSubviewToFront(cell!
            )
            UIView.animate(withDuration: 0.5, delay: 0.0, usingSpringWithDamping: 0.5, initialSpringVelocity: 0.3, options: .curveEaseInOut, animations: {
                cell?.frame = collectionView.bounds
                cell?.frame.size.height = self.view.frame.height
                cell?.backgroundColor = UIColor.white
                collectionView.isScrollEnabled = false
                
            }, completion: nil)
            self.collectionView.allowsMultipleSelection = true
        }
    }

    override func collectionView(_ collectionView: UICollectionView, didDeselectItemAt indexPath: IndexPath) {
        let cell = collectionView.cellForItem(at: indexPath as IndexPath)
        if self.collectionView.allowsMultipleSelection == true && trashButtonOutlet.isEnabled == true {
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
            let imageView = cell?.viewWithTag(1) as? UIImageView
            imageView?.contentMode = .scaleToFill
            collectionView.isScrollEnabled = true
            collectionView.reloadItems(at: [indexPath])
            self.collectionView.allowsMultipleSelection = false
        }
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
                cell.contentView.backgroundColor = UIColor(red: 0.95, green: 0.95, blue: 0.95, alpha: 1)
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
