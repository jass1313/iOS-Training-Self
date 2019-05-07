//
//  DetailVC.swift
//  TableView
//
//  Created by KiwiTech on 01/03/19.
//  Copyright © 2019 KiwiTech. All rights reserved.
//

import UIKit

class DetailVC: UIViewController {

    
    @IBOutlet weak var showDetails: UILabel!
    var name = ""
    
    override func viewDidLoad() {
        super.viewDidLoad()
            showDetails.text = "\(name)"
        switch name {
        case "jass":
              self.view.backgroundColor = UIColor.gray
        case "kiwitech":
             self.view.backgroundColor = UIColor.green
        case "jasbeer":
            self.view.backgroundColor = UIColor.red
        default:
            self.view.backgroundColor = UIColor.purple
        }
     
    }
    
    @IBAction func ExitButton(_ sender: Any) {
        self.dismiss(animated: true, completion: nil)
    }
    
    /*
    // MARK: - Navigation

    // In a storyboard-based application, you will often want to do a little preparation before navigation
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        // Get the new view controller using segue.destination.
        // Pass the selected object to the new view controller.
    }
    */

}
