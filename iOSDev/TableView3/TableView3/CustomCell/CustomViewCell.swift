//
//  CustomViewCell.swift
//  TableView3
//
//  Created by Jasbeer Singh on 17/03/19.
//  Copyright © 2019 KiwiTech. All rights reserved.
//

import UIKit

class CustomViewCell: UITableViewCell {
   
    
    @IBOutlet weak var labelName: UILabel!
   
    @IBOutlet weak var pic: UIImageView!
    
    
    override func awakeFromNib() {
        super.awakeFromNib()
        // Initialization code
    }

    override func setSelected(_ selected: Bool, animated: Bool) {
        super.setSelected(selected, animated: animated)

        // Configure the view for the selected state
    }
    
}
