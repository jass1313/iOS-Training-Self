//
//  TableViewCell.swift
//  CustomCell
//
//  Created by KiwiTech on 04/03/19.
//  Copyright © 2019 KiwiTech. All rights reserved.
//

import UIKit

class TableViewCell: UITableViewCell {

   
    
   
    @IBOutlet weak var myName: UILabel!
    @IBOutlet weak var myLabel: UILabel!
    
    override func awakeFromNib() {
        super.awakeFromNib()
        // Initialization code
    }
    
    override func setSelected(_ selected: Bool, animated: Bool) {
        super.setSelected(selected, animated: animated)

        // Configure the view for the selected state
    }

}
