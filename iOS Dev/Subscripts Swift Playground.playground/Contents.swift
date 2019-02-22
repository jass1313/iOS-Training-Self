import UIKit

//Subscripts
//Subscript Syntax
/*
 subscript(index: Int) -> Int {
    get {
        // return an appropriate subscript value here
    }
    set(newValue) {
        // perform a suitable setting action here
    }
}
*/
/*
subscript(index: Int) -> Int {
    // return an appropriate subscript value here
}
*/
struct TimesTable {
    let multiplier: Int
    subscript(index: Int) -> Int {
        return multiplier * index
    }
}
let threeTimesTable = TimesTable(multiplier: 3)
print("six times three is \(threeTimesTable[6])")
// Prints "six times three is 18"


//Subscript Usage
var numberOfLegs = ["spider": 8, "ant": 6, "cat": 4]
numberOfLegs["bird"] = 2




//Subscript Options
struct Matrix {
    let rows: Int, columns: Int
    var grid: [Double]
    init(rows: Int, columns: Int) {
        self.rows = rows
        self.columns = columns
        grid = Array(repeating: 0.0, count: rows * columns)
    }
    func indexIsValid(row: Int, column: Int) -> Bool {
        return row >= 0 && row < rows && column >= 0 && column < columns
    }
    
    subscript(row: Int, column: Int) -> Double {
        get {
            assert(indexIsValid(row: row, column: column), "Index out of range")
            return grid[(row * columns) + column]
        }
        set {
            assert(indexIsValid(row: row, column: column), "Index out of range")
            grid[(row * columns) + column] = newValue
        }
    }
}
var matrix = Matrix(rows: 3, columns: 2)
matrix[0, 0] = 1.2
matrix[0, 1] = 1.5
matrix[1, 0] = 3.2
matrix[1, 1] = 3.8
matrix[2, 0] = 5.2
matrix[2, 1] = 2.0

let someValue = matrix[2, 1]

for i in 0..<3 {
    for j in 0..<2 {
        print(matrix[i,j])
    }
}
