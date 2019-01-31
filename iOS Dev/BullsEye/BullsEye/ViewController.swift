//
//  ViewController.swift
//  BullsEye
//
//  Created by KiwiTech on 30/01/19.
//  Copyright © 2019 KiwiTech. All rights reserved.
//

import UIKit

class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
    }

    @IBAction func showAlert() {
   let alert = UIAlertController (title: "Hello World", message: "This is my First App!", preferredStyle: .alert )

    let action = UIAlertAction(title: "Awesome", style: .default, handler: nil  )
        
        alert.addAction(action)
        
        present(alert,animated: true,completion: nil )
    }
    
    @IBAction func knockKnock() {
       let alert = UIAlertController (title: "Hello Chandan", message: "Im Already told you this is my first app why you hit me", preferredStyle: .actionSheet)
        
        let action = UIAlertAction(title: "Say Sorry!", style: .default, handler: nil)
        
        alert.addAction(action)
        
        present(alert,animated: true,completion: nil)
    }

}

