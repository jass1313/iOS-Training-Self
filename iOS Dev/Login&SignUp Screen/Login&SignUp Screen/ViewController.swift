//
//  ViewController.swift
//  Login&SignUp Screen
//
//  Created by KiwiTech on 25/02/19.
//  Copyright © 2019 KiwiTech. All rights reserved.
//

import UIKit

class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any aditional setup after loading the view, typically from a nib.
    }

    @IBOutlet weak var email: UITextField!
    @IBOutlet weak var password: UITextField!
    
    var emailUpdate: String? = ""
    
    func isValidEmail(testStr:String) -> Bool {
        // print("validate calendar: \(testStr)")
        let emailRegEx = "[A-Z0-9a-z._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,64}"
        let emailTest = NSPredicate(format:"SELF MATCHES %@", emailRegEx)
        return emailTest.evaluate(with: testStr)
    }
    
  func isPasswordValid(_ password : String) -> Bool{
        let passwordTest = NSPredicate(format: "SELF MATCHES %@", "^(?=.*[a-z])(?=.*[$@$#!%*?&])[A-Za-z\\d$@$#!%*?&]{8,}")
        return passwordTest.evaluate(with: password)
    }
    
    func labelUpdate() {
        emailUpdate? = email.text!
        let destinationVC = ShowVC()
        destinationVC.strText = email.text!
        // Let's assume that the segue name is called playerSegue
        // This will perform the segue and pre-load the variable for you to use
        destinationVC.performSegue(withIdentifier: "showVC", sender: self)
    }
    
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        if (segue.identifier == "showVC") {
            if email.text == "" || password.text == "" {
                empty(title: "Missing INfo", messge: "No fields can be empty")
            } else if isValidEmail(testStr: email.text!) == false {
                empty(title: "Missing INfo", messge: "email is Invalid")
            } else if isPasswordValid(password.text!) == false  {
                empty(title: "Missing Info", messge: "password is Invalid")
            } else if email.text != "" || password.text != "" {
                let vc = segue.destination as! ShowVC
                vc.strText = email.text!
                vc.strLabel = "Your Sucessfully Login with:"
            }
        }
    }
    
    func empty(title:String, messge:String){
        let alertController = UIAlertController(title: title, message: messge, preferredStyle: .alert)
        alertController.addAction(UIAlertAction(title: "ok", style: .default, handler: nil))
        self.present(alertController, animated: true, completion: nil)
    }
}
