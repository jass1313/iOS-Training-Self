//
//  EnterDetailVC.swift
//  TableView3
//
//  Created by KiwiTech on 13/03/19.
//  Copyright © 2019 KiwiTech. All rights reserved.
//

import UIKit

protocol listUpdate {
    func oneRecord(type: String)
}

class EnterDetailVC: UIViewController {
    var delegate: listUpdate?
    
    @IBOutlet weak var textView: UITextField!
    
    @IBAction func AddBut(_ sender: Any) {
        if textView.text! == ""  {
            empty(title: "Missing Info", messge: "Please fill in the required Fields")
        } else {
            let record = textView.text!
            delegate?.oneRecord(type: record)
            navigationController?.popViewController(animated: true)
        }
    }
    
    func empty(title:String, messge:String){
        let alertController = UIAlertController(title: title, message: messge, preferredStyle: .alert)
        alertController.addAction(UIAlertAction(title: "ok", style: .default, handler: nil))
        self.present(alertController, animated: true, completion: nil)
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
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
