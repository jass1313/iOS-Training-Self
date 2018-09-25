//
//  ViewController.swift
//  TestArrm
//
//  Created by KiwiTech on 25/09/18.
//  Copyright © 2018 KiwiTech. All rights reserved.
//

import UIKit

class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
        amstrongNumber(num: 153)

    }

    func amstrongNumber(num:Int) {
        var sum = 0
        var armNum = num
        var ks = 0
        
        
        
        while armNum != 0  {
            
            ks = armNum % 10
            armNum /= 10
            
            sum = sum + ks * ks * ks
            
            print(sum)
            
            if sum == num {
                print("Yes its a armstrong number")
            } else {
                print("no its not a armstrong number")
            }
        }
    }
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }


}

