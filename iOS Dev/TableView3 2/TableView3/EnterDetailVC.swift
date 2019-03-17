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
        let record = textView.text!
        delegate?.oneRecord(type: record)
        navigationController?.popViewController(animated: true)
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
