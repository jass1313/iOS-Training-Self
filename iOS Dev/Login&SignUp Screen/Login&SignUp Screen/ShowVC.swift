//
//  ShowVC.swift
//  Login&SignUp Screen
//
//  Created by KiwiTech on 25/02/19.
//  Copyright © 2019 KiwiTech. All rights reserved.
//

import UIKit

class ShowVC: UIViewController {
    @IBOutlet weak var ShowLabel: UILabel!
    @IBOutlet weak var loginLabel: UILabel!
    
    
    @IBAction func logout(_ sender: Any) {
        let loginVc = UIStoryboard(name: "Main", bundle: nil).instantiateViewController(withIdentifier: "loginVc")
        self.present(loginVc,animated: true,completion: nil)
    }
    
    var strText: String = ""
    var strLabel: String = ""
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any aditional setup after loading the view, typically from a nib.
        if strText.count > 0 {
            loginLabel.text = strText
            ShowLabel.text = strLabel
        } else {
            loginLabel.text = "No Value Foune"
        }
    
    }
}
