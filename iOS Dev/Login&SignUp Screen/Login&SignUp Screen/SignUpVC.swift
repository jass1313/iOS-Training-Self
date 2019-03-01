//
//  SignUpVC.swift
//  Login&SignUp Screen
//
//  Created by KiwiTech on 26/02/19.
//  Copyright © 2019 KiwiTech. All rights reserved.
//

import UIKit

class SignUpVC: UIViewController {
    @IBOutlet weak var FirstName: UITextField!
    @IBOutlet weak var LastName: UITextField!
    @IBOutlet weak var email: UITextField!
    @IBOutlet weak var password: UITextField!
    @IBOutlet weak var confirmPassword: UITextField!
    
    @IBAction func backToLogin(_ sender: Any) {
        let loginVc = UIStoryboard(name: "Main", bundle: nil).instantiateViewController(withIdentifier: "loginVc")
        self.present(loginVc,animated: true,completion: nil)
    }
    
    @IBAction func SignUpToShow(_ sender: Any) {
        let loginVc = UIStoryboard(name: "Main", bundle: nil).instantiateViewController(withIdentifier: "showVC") as! ShowVC
        if email.text == "" || password.text == "" || confirmPassword.text == "" || FirstName.text == "" || LastName.text == "" {
            empty(title: "Missing Info", messge: "No fields can be empty")
        } else if isValidEmail(testStr: email.text!) == false {
            empty(title: "Missing Info", messge: "email is Invalid")
        } else if isPasswordValid(password.text!) == false || isPasswordValid(confirmPassword.text!) == false {
            empty(title: "Missing Info", messge: "password is Invalid")
        } else if password.text! != confirmPassword.text! {
            empty(title: "Missing Info", messge: "Password didn't Match")
        } else if email.text != "" || password.text != "" {
            loginVc.strText = email.text!
            loginVc.strLabel = "Your Sucessfully SignUp with:"
        }
        self.present(loginVc,animated: true,completion: nil)
    }
    
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
    
    func empty(title:String, messge:String){
        let alertController = UIAlertController(title: title, message: messge, preferredStyle: .alert)
        alertController.addAction(UIAlertAction(title: "ok", style: .default, handler: nil))
        self.present(alertController, animated: true, completion: nil)
    }
}
