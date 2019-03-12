//
//  ViewController2.swift
//  TableView
//
//  Created by KiwiTech on 01/03/19.
//  Copyright © 2019 KiwiTech. All rights reserved.
//

import UIKit


class ViewController2: UIViewController, UITableViewDelegate, UITableViewDataSource, listUpdate {

    var array = ["jass","kiwitech","apple","dell","hp","microsoft"]
    
    @IBOutlet weak var tableView: UITableView!
    
    override func viewDidLoad() {
        super.viewDidLoad()
       // tableView.dataSource = self
       // tableView.delegate = self
        }
    
    func oneRecord(type: String) {
        array.append(type)
        tableView.reloadData()
        print(array)
    }
    
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        if segue.identifier == "detailVC" {
            let vc = segue.destination as! DetailVC
            vc.name = sender as! String
        }
        if segue.identifier == "EnterDetalVC" {
            let enterDetailVc = segue.destination as! EnterDetaillVC
            enterDetailVc.delegate = self
            
        }
    }
 
    func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return array.count
    }
    
    func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        let cell = UITableViewCell()
        cell.textLabel?.text = array[indexPath.row]
        return cell
    }
    
    func tableView(_ tableView: UITableView, didSelectRowAt indexPath: IndexPath) {
           performSegue(withIdentifier: "detailVC", sender: array[indexPath.row])
    }
    
    func tableView(_ tableView: UITableView, commit editingStyle: UITableViewCell.EditingStyle, forRowAt indexPath: IndexPath) {
        if editingStyle == .delete {
            array.remove(at: indexPath.row)
            tableView.deleteRows(at: [indexPath], with: .fade)
        }
    }
}
