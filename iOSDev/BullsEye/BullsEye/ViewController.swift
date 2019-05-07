//
//  ViewController.swift
//  BullsEye
//
//  Created by KiwiTech on 30/01/19.
//  Copyright © 2019 KiwiTech. All rights reserved.
//

import UIKit

class ViewController: UIViewController {
    
    var currentValue: Int = 1
    var targetValue: Int = 0
    var sum: Int = 0
    var score = 0
    var count = 0
    
    
    @IBOutlet weak var slider: UISlider!
    @IBOutlet weak var labelUpdate: UILabel!
    @IBOutlet weak var labelUpdate1: UILabel!
    @IBOutlet weak var labelUpdateScore: UILabel!
    @IBOutlet weak var labelUpdateRounds: UILabel!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        let roundValue = slider.value.rounded()
        currentValue = Int(roundValue)
        startNewRound()
        sumTargetCurrent()
        labelupdate()
        
        let thumbImageNormal = #imageLiteral(resourceName: "SliderThumb-Normal")
        slider.setThumbImage(thumbImageNormal, for: .normal)
        
        let thumbImageHighlighted = #imageLiteral(resourceName: "SliderThumb-Highlighted")
        slider.setThumbImage(thumbImageHighlighted, for: .highlighted)
        
        let insets = UIEdgeInsets(top: 0, left: 14, bottom: 0, right: 14)
        
        let trackLeftImage = #imageLiteral(resourceName: "SliderTrackLeft")
        let trackLeftResizeable = trackLeftImage.resizableImage(withCapInsets: insets)
        slider.setMinimumTrackImage(trackLeftResizeable, for: .normal)
        
        let trackRightImage = #imageLiteral(resourceName: "SliderTrackRight")
        let trackRightResizeable = trackRightImage.resizableImage(withCapInsets: insets)
        slider.setMaximumTrackImage(trackRightResizeable, for: .normal)
    }
    
    @IBAction func showAlert() {
        var points: Int = 100 - sum
        
        let title:String
        if sum == 0 {
            title = "Perfect you got 100 Bonus"
            points+=100
        } else if sum == 1 {
            title = "Good you got 50 Bonus"
            points+=50
        } else if sum < 5 {
            title = "you almost had it!"
        } else if sum < 10 {
            title = "Pretty good!"
        } else {
            title = "Not even close..."
        }
        
        score += points
        let message = "The value of the slider is now: \(currentValue)" + "\n The Target value is: \(targetValue)"+"\nThe difference is: \(sum)"+"\nYour scored \(points)"
        let alert = UIAlertController (title: title, message: message, preferredStyle: .alert )
        let action = UIAlertAction(title: "Ok", style: .default, handler: { action in self.startNewRound() })
        alert.addAction(action)
        present(alert,animated: true,completion: nil )
        print("Your score is \(score)")
        labelupdate()
        sumTargetCurrent()
    }
    
    @IBAction func sliderMoved(_ slider: UISlider) {
        let roundValue = slider.value.rounded()
        currentValue = Int(roundValue)
        print("\nThe value of the slider is now: \(currentValue)")
        print("Target Value: \(targetValue)")
        sumTargetCurrent()
        labelupdate()
    }
    
    @IBAction func reset() {
        score = 0
        count = 0
        startNewRound()
    }
    
    func startNewRound() {
        targetValue = Int.random(in: 1...100)
        currentValue = 50
        slider.value = Float(currentValue)
        count += 1
        labelupdate()
    }
    
    func labelupdate() {
        labelUpdate.text = String(targetValue)
        //labelUpdate1.text = String(currentValue)
        labelUpdateScore.text = String(score)
        labelUpdateRounds.text = String(count)
    }
    
    func sumTargetCurrent() {
        sum = currentValue - targetValue
        if sum < 0 {
            sum *= -1
        }
        print("Differnce: \(sum)")
    }
    
}


