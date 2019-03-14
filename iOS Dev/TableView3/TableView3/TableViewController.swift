//
//  TableViewController.swift
//  TableView3
//
//  Created by KiwiTech on 13/03/19.
//  Copyright © 2019 KiwiTech. All rights reserved.
//

import UIKit

class TableViewController: UITableViewController,listUpdate {
    
    var trueFalse:Bool = false
    
    @IBOutlet weak var butColor: UIBarButtonItem!
    
    @IBAction func Edit(_ sender: Any) {
        self.tableView.allowsMultipleSelectionDuringEditing = true
        isEditing = !isEditing
        if isEditing == true {
            trueFalse = true
            butColor.tintColor = UIColor.blue
        } else if !isEditing == true {
            trueFalse = false
            butColor.tintColor = UIColor.gray
        }
    }
    
    
    @IBAction func DeleteBut(_ sender: Any) {
        if let selectedRows = tableView.indexPathsForSelectedRows {
            var items = [String]()
            for indexPath in selectedRows  {
                items.append(arrayClass.array[indexPath.row])
            }
            for item in items {
                if let index = arrayClass.array.index(of: item) {
                    arrayClass.array.remove(at: index)
                }
            }
            tableView.beginUpdates()
            tableView.deleteRows(at: selectedRows, with: .automatic)
            tableView.endUpdates()
        }
    }
    
    
    @IBAction func AddBut(_ sender: Any) {
        let alert = UIAlertController(title: "Add Data", message: "Enter detail", preferredStyle: .alert)
        alert.addTextField(configurationHandler: { (textField) in
            textField.placeholder = "Enter name"
        })
        alert.addAction(UIAlertAction(title: "Add", style: .default, handler: { (action) in
            //Edit data on array
            let name = alert.textFields![0] as UITextField
            arrayClass.array.append(name.text!)
            self.tableView.reloadData()
        }))
        alert.addAction(UIAlertAction(title: "Cancel", style: .cancel, handler: nil))
        self.present(alert, animated: true)
    }
    
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Uncomment the following line to preserve selection between presentations
        // self.clearsSelectionOnViewWillAppear = false
        // self.navigationItem.rightBarButtonItem = self.editButtonItem
        butColor.tintColor = UIColor.gray
    }
    
    func oneRecord(type: String) {
        arrayClass.array.append(type)
        tableView.reloadData()
        print(arrayClass.array)
    }
    
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        if segue.identifier == "EnterDetalVC" {
            let enterDetailVc = segue.destination as! EnterDetailVC
            enterDetailVc.delegate = self
        }
    }
    
    // MARK: - Table view data source
    override func numberOfSections(in tableView: UITableView) -> Int {
        // #warning Incomplete implementation, return the number of sections
        return 1
    }
    
    override func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        // #warning Incomplete implementation, return the number of rows
        return arrayClass.array.count
    }
    
    override func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        let cell = tableView.dequeueReusableCell(withIdentifier: "reuseIdentifier", for: indexPath)
        cell.textLabel!.text = arrayClass.array[indexPath.row]
        
        return cell
    }
    
    // Override to support conditional editing of the table view.
    override func tableView(_ tableView: UITableView, canEditRowAt indexPath: IndexPath) -> Bool {
        // Return false if you do not want the specified item to be editable.
        return true
    }
    
    // Override to support editing the table view.
    override func tableView(_ tableView: UITableView, commit editingStyle: UITableViewCell.EditingStyle, forRowAt indexPath: IndexPath) {
        if editingStyle == .delete {
            // Delete the row from the data source
            arrayClass.array.remove(at: indexPath.row)
            tableView.deleteRows(at: [indexPath], with: .fade)
        } else if editingStyle == .insert {
            // Create a new instance of the appropriate class, insert it into the array, and add a new row to the table view
        }    
    }
    
    // Override to support rearranging the table view.
    override func tableView(_ tableView: UITableView, moveRowAt fromIndexPath: IndexPath, to: IndexPath) {
        let move = arrayClass.array[fromIndexPath.row]
        arrayClass.array.remove(at: fromIndexPath.row)
        arrayClass.array.insert(move, at: to.row)
    }
    
    // Override to support conditional rearranging of the table view.
    override func tableView(_ tableView: UITableView, canMoveRowAt indexPath: IndexPath) -> Bool {
        // Return false if you do not want the item to be re-orderable.
        return true
    }
    
    
    override func tableView(_ tableView: UITableView, didSelectRowAt indexPath: IndexPath) {
        if (trueFalse == false) {
            let alert = UIAlertController(title: "Edit Data", message: "Edit corresponding detail", preferredStyle: .alert)
            alert.addTextField(configurationHandler: { (textField) in
                textField.placeholder = "Enter name"
                textField.text = arrayClass.array[indexPath.row]
            })
            alert.addAction(UIAlertAction(title: "Edit", style: .default, handler: { (action) in
                //Edit data on array
                let name = alert.textFields![0] as UITextField
                arrayClass.array[indexPath.row] = name.text!
                tableView.reloadData()
            }))
            alert.addAction(UIAlertAction(title: "Cancel", style: .cancel, handler: nil))
            self.present(alert, animated: true)
        }
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
