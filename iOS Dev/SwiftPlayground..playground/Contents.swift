import UIKit

var str = "Hello, playground"
print("Hello, world!")


let integer = 70
let double = 70.0
let double2:Double = 70
print(double2)

let widht = 94
let label = "the width is \(widht) "
let widthLabel = label+String(widht)

let qust = """
jasbeer singh

i hav etheredwbdcikd \(widht+widht)
"""

//closure
var numbers = [20, 19, 7, 12]
let sortedNumbers = numbers.sorted { $0 > $1 }
print(sortedNumbers)

let mappedNumbers = numbers.map({ number in 3 * number })
print(mappedNumbers)

numbers.map({ (number: Int) -> Int in
    let result = 3 * number
    return result
})

numbers.map({(number: Int)-> Int in
    if number % 2 != 0 {
        return 0
    }
    return 1
})

//class
/*
class MarksStruct {
    var mark: Int
     init(mark: Int) {
        self.mark = mark
    }
}

class studentMarks {
    var mark = 300
}

let marks = studentMarks()
print("Mark is \(marks.mark)")
*/
class MarksStruct {
    var mark: Int
    init(mark: Int) {
        self.mark = mark
    }
}

class studentMarks {
    var mark1 = 300
    var mark2 = 400
    var mark3 = 900
}

let marks = studentMarks()
print("Mark1 is \(marks.mark1)")
print("Mark2 is \(marks.mark2)")
print("Mark3 is \(marks.mark3)")




class SampleClass: Equatable {
    let myProperty: String
    init(s: String) {
        myProperty = s
    }
}

func ==(lhs: SampleClass, rhs: SampleClass) -> Bool {
    return lhs.myProperty == rhs.myProperty
}

let spClass1 = SampleClass(s: "Hello")
let spClass2 = SampleClass(s: "Hello")

spClass1 === spClass2 // false
print("\(spClass1)")

spClass1 !== spClass2 // true
print("\(spClass2)")




