//
//  ShowVc.swift
//  TableView3
//
//  Created by Jasbeer Singh on 17/03/19.
//  Copyright © 2019 KiwiTech. All rights reserved.
//

import UIKit

class ShowVc: UIViewController {

    var imagePic:UIImage!
    var labelToShow:String = ""
    
    @IBOutlet weak var picImage: UIImageView!
    @IBOutlet weak var label: UILabel!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        if labelToShow.count > 0 ||  imagePic.images != nil {
            picImage.image = imagePic
            label.text = labelToShow
        } else {
                labelToShow = "no data found"
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
