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
        let showVc = UIStoryboard(name: "Main", bundle: nil).instantiateViewController(withIdentifier: "showVC") as! ShowVC
                if email.text == "" || password.text == "" {
                    empty(title: "Missing Info", messge: "Please fill in the required Fields")
                } else if isValidEmail(testStr: email.text!) == false {
                    empty(title: "Error", messge: "Email is Invalid")
                } else if isPasswordValid(password.text!) == false  {
                    empty(title: "Error", messge: "Password is Invalid")
                } else if email.text != "" || password.text != "" {
                    showVc.strText = email.text!
                    showVc.strLabel = "You have Sucessfully Logged In with:"
                }
        self.present(showVc,animated: true,completion: nil)
    }
    
    @IBAction func sign(_ sender: Any) {
        let registerVc = UIStoryboard(name: "Main", bundle: nil).instantiateViewController(withIdentifier: "registerVC")
        self.present(registerVc,animated: true,completion: nil)
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
