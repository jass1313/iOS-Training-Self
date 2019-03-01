//
//  ViewController.swift
//  Login&SignUp Screen
//
//  Created by KiwiTech on 25/02/19.
//  Copyright © 2019 KiwiTech. All rights reserved.
//

import UIKit

class ViewController: UIViewController {

    @IBOutlet weak var email: UITextField!
    @IBOutlet weak var password: UITextField!
    
    @IBAction func login(_ sender: Any) {
        let loginVc = UIStoryboard(name: "Main", bundle: nil).instantiateViewController(withIdentifier: "showVC") as! ShowVC
                if email.text == "" || password.text == "" {
                    empty(title: "Missing INfo", messge: "No fields can be empty")
                } else if isValidEmail(testStr: email.text!) == false {
                    empty(title: "Missing INfo", messge: "email is Invalid")
                } else if isPasswordValid(password.text!) == false  {
                    empty(title: "Missing Info", messge: "password is Invalid")
                } else if email.text != "" || password.text != "" {
                    loginVc.strText = email.text!
                    loginVc.strLabel = "Your Sucessfully Login with:"
                }
        self.present(loginVc,animated: true,completion: nil)
    }
    
    @IBAction func sign(_ sender: Any) {
        let loginVc = UIStoryboard(name: "Main", bundle: nil).instantiateViewController(withIdentifier: "registerVC")
        self.present(loginVc,animated: true,completion: nil)
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
       
    }
    
func empty(title:String, messge:String){
        let alertController = UIAlertController(title: title, message: messge, preferredStyle: .alert)
        alertController.addAction(UIAlertAction(title: "ok", style: .default, handler: nil))
        self.present(alertController, animated: true, completion: nil)
}

func isValidEmail(testStr:String) -> Bool {
    // print("validate calendar: \(testStr)")
    let emailRegEx = "[A-Z0-9a-z._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,64}"
    let emailTest = NSPredicate(format:"SELF MATCHES %@", emailRegEx)
    return emailTest.evaluate(with: testStr)
}

func isPasswordValid(_ password : String) -> Bool {
    let passwordTest = NSPredicate(format: "SELF MATCHES %@", "^(?=.*[a-z])(?=.*[$@$#!%*?&])[A-Za-z\\d$@$#!%*?&]{8,}")
    return passwordTest.evaluate(with: password)
}

}
