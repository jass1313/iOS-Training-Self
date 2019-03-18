//
//  TableViewController.swift
//  TableView3
//
//  Created by KiwiTech on 13/03/19.
//  Copyright © 2019 KiwiTech. All rights reserved.
//

import UIKit

class TableViewController: UITableViewController, UISearchResultsUpdating {
    
    var count = 0
    var filteredData: [String]!
    var searchController: UISearchController!
    override func viewDidLoad() {
        super.viewDidLoad()
        // Uncomment the following line to preserve selection between presentations
        // self.clearsSelectionOnViewWillAppear = false
        self.navigationItem.setRightBarButtonItems([self.editButtonItem,self.addButtonOutlet], animated: true)
        self.navigationController?.toolbar.isHidden = true
        deleteButtonOutlet.isEnabled = false
        filteredData = arrayClass.array
        
        searchController = UISearchController(searchResultsController: nil)
        searchController.searchResultsUpdater = self
        searchController.dimsBackgroundDuringPresentation = false
        searchController.searchBar.sizeToFit()
        tableView.tableHeaderView = searchController.searchBar
        definesPresentationContext = true
        tableView.contentOffset = CGPoint(x: 0, y: searchController.searchBar.frame.size.height)
    }
    
    
    @IBOutlet weak var deleteButtonOutlet: UIBarButtonItem!
    @IBOutlet weak var addButtonOutlet: UIBarButtonItem!
    
    @IBAction func deleteButton(_ sender: Any) {
        if let selectedRows = tableView.indexPathsForSelectedRows {
            var items = [String]()
            for indexPath in selectedRows  {
                items.append(arrayClass.array[indexPath.row])
                filteredData = arrayClass.array
            }
            for item in items {
                if let index = arrayClass.array.index(of: item) {
                    arrayClass.array.remove(at: index)
                    filteredData = arrayClass.array
                }
            }
            tableView.beginUpdates()
            tableView.deleteRows(at: selectedRows, with: .automatic)
            tableView.endUpdates()
        }
        setEditing(false, animated: true)
    }
    
    @IBAction func addButton(_ sender: Any) {
        let alert = UIAlertController(title: "Add Data", message: "Enter detail", preferredStyle: .alert)
        alert.addTextField(configurationHandler: { (textField) in
            textField.placeholder = "Enter name"
        })
        alert.addAction(UIAlertAction(title: "Add", style: .default, handler: { (action) in
            //Edit data on array
            let name = alert.textFields![0] as UITextField
            arrayClass.array.append(name.text!)
            self.filteredData = arrayClass.array
            self.tableView.reloadData()
        }))
        alert.addAction(UIAlertAction(title: "Cancel", style: .cancel, handler: nil))
        self.present(alert, animated: true)
    }
    
    override func setEditing(_ editing: Bool, animated: Bool) {
        self.navigationController?.toolbar.isHidden = false
        self.tableView.allowsMultipleSelectionDuringEditing = true
        super.setEditing(editing, animated: animated)
        tableView.setEditing(editing, animated: true)
        if editing == true {
            addButtonOutlet.isEnabled = false
        } else if editing == false {
            addButtonOutlet.isEnabled = true
            self.tableView.allowsMultipleSelectionDuringEditing = false
            self.navigationController?.toolbar.isHidden = true
        }
    }
    
    // MARK: - Table view data source
    override func numberOfSections(in tableView: UITableView) -> Int {
        // #warning Incomplete implementation, return the number of sections
        return 1
    }
    
    override func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        // #warning Incomplete implementation, return the number of rows
            return filteredData.count
    }
    
    override func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        let cell = tableView.dequeueReusableCell(withIdentifier: "reuseIdentifier", for: indexPath)
        cell.textLabel?.text = filteredData[indexPath.row]
        return cell
    }
    
    // Override to support conditional editing of the table view.
    override func tableView(_ tableView: UITableView, canEditRowAt indexPath: IndexPath) -> Bool {
        // Return false if you do not want the specified item to be editable.
        return true
    }
    
    override func tableView(_ tableView: UITableView, editActionsForRowAt indexPath: IndexPath) -> [UITableViewRowAction]? {
        let delete = UITableViewRowAction(style: .destructive, title: "Delete") { (action, indexPath) in
            // delete item at indexPath
            arrayClass.array.remove(at: indexPath.row)
            self.filteredData = arrayClass.array
            tableView.deleteRows(at: [indexPath], with: .fade)
        }
        let edit = UITableViewRowAction(style: .normal, title: "Edit") { (action, indexPath) in
            // share item at indexPath
            let alert = UIAlertController(title: "Edit Data", message: "Edit corresponding detail", preferredStyle: .alert)
            alert.addTextField(configurationHandler: { (textField) in
                textField.placeholder = "Enter name"
                textField.text = arrayClass.array[indexPath.row]
            })
            alert.addAction(UIAlertAction(title: "Edit", style: .default, handler: { (action) in
                //Edit data on array
                let name = alert.textFields![0] as UITextField
                arrayClass.array[indexPath.row] = name.text!
                self.filteredData = arrayClass.array
                tableView.reloadData()
            }))
            alert.addAction(UIAlertAction(title: "Cancel", style: .cancel, handler: nil))
            self.present(alert, animated: true)
        }
        edit.backgroundColor = UIColor.gray
        return [delete, edit]
    }
    
    // Override to support rearranging the table view.
    override func tableView(_ tableView: UITableView, moveRowAt fromIndexPath: IndexPath, to: IndexPath) {
        let move = arrayClass.array[fromIndexPath.row]
        arrayClass.array.remove(at: fromIndexPath.row)
        arrayClass.array.insert(move, at: to.row)
        filteredData = arrayClass.array
    }
    
    // Override to support conditional rearranging of the table view.
    override func tableView(_ tableView: UITableView, canMoveRowAt indexPath: IndexPath) -> Bool {
        // Return false if you do not want the item to be re-orderable.
        return true
    }
   
    override func tableView(_ tableView: UITableView, didSelectRowAt indexPath: IndexPath) {
        if (self.tableView.allowsMultipleSelectionDuringEditing == false) {
            let textViewVC = UIStoryboard(name: "Main", bundle: nil).instantiateViewController(withIdentifier: "textViewVC") as! TextViewController
            textViewVC.strTxt = filteredData[indexPath.row]
            self.present(textViewVC,animated: true,completion: nil)
        } else {
            count = count + 1
              deleteButtonOutlet.isEnabled = true
        }
    }
    
    override func tableView(_ tableView: UITableView, didDeselectRowAt indexPath: IndexPath) {
        if (self.tableView.allowsMultipleSelectionDuringEditing == true) {
            count = count - 1
            if count == 0 {
            deleteButtonOutlet.isEnabled = false
            }
        }
    }
    
    func updateSearchResults(for searchController: UISearchController) {
        if let searchText = searchController.searchBar.text {
            filteredData = searchText.isEmpty ? arrayClass.array : arrayClass.array.filter({(dataString: String) -> Bool in
                return dataString.range(of: searchText, options: .caseInsensitive) != nil
            })
            tableView.reloadData()
        }
    }
    
    /*
     // Override to support editing the table view.
     override func tableView(_ tableView: UITableView, commit editingStyle: UITableViewCell.EditingStyle, forRowAt indexPath: IndexPath) {
     if editingStyle == .delete {
     // Delete the row from the data source
     } else if editingStyle == .insert {
     // Create a new instance of the appropriate class, insert it into the array, and add a new row to the table view
     }
     }*/
    
    /*
     // MARK: - Navigation
     
     // In a storyboard-based application, you will often want to do a little preparation before navigation
     override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
     // Get the new view controller using segue.destination.
     // Pass the selected object to the new view controller.
     }
     */
}
