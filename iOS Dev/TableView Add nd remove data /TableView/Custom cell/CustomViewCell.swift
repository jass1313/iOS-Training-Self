//
//  CustomViewCell.swift
//  TableView
//
//  Created by KiwiTech on 01/03/19.
//  Copyright © 2019 KiwiTech. All rights reserved.
//

import UIKit

class CustomViewCell: UITableViewCell {

    @IBOutlet var messageBackground: UIView!
    @IBOutlet var senderName: UILabel!
    @IBOutlet var messageBody: UILabel!
    
  
    
    
    
    override func awakeFromNib() {
        super.awakeFromNib()
        // Initialization code
    }

    override func setSelected(_ selected: Bool, animated: Bool) {
        super.setSelected(selected, animated: animated)

        // Configure the view for the selected state
    }
    
}
