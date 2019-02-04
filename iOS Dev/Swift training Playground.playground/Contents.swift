import UIKit

var str = "Hello, playground"



//starting the swift with basics
//Constants and Variables
let maximumNumberOfLoginAttempts = 10
var currentLoginAttempt = 0

var x = 0.0, y = 0.0, z = 0.0
//Type Annotations
//“Declare a variable called welcomeMessage that is of type String.”
//var welcomeMessage: String
//welcomeMessage = "Hello"
//var red, green, blue: Double
//Naming Constants and Variables
let π = 3.14159
let 你好 = "你好世界"
let 🐶🐮 = "dogcow"

var friendlyWelcome = "Hello!"
friendlyWelcome = "Bonjour!"
// friendlyWelcome is now "Bonjour!"

let languageName = "Swift"
//languageName = "Swift++"
// This is a compile-time error: languageName cannot be changed.

//Printing Constants and Variables
print(friendlyWelcome,languageName)
// Prints "Bonjour!"
print(_:separator:terminator:)
print(100,"jass")

print("The current value of friendlyWelcome is \(friendlyWelcome)")
// Prints "The current value of friendlyWelcome is Bonjour!"

//Comments
// This is a comment.

/* This is also a comment
 but is written over multiple lines. */

/* This is the start of the first multiline comment.
 /* This is the second, nested multiline comment. */
 This is the end of the first multiline comment. */

//Semicolons
let cat = "🐱"; print(cat)

//Integers Integer Bounds
let minValue = UInt8.min  // minValue is equal to 0, and is of type UInt8
let maxValue = UInt8.max  // maxValue is equal to 255, and is of type UInt8
print(minValue)
print(maxValue)

//Floating-Point Numbers
var value:Float = 3.14159
var value2:Double = 5.456


//Type Safety and Type Inference
let meaningOfLife = 42
// meaningOfLife is inferred to be of type Int
let pi = 3.14159
// pi is inferred to be of type Double
let anotherPi = 3 + 0.14159
// anotherPi is also inferred to be of type Double

//Numeric Literals
let decimalInteger = 17
let binaryInteger = 0b10001       // 17 in binary notation
let octalInteger = 0o21           // 17 in octal notation
let hexadecimalInteger = 0x11     // 17 in hexadecimal notation


let decimalDouble = 12.1875
let exponentDouble = 1.21875e1
let hexadecimalDouble = 0xC.3p0

let trying = 1.25e2 //(1.25*10*10)
let trying1 = 1.25e-2 //(1.25*-10*-10)
let trying2 = 0xFp2 //(0*15*2*2)
let trying3 = 0xFp-2 //(0x15*-2*-2)

let paddedDouble = 000123.456
let oneMillion = 1_000_000
let justOverOneMillion = 1_000_000.000_000_1

//Numeric Type Conversion
//Integer Conversion
//let cannotBeNegative: UInt8 = -1
// UInt8 cannot store negative numbers, and so this will report an error
//let tooBig: Int8 = Int8.max + 1
// Int8 cannot store a number larger than its maximum value,
// and so this will also report an error
let tooBig: Int16 = Int16.max
print(tooBig)

let cannotBee: UInt16 = 65535
let cannotBee1: Int16 = 32767

let twoThousand: UInt16 = 2_000
let one: UInt8 = 1
let twoThousandAndOne = twoThousand + UInt16(one)
print(twoThousandAndOne)

//Integer and Floating-Point Conversion
let three = 3
let pointOneFourOneFiveNine = 0.14159
let pii = Double(three) + pointOneFourOneFiveNine
// pii equals 3.14159, and is inferred to be of type Double

let integerPii = Int(pii)
print(integerPii)
// integerPio equals 3, and is inferred to be of type Int

//Type Aliases
typealias AudioSample = UInt16

var maxAmplitudeFound = AudioSample.max
// maxAmplitudeFound is now 0

//Booleans
let orangesAreOrange = true
let turnipsAreDelicious = false

if turnipsAreDelicious {
    print("Mmm, tasty turnips!")
} else {
    print("Eww, turnips are horrible.")
}
// Prints "Eww, turnips are horrible."
/*
let i = 1
if i {
    // this example will not compile, and will report an error
}
*/
let i = 1
if i == 1 {
    print(i)
    // this example will compile successfully
}

//Tuples
let http404Error = (404, "Not Found")
// http404Error is of type (Int, String), and equals (404, "Not Found")

let (statusCode, statusMessage) = http404Error
print("The status code is \(statusCode)")
// Prints "The status code is 404"
print("The status message is \(statusMessage)")
// Prints "The status message is Not Found"

let (justTheStatusCode, _) = http404Error
print("The status code is \(justTheStatusCode)")
// Prints "The status code is 404"

print("The status code is \(http404Error.0)")
// Prints "The status code is 404"
print("The status message is \(http404Error.1)")
// Prints "The status message is Not Found"

let http200Status = (statusCode: 200, description: "OK")
print("The status code is \(http200Status.statusCode)")
// Prints "The status code is 200"
print("The status message is \(http200Status.description)")
// Prints "The status message is OK"

//Optionals
let possibleNumber = "123"
let convertedNumber = Int(possibleNumber)
// convertedNumber is inferred to be of type "Int?", or "optional Int"

//nil
var serverResponseCode: Int? = 404
// serverResponseCode contains an actual Int value of 404
serverResponseCode = nil
// serverResponseCode now contains no value

var surveyAnswer: String?
// surveyAnswer is automatically set to nil

//If Statements and Forced Unwrapping
if convertedNumber != nil {
    print("convertedNumber contains some integer value.")
}
// Prints "convertedNumber contains some integer value."

if convertedNumber != nil {
    print("convertedNumber has an integer value of \(convertedNumber!).")
}
// Prints "convertedNumber has an integer value of 123."


//Optional Binding
if let actualNumber = Int(possibleNumber) {
    print("The string \"\(possibleNumber)\" has an integer value of \(actualNumber)")
} else {
    print("The string \"\(possibleNumber)\" could not be converted to an integer")
}
// Prints "The string "123" has an integer value of 123"

if let firstNumber = Int("10"), let secondNumber = Int("42"),
    firstNumber < secondNumber && secondNumber < 100 {
    print("\(firstNumber) < \(secondNumber) < 100")
}
// Prints "4 < 42 < 100"

if let firstNumber = Int("40") {
    if let secondNumber = Int("42") {
        if firstNumber < secondNumber && secondNumber < 100 {
            print("\(firstNumber) < \(secondNumber) < 100")
        }
    }
}
// Prints "4 < 42 < 100"

//Implicitly Unwrapped Optionals
let possibleString: String? = "An optional string."
let forcedString: String = possibleString! // requires an exclamation mark

let assumedString: String! = "An implicitly unwrapped optional string."
let implicitString: String = assumedString // no need for an exclamation mark its automatically unwrapped

if assumedString != nil {
    print(assumedString!)
}
// Prints "An implicitly unwrapped optional string."

if let definiteString = assumedString {
    print(definiteString)
}
// Prints "An implicitly unwrapped optional string."


//Error Handling
func canThrowAnError() throws {
    // this function may or may not throw an error
}
do {
    try canThrowAnError()
    // no error was thrown
} catch {
    // an error was thrown
}

func makeASandwich() throws {
    // ...
}

/*do {
    try makeASandwich()
    eatASandwich()
} catch SandwichError.outOfCleanDishes {
    washDishes()
} catch SandwichError.missingIngredients(let ingredients) {
    buyGroceries(ingredients)
}*/




//Assertions and Preconditions
//Debugging with Assertions
let age = 3
assert(age >= 0, "A person's age can't be less than zero.")
// This assertion fails because -3 is not >= 0.

if age > 10 {
    print("You can ride the roller-coaster or the ferris wheel.")
} else if age >= 0 {
    print("You can ride the ferris wheel.")
} else {
    assertionFailure("A person's age can't be less than zero.")
}


//Enforcing Preconditions
var index = 1
// In the implementation of a subscript...
precondition(index > 0, "Index must be greater than zero.")

if index > 10 {
    print("You can ride the roller-coaster or the ferris wheel.")
} else if index >= 0 {
    print("You can ride the ferris wheel.")
} else {
    preconditionFailure("A person's age can't be less than zero.")
   // fatalError("Unimplemented")
}

/*
//Basic Operators
Assignment Operator
let b = 10
var a = 5
a = b
 a is now equal to 10
let (x, y) = (1, 2)
 x is equal to 1, and y is equal to 2
if x = y {
    This is not valid, because x = y does not return a value.
*/


/*
//Arithmetic Operators
1 + 2       // equals 3
5 - 3       // equals 2
2 * 3       // equals 6
10.0 / 2.5  // equals 4.0
hello, " + "world"
 */

/*
 //Remainder Operator
9 % 4    // equals 1
-9 % 4   // equals -1
-9 = (4 x -2) + -1
//giving a remainder value of -1.
*/

//Unary Minus Operator
let three1 = 3
let minusThree = -three1      // minusThree equals -3
let plusThree = -minusThree   // plusThree equals 3, or "minus minus three"


//Unary Plus Operator
let minusSix = +6
let alsoMinusSix = -minusSix  // alsoMinusSix equals -6


//Compound Assignment Operators
var a = 1
a += 2
// a is now equal to 3
//no return value avliable


//Comparison Operators
/*
 Equal to (a == b)
Not equal to (a != b)
Greater than (a > b)
Less than (a < b)
Greater than or equal to (a >= b)
Less than or equal to (a <= b)
*/
// two identity operators (=== and !==)

1 == 1   // true because 1 is equal to 1
2 != 1   // true because 2 is not equal to 1
2 > 1    // true because 2 is greater than 1
1 < 2    // true because 1 is less than 2
1 >= 1   // true because 1 is greater than or equal to 1
2 <= 1   // false because 2 is not less than or equal to 1

let name = "world"
if name == "world" {
    print("hello, world")
} else {
    print("I'm sorry \(name), but I don't recognize you")
}
// Prints "hello, world", because name is indeed equal to "world".


//Comparison Operators with tuples
(1, "zebra") < (2, "apple")   // true because 1 is less than 2; "zebra" and "apple" are not compared
(3, "apple") <= (3, "bird")    // true because 3 is equal to 3, and "apple" is less than "bird"
(4, "dog") == (4, "dog")      // true because 4 is equal to 4, and "dog" is equal to "dog"

("blue", -1) < ("purple", 1)        // OK, evaluates to true
//("blue", false) < ("purple", true)  // Error because < can't compare Boolean values


//Ternary Conditional Operator
