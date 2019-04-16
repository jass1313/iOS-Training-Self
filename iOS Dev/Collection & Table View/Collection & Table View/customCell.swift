//
//  customCell.swift
//  Collection & Table View
//
//  Created by KiwiTech on 03/04/19.
//  Copyright © 2019 KiwiTech. All rights reserved.
//

import UIKit

class customCell: UITableViewCell {

    @IBOutlet weak var imageVw: UIImageView!
    @IBOutlet weak var labelName: UILabel!
    @IBOutlet weak var accessLevel: UILabel!
    @IBOutlet weak var labelPost: UILabel!
    @IBOutlet weak var timeLabel: UILabel!
    @IBOutlet weak var likeLabel: UILabel!
    @IBOutlet weak var commentLabel: UILabel!
    
    
    override func awakeFromNib() {
        super.awakeFromNib()
        
        imageVw.layer.cornerRadius = imageVw.frame.size.width / 2
        imageVw.clipsToBounds = true
    }
    
    @IBAction func likeButton(_ sender: Any) {
    }
    
    @IBAction func commentButton(_ sender: Any) {
    }
    
    @IBAction func shareButton(_ sender: Any) {
    }
    
    override func setSelected(_ selected: Bool, animated: Bool) {
        super.setSelected(selected, animated: animated)

        // Configure the view for the selected state
    }
    
    func tableView(_ tableView: UITableView, heightForHeaderInSection section: Int) -> CGFloat {
        return 5.0
    }
    
    // Make the background color show through
    func tableView(_ tableView: UITableView, viewForHeaderInSection section: Int) -> UIView? {
        let headerView = UIView()
        headerView.backgroundColor = UIColor.clear
        return headerView
    }
    
}
