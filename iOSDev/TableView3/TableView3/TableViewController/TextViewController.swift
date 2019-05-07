//
//  TextViewController.swift
//  TableView3
//
//  Created by Jasbeer Singh on 16/03/19.
//  Copyright © 2019 KiwiTech. All rights reserved.
//

import UIKit

class TextViewController: UIViewController {
    
    var strTxt = ""
    
    @IBAction func backButton(_ sender: Any) {
        self.dismiss(animated: true, completion: nil)
    }
    @IBOutlet weak var textView: UITextView!
    override func viewDidLoad() {
        super.viewDidLoad()
        if strTxt.count > 0 {
            textView.text = strTxt
        } else {
            textView.text = "No Data Found"
        }
        
        // Do any additional setup after loading the view.
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
