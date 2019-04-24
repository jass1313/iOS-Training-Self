//
//  TableViewController.swift
//  Collection & Table View
//
//  Created by KiwiTech on 22/04/19.
//  Copyright © 2019 KiwiTech. All rights reserved.
//

import UIKit

class TableViewController: UITableViewController {
 
    override func viewDidLoad() {
        super.viewDidLoad()
        //navigation title change
        self.navigationItem.title = "Series"
    }

    //Table View
    override func numberOfSections(in tableView: UITableView) -> Int {
        return 1
    }

    override func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return 10
    }

   
    override func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        let cell = tableView.dequeueReusableCell(withIdentifier: "tableCell", for: indexPath)
        let imageView = cell.viewWithTag(1) as! UIImageView
        imageView.frame = CGRect(x: 0, y: 0, width: view.frame.width, height: view.frame.width / 2.38)
        imageView.image = UIImage(named: "8")
        
        //Add gradient in the bottom of image view
        if imageView.subviews.count == 0 {
        let uiView = UIView()
        uiView.frame = CGRect(x: 0, y: imageView.frame.height/3, width: imageView.frame.width, height: imageView.frame.height/3)
        let gradient = CAGradientLayer()
        gradient.frame = uiView.frame
        gradient.locations = [0.0, 1.0]
        gradient.colors = [
        UIColor(white: 0, alpha: 0.0).cgColor,
        UIColor.black.cgColor,
        UIColor(white: 0, alpha: 2.0).cgColor
        ]
        uiView.layer.insertSublayer(gradient, at: 0)
        imageView.addSubview(uiView)
        }
        return cell
    }
    
    //Table View Background modify with gradient
//  private func addBackgroundGradient() {
//        let collectionViewBackgroundView = UIView()
//        let gradientLayer = CAGradientLayer()
//        gradientLayer.frame.size = view.frame.size
//        // Start and end for left to right gradient
//        gradientLayer.startPoint = CGPoint(x: 0.0, y: 0.0)
//        gradientLayer.endPoint = CGPoint(x: 0.8, y: 1.0)
//        gradientLayer.colors = [UIColor.orange.cgColor, UIColor.green.cgColor]
//        tableView.backgroundView = collectionViewBackgroundView
//        tableView.backgroundView?.layer.addSublayer(gradientLayer)
   // }
    

    /*
    // Override to support conditional editing of the table view.
    override func tableView(_ tableView: UITableView, canEditRowAt indexPath: IndexPath) -> Bool {
        // Return false if you do not want the specified item to be editable.
        return true
    }
    */

    /*
    // Override to support editing the table view.
    override func tableView(_ tableView: UITableView, commit editingStyle: UITableViewCellEditingStyle, forRowAt indexPath: IndexPath) {
        if editingStyle == .delete {
            // Delete the row from the data source
            tableView.deleteRows(at: [indexPath], with: .fade)
        } else if editingStyle == .insert {
            // Create a new instance of the appropriate class, insert it into the array, and add a new row to the table view
        }    
    }
    */

    /*
    // Override to support rearranging the table view.
    override func tableView(_ tableView: UITableView, moveRowAt fromIndexPath: IndexPath, to: IndexPath) {

    }
    */

    /*
    // Override to support conditional rearranging of the table view.
    override func tableView(_ tableView: UITableView, canMoveRowAt indexPath: IndexPath) -> Bool {
        // Return false if you do not want the item to be re-orderable.
        return true
    }
    */

    /*
    // MARK: - Navigation

    // In a storyboard-based application, you will often want to do a little preparation before navigation
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        // Get the new view controller using segue.destination.
        // Pass the selected object to the new view controller.
    }
    */

}
