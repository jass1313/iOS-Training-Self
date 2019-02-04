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
