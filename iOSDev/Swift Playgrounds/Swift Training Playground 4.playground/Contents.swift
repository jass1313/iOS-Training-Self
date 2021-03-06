import UIKit

//Closures
//The Sorted Method
let names = ["Chris", "Alex", "Ewa", "Barry", "Daniella"]

func backward(_ s1: String, _ s2: String) -> Bool { return s1 > s2 }

var reversedNames = names.sorted(by: backward)
// reversedNames is equal to ["Ewa", "Daniella", "Chris", "Barry", "Alex"]


//Closure Expression Syntax
reversedNames = names.sorted(by: { (s1: String, s2: String) -> Bool
    in
    return s1 > s2
})

//it can even be written on a single line:
reversedNames = names.sorted(by: { (s1: String, s2: String) -> Bool in return s1 > s2 } )

//Inferring Type From Context
reversedNames = names.sorted(by: { s1, s2 in return s1 > s2 } )


//Implicit Returns from Single-Expression Closures
reversedNames = names.sorted(by: { s1, s2 in s1 > s2 } )

//Shorthand Argument Names
reversedNames = names.sorted(by: { $0 > $1 } )

//Operator Methods
reversedNames = names.sorted(by: >)
print(reversedNames)


//Trailing Closures
func someFunctionThatTakesAClosure(closure: () -> Void) {
    reversedNames = names.sorted() { $0 > $1 }
    reversedNames = names.sorted { $0 > $1 }
}

someFunctionThatTakesAClosure(closure: {
    // closure's body goes here
})

someFunctionThatTakesAClosure() {
    // trailing closure's body goes here
}

let digitNames = [
    0: "Zero", 1: "One", 2: "Two",   3: "Three", 4: "Four",
    5: "Five", 6: "Six", 7: "Seven", 8: "Eight", 9: "Nine"
]
let numbers = [16, 58, 510]

let strings = numbers.map { (number) -> String in
    var number = number
    var output = ""
    repeat {
        output = digitNames[number % 10]! + output
        number /= 10
    } while number > 0
    print(output,terminator:" ")
    return output
}
// strings is inferred to be of type [String]
// its value is ["OneSix", "FiveEight", "FiveOneZero"]


//Same work of Trailing Closures doing with function
func String1 (_ number:Int) -> String {
    var number = number
    var output = ""
    repeat {
        output = digitNames[number % 10]! + output
        number /= 10
    } while number > 0
    print(output,terminator:" ")
    return output
}
let strings1 = numbers.map(String1)


func String1 (numbers: [Int]) -> String {
    var output = ""
    for num in numbers {
        var number = num
        output = ""
        repeat {
            output = digitNames[number % 10]! + output
            number /= 10
        } while number > 0
        print(output,terminator:" ")
    }
    return output
}
String1(numbers:numbers)




//Capturing Values
func makeIncrementer(forIncrement amount: Int) -> () -> Int {
    var runningTotal = 0
    func incrementer() -> Int {
        runningTotal += amount
        return runningTotal
    }
    return incrementer
}
let incrementByTen = makeIncrementer(forIncrement: 10)
incrementByTen()
incrementByTen()
incrementByTen()

let incrimentBySeven =  makeIncrementer(forIncrement: 7)
incrimentBySeven()

print(incrementByTen())
print(incrimentBySeven())

let alsoIncrementByTen = incrementByTen
alsoIncrementByTen()
// returns a value of 50

incrementByTen()
// returns a value of 60


//Escaping Closures{D}
var completionHandlers: [() -> Void] = []
func someFunctionWithEscapingClosure(completionHandler: @escaping () -> Void) {
    completionHandlers.append(completionHandler)
}


func someFunctionWithNonescapingClosure(closure: () -> Void) {
    closure()
}

class SomeClass {
    var x = 10
    func doSomething() {
        someFunctionWithEscapingClosure { self.x = 100 }
        someFunctionWithNonescapingClosure { x = 200 }
    }
}

let instance = SomeClass()
instance.doSomething()
print(instance.x)
// Prints "200"

completionHandlers.first?()
print(instance.x)
// Prints "100"

func A (x: Int) -> Bool { return x > 0 }
let A: (Int) -> Bool = { x in return x > 0 } // or ...
let A1 = { (x: Int) in return x > 0 } // ... because the compiler can infer the full closure type



//Autoclosures
var customersInLine = ["Chris", "Alex", "Ewa", "Barry", "Daniella"]
print(customersInLine.count)
// Prints "5"
let customerProvider = { customersInLine.remove(at: 0) }
print(customersInLine.count)
// Prints "5"
print("Now serving \(customerProvider())!")
// Prints "Now serving Chris!"
print(customersInLine.count)
// Prints "4"



// customersInLine is ["Alex", "Ewa", "Barry", "Daniella"]
func serve(customer customerProvider: () -> String) {
    print("Now serving \(customerProvider())!")
}
serve(customer: { customersInLine.remove(at: 0) } )
// Prints "Now serving Alex!"


//passing string value convert to closure with @autoclosure
// customersInLine is ["Ewa", "Barry", "Daniella"]
func serve(customer customerProvider: @autoclosure () -> String) {
    print("Now serving \(customerProvider())!")
}
serve(customer: customersInLine.remove(at: 0))
// Prints "Now serving Ewa!"



// customersInLine is ["Barry", "Daniella"]
var customerProviders: [() -> String] = []
func collectCustomerProviders(_ customerProvider: @autoclosure @escaping () -> String) {
    customerProviders.append(customerProvider)
}
collectCustomerProviders(customersInLine.remove(at: 0))
collectCustomerProviders(customersInLine.remove(at: 0))
print("Collected \(customerProviders.count) closures.")
// Prints "Collected 2 closures."
for customerProvider in customerProviders {
    print("Now serving \(customerProvider())!")
}
// Prints "Now serving Barry!"
// Prints "Now serving Daniella!"




//Excercise of Closures
var numb = { (num: Int) -> Bool in return num > 10 }
numb(10)
numb(11)

let array = [10,20,10,14]
var numb1 = array.map{(num: Int) -> Int in return 0 }
numb1 = array.sorted(by: { (s1, s2) -> Bool in return s1 > s2 })

let array1 = ["ten","twenty","five","four"]
numb1 = array1.map({ (s1) -> Int in return 10 })

/*

var closure = {(closure:Int) -> String in
    if closure == 1 {
        return "One"
    } else if closure == 2 {
        return "Two"
    } else {
        return ""
    }
}
closure(1)*/


func doSomething(number:Int,onSuccess closure:(Int)->Void) {
    closure(number * number * number)
}
doSomething(number: 100) { (numberCube) in
    print(numberCube) // prints  1000000
}



//Fuction take closure as its argument
func closureInFunction(closure:(Int) -> String) {
    let number = 1
    if number == 1 {
        closure(1)
    }
}
closureInFunction { (closure:Int) -> String in
    if closure == 1 {
        return "One"
    } else if closure == 2 {
        return "Two"
    } else {
        return ""
    }
}



//Fuction take closure as its argument
func closureInFunction(number:Int ,closure:(Int) -> String) {
    closure(number)
}
closureInFunction(number: 1) { (closure:Int) -> String in
    if closure == 1 {
        return "One"
    } else if closure == 2 {
        return "Two"
    } else {
        return ""
    }
}

let arry = [2,3,4,5]
for ar in arry {
    print(ar)
    }


let triple: (Int) -> Int = { number in
    3 * number
}
triple(1)

// Or as the very short
let triple2: (Int) -> Int = { 3 * $0 }
triple2(1)

let triple3 = { (number: Int) -> Int in
    let result = 3 * number
    number
    return result
}
triple3(1)


// or as a function
func triple(number: Int) -> Int {
    return 3 * number
}
triple(number:1)




func returnFunc() -> (Int) -> () {
    var counter = 0
    func innerFunc(i: Int) {
        counter += i   
        print("running total is now \(counter)")
    }
    return innerFunc
}

let f = returnFunc()
f(3)
f(4)

let g = returnFunc()
g(2)
g(2)

f(2)

func returnFunc1(number:Int) -> Int {
    var counter = 0
    counter += number
    print("running total is now \(counter)")
    return counter
}
returnFunc1(number: 9)
returnFunc1(number: 10)



var closeButtonPressed = true
func codeinPlayground(completion:(String)->()) {
    
    print("Code, Take a Nap and Relax")
    if closeButtonPressed {
        completion("Close the playground")
    }
}

codeinPlayground { (msg) in
    print(msg)
}
