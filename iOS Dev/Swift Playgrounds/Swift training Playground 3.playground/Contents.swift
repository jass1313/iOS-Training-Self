import UIKit

//Early Exit
func greet(person: [String: String]) {
    guard let name = person["name"] else {
      return
    }
    
    print("Hello \(name)!")
    
    guard let location = person["location"] else {
        print("I hope the weather is nice near you.")
        return
    }
    
    print("I hope the weather is nice in \(location).")
}

greet(person: ["location": "Cupertino"])
// Prints "Hello John!"
// Prints "I hope the weather is nice near you."
greet(person: ["name": "Jane", "location": "Cupertino"])
// Prints "Hello Jane!"
// Prints "I hope the weather is nice in Cupertino."


//Checking API Availability
if #available(tvOS 12, macOS 10.12, watchOS 5.0, iOS 12, *) {
    print("Use iOS 10 APIs on iOS, and use macOS 10.12 APIs on macOS")
} else {
    print("Fall back to earlier iOS and macOS APIs")
}


//Functions
//Defining and Calling Functions
//Defining the Function
func greet1(person: String) -> String {
    let greeting = "Hello, " + person + "!"
    return greeting
}

//calling the Function
greet1(person: "Jasbeer")
print(greet1(person: "Anna"))
// Prints "Hello, Anna!"
print(greet1(person: "Brian"))
// Prints "Hello, Brian!"

//sorter way to return the function
func greetAgain(person: String) -> String {
    return "Hello again, " + person + "!"
}
print(greetAgain(person: "Anna"))
// Prints "Hello again, Anna!"


//Function Parameters and Return Values
//Functions Without Parameters
func sayHelloWorld() -> String {
    return "hello, world"
}
print(sayHelloWorld())
// Prints "hello, world"

//Functions With Multiple Parameters
func greet(person: String, alreadyGreeted: Bool) -> String {
    if alreadyGreeted {
        return greetAgain(person: person)
    } else {
        return greet1(person: person)
    }
}
print(greet(person: "Tim", alreadyGreeted: true))
// Prints "Hello again, Tim!"

//Functions Without Return Values
func greet(person: String) {
    print("Hello, \(person)!")
}
greet(person: "jass")
// Prints "Hello, Dave!"


// return value of a function can be ignored when it is called
func printAndCount(string: String) -> Int {
    print(string)
    return string.count
}
func printWithoutCounting(string: String) {
         printAndCount(string: string)
}
printAndCount(string: "hello, world")
// prints "hello, world" and returns a value of 12
printWithoutCounting(string: "hello, world")
// prints "hello, world" but does not return a value


//Functions with Multiple Return Values
func minMax(array: [Int]) -> (min: Int, max: Int) {
    var currentMin = array[0]
    var currentMax = array[0]
    for value in array[1..<array.count] {
        if value < currentMin {
            currentMin = value
        } else if value > currentMax {
            currentMax = value
             print(currentMax)
        }
    }
    return (currentMin, currentMax)
}
let bounds = minMax(array: [8, -6, 2, 109, 3, 71])
print("min is \(bounds.min) and max is \(bounds.max)")
// Prints "min is -6 and max is 109"


//Optional Tuple Return Types
func minMax1(array: [Int]) -> (min: Int, max: Int)? {
    if array.isEmpty { return nil }
    var currentMin = array[0]
    var currentMax = array[0]
    for value in array[1..<array.count] {
        if value < currentMin {
            currentMin = value
        } else if value > currentMax {
            currentMax = value
        }
    }
    return (currentMin, currentMax)
}

 if let bounds1 = minMax1(array: [8, -6, 2, 109, 3, 71]) {
        print("min is \(bounds1.min) and max is \(bounds1.max)")
 } else {print("nil")}
// Prints "min is -6 and max is 109"


//Function Argument Labels and Parameter Names
func someFunction(firstParameterName: Int, secondParameterName: Int) {
    // In the function body, firstParameterName and secondParameterName
    // refer to the argument values for the first and second parameters.
}
someFunction(firstParameterName: 1, secondParameterName: 2)


//Specifying Argument Labels
func someFunction(argumentLabel parameterName: Int) {
    // In the function body, parameterName refers to the argument value
    // for that parameter.
}

func greet(the person: String, from hometown: String) -> String {
    return "Hello \(person)!  Glad you could visit from \(hometown)."
}
print(greet(the: "Bill", from: "Cupertino"))
// Prints "Hello Bill!  Glad you could visit from Cupertino."


//Omitting Argument Labels
func someFunction(_ firstParameterName: Int, secondParameterName: Int) {
    // In the function body, firstParameterName and secondParameterName
    // refer to the argument values for the first and second parameters.
}
someFunction(1, secondParameterName: 2)



//Default Parameter Values
func someFunction(parameterWithoutDefault: Int, parameterWithDefault: Int = 12) {
    // If you omit the second argument when calling this function, then
    // the value of parameterWithDefault is 12 inside the function body.
    print(parameterWithDefault)
}
someFunction(parameterWithoutDefault: 3, parameterWithDefault: 6) // parameterWithDefault is 6
someFunction(parameterWithoutDefault: 4) // parameterWithDefault is 12

//Variadic Parameters
func arithmeticMean(_ numbers: Double...) -> Double {
    var total: Double = 0
    for number in numbers {
        total += number
    }
    return total / Double(numbers.count)
}
arithmeticMean(1, 2, 3, 4, 5)
// returns 3.0, which is the arithmetic mean of these five numbers
arithmeticMean(3, 8.25, 18.75)
// returns 10.0, which is the arithmetic mean of these three numbers


//In-Out Parameters
func swapTwoInts(_ a: inout Int, _ b: inout Int) {
    let temporaryA = a
    a = b
    b = temporaryA
}

var someInt = 3
var anotherInt = 107
swapTwoInts(&someInt, &anotherInt)
print("someInt is now \(someInt), and anotherInt is now \(anotherInt)")
// Prints "someInt is now 107, and anotherInt is now 3"


//Function Types
//“A function that has two parameters, both of type Int, and that returns a value of type Int.”
func addTwoInts(_ a: Int, _ b: Int) -> Int {
    return a + b
}
func multiplyTwoInts(_ a: Int, _ b: Int) -> Int {
    return a * b
}
//The type of this function is () -> Void, or “a function that has no parameters, and returns Void.”
func printHelloWorld() {
    print("hello, world")
}

//Using Function Types
/*“Define a variable called mathFunction, which has a type of ‘a function that takes two Int values, and returns an Int value.’ Set this new variable to refer to the function called addTwoInts.”*/
var mathFunction: (Int, Int) -> Int = addTwoInts
print("Result: \(mathFunction(2, 3))")
// Prints "Result: 5"

mathFunction = multiplyTwoInts
print("Result: \(mathFunction(2, 3))")
// Prints "Result: 6"

let anotherMathFunction = addTwoInts
print("Result: \(anotherMathFunction(2, 3))")
// anotherMathFunction is inferred to be of type (Int, Int) -> Int


//Function Types as Parameter Types
func printMathResult(func mathFunction: (Int, Int) -> Int, a: Int, b: Int) {
    print("Result: \(mathFunction(a, b))")
}
printMathResult(func: addTwoInts, a: 3, b: 5)
// Prints "Result: 8"


//Function Types as Return Types
func stepForward(_ input: Int) -> Int {
    return input + 1
}
func stepBackward(_ input: Int) -> Int {
    return input - 1
}

func chooseStepFunction(backward: Bool) -> (Int) -> Int {
    return backward ? stepBackward : stepForward
    
}
var currentValue = 3
let moveNearerToZero = chooseStepFunction(backward: currentValue > 0)
// moveNearerToZero now refers to the stepBackward() function

print("Counting to zero:")
while currentValue > -1 {
    print("\(currentValue)... ")
    currentValue = moveNearerToZero(currentValue)
}
// 3...
// 2...
// 1...
// 0...

//This is how we can call a function throw return a fuction
func stepBackward1(_ input: Int) -> Int {
    return input - 1
}
func chooseStepFunction1(_ backward: Int) -> (Int) -> Int {
    return stepBackward1
}
var currentValue1 = 3
var jass = chooseStepFunction1(currentValue1)

while currentValue1 > -1 {
    print("\(currentValue1)... ")
    currentValue1 = jass(currentValue1)
}


//Nested Functions
func chooseStepFunction2(backward: Bool) -> (Int) -> Int {
    func stepForward(input: Int) -> Int {
        return input + 1
        
    }
    func stepBackward(input: Int) -> Int {
        return input - 1
        
    }
    return backward ? stepBackward : stepForward
}
var currentValue2 = -4
let moveNearerToZero2 = chooseStepFunction2(backward: currentValue2 > 0)
// moveNearerToZero now refers to the nested stepForward() function
while currentValue2 < 1 {
    print("\(currentValue2)... ")
    currentValue2 = moveNearerToZero2(currentValue2)
}
print("zero!")
// -4...
// -3...
// -2...
// -1...
// zero!


//This is how we can call a function throw return with nested Loop
func chooseStepFunction3(_ backward: Int) -> (Int) -> Int {
    func stepForward(_ input: Int) -> Int {return input + 1}
    return stepForward
}
var currentValue3 = -4
var jass3 = chooseStepFunction3(currentValue3)

while currentValue3 < 1 {
    print("\(currentValue3)... ")
    currentValue3 = jass3(currentValue3)
}
