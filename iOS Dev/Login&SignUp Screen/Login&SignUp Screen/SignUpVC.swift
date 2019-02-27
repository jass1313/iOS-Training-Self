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
    destinationVC.performSegue(withIdentifier: "SignUpVC", sender: self)
}

    
override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
    if (segue.identifier == "SignUpVC") {
        if email.text == "" || password.text == "" || confirmPassword.text == "" || FirstName.text == "" || LastName.text == "" {
            empty(title: "Missing Info", messge: "No fields can be empty")
        } else if isValidEmail(testStr: email.text!) == false {
            empty(title: "Missing Info", messge: "email is Invalid")
        } else if isPasswordValid(password.text!) == false || isPasswordValid(confirmPassword.text!) == false {
            empty(title: "Missing Info", messge: "password is Invalid")
        } else if password.text! != confirmPassword.text! {
            empty(title: "Missing Info", messge: "Password didn't Match")
        } else if email.text != "" || password.text != "" {
            let vc = segue.destination as! ShowVC
            vc.strText = email.text!
            vc.strLabel = "Your Sucessfully SignUp with:"
        }
    }
}

    
func empty(title:String, messge:String){
    let alertController = UIAlertController(title: title, message: messge, preferredStyle: .alert)
    alertController.addAction(UIAlertAction(title: "ok", style: .default, handler: nil))
    self.present(alertController, animated: true, completion: nil)
}
}
