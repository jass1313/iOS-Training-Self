//
//  ShowVc.swift
//  CollectionView
//
//  Created by KiwiTech on 25/03/19.
//  Copyright © 2019 Jasbeer Singh. All rights reserved.
//

import UIKit

class ShowVc: UIViewController {
    
     var imagePic:UIImage!
    
    @IBOutlet weak var imageViews: UIImageView!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        if imagePic != nil {
            imageViews.image = imagePic
        } else {
            imageViews.image = UIImage(named: "noimage")
        }
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
