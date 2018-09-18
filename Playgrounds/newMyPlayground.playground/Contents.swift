import UIKit

var str = "Hello, playground"

//MyDetails
let name : String = "Jasbeer "
var age : Int = 26
age = 36
let myFullName = name + " Singh"
let myDetails = "My name is \(myFullName),and age is \(age)"
let myAge = "my age is "
let myDetail = myAge + String(age)
let Qualifications = "B.Tech"
let University = "Bundelkhand University"
print("My name is \(myFullName) age \(age) and i have done \(Qualifications) from \(University)")

//Data Types
let boolean : Bool = true
var double : Double = 12.4849392
let float : Float = 3.50
double = 40.0000
var tuples = (501, "jass")

//Literals
let stringL = "Hello\tWorld\n\nHello\'Swift 4\'"
print(stringL)

//include values in strings
let apple = 3
let oranges = 9
let fruitSummary = "total fruits \(apple + oranges) "

//quotation marks
let quotation = """
i said "i have \(apple) apples."
and then i said "i have \(apple + oranges ) pieces of fruits "
"""


//Bank account
let bankName : String =  "Icici Bank"
let ifscCode : String = "Icic000256"
let accountHolderName : String = "Jasbeer Singh"
let accountNumber : Int = 073101000196
var bankBalance : Float = 1000.80
var depositAmount : Int = 2000
var newBankBalance = Int(bankBalance) + depositAmount
var accountActive : Bool = true
print("My bank name is \(bankName) ifsc code of my branch \(ifscCode) name is \(accountHolderName) account no. is \(accountNumber) and bank balance is \(newBankBalance)")



//Arrays and Dictionaries
var booksName = ["English", "Maths", "Eco", "Science"]
booksName[0] = "i need the English Book"

var dictionaries = ["Brewery" : "a palace where beer is made"]
dictionaries["jasbeer"] = "iOS Trainee"

var dict = ["Icici bank" : 073101000196,
           "Hdfc Bank" : 07331010212214]

var dict2 : [String : Any] = [
            "Jasbeer" : 7777077731,
            "jay" : 9971431313,
            "Bakery" : "a palce where bread is made"
]

var dict3 = ["Car" : "Elite i20",
             "Brewery" : "a palace where beer is made",
             "phone number" : "9971431313"
]

let emptyArray = [String]()
let emptyDict = [String : String]()

booksName = []
dictionaries = [:]

//Tuples


//Constants Declaration
let constAs = 42
print(constAs)
//Type Annotations
let constAt = 42
print(constAt)
let constB:Float = 3.14159
print(constB)
//Naming Constants
let _const = "Hello, Swift 4!"
print(_const)
//Printing Constants
let constAw = "Godzilla"
let constBw = 1000.00

print("Value of \(constAw) is more than \(constBw) millions")




//Swift - Literals
let stringL = "Hello\tWorld\n\nHello\'Swift 4\'"
print(stringL)

//Swift Operators
//(a)Arithnetic Operators
let a = 10
let b = 20
print(a + b)
print(a - b)
print(a * b)
print(b / a)
print(b % a)

//Comarison operators
print(a == b)
print(a != b)
print(a > b)
print(a < b)
print(a >= b)
print(a <= b)

//Logical Operators
//let a : Bool = true
//let b : Bool = false
//print(a && b)

//bitwise Operators

//Assignment operators

//range operators

//misc operators



//Dicision Making
//(a) Swift - if Statement
var varA = 100
/* Check the boolean condition using if statement */
if varA < 123 {
//    If condition is true then print the following
    print(varA)
}

//(b) Swift - if... Else Statement
var varB = 120
/* Check the boolean condition using if statement */
if varB < 100 {
    /* If condition is true then print the following */
    print(varB)
    /* If condition is false then print the following */
} else {
    print(varB)
}
print("Value of variable \(varB)");

//(c) Swift - if...else if...else Statement
var varC = 150
if varC == 100 {
    print(varC)
} else if varC == 150 {
    print(varC)
} else {
        print(varC)
    }

//(D) Swift - nested if statements
var varD:Int = 100;
var varE:Int = 200;
if varD == 100 {
    print("First ")
    
    if varE == 200 {
        print("Second")
    }
}
print("\(varD)")
print("\(varE)")





//Control follows Loops
//for-in
let individualscore = [100, 20, 30, 40, 50, 60, 10]
var teamScore = 0
for score in individualscore {
    if score >= 20 {
        teamScore += 3
    } else {
        teamScore -= 2
    }
    print(teamScore)
}
print(teamScore)

var someInts:[Int] = [13, 19, 29]
for index in someInts {
    print("Value of index is \(index)")
}


//Swithes lopps
let fruitJuice = "Apple Juice"
switch fruitJuice {
case "orange":
    print("add some suger and make the juice")
case "bananna", "papaya":
    print("add some suger and make the shake")
//    atleast last name of fruit
case let x where x.hasSuffix("pineapple"):
    print("Is it a good \(x)?")
default:
    print("Taste Eveything")
}



//for-in lopps
let intrestingNumbers = [
    "Prime": [2, 3, 4, 9, 10, 13, 16, 108, 20],
    "Fibonacci": [1, 1, 3, 5, 9, 3],
    "Square": [1, 4, 9, 10, 16, 18, 30, 50],
]
var largest = 0
for (kind, numbers) in intrestingNumbers {
    for number in numbers {
        if number > largest {
            largest = number
        }
    }
}
print(largest)



//While lopps
var index = 10
while index <= 30 {
    print("\(index)")
   index = index + 1
}

var indexNumbers = 200
while indexNumbers <= 500 {
    print(indexNumbers)
    indexNumbers = indexNumbers + 1
}

//do...While lopps
var index2 = 110
repeat {
    print(index2)
    index2 = index2 + 1
}
while index2 < 200

var m = 2
repeat {
    m *= 2
} while m < 100
print(m)



//optional String
var optionalString: String? = "Hello"
print(optionalString == nil)

var optionalName: String? = nil
var greetings = "Hello!"

if let name = optionalName {
    greetings = "Hello \(name)"
} else {
    let name = optionalName
}

//String?
let nicName :String? = "jass"
let fullName = "Jass Singh"
let information = "HI \(nicName ?? fullName)"




//Strings
// String creation using String literal
var stringA = "Hello jass!"
print(stringA)

// String creation using String instance
var stringB = String("Hello, world!")
print(stringB)

//Multiple line string
let stringC = """
Hey this is a
example of multiple Line
"""
print(stringC)


//Empty Strings
var stringAA = ""

if stringAA.isEmpty {
    print("empty String")
} else {
    print("not empty")
}

let stringBB = String()

if stringBB.isEmpty {
print("empty string")
} else {
    print("not empty")
}

//String Constants
var stringCC = "Hello world!"
stringCC = "hello"
print("String modified \(stringCC)")

//String Interpolation
var varS = 20
let constS = 100
var varSt:Float = 20.0

var stringS = "\(varS) times \(constS) is equal to \(varSt * 100)"
print(stringS)

//String Concatenation
let constA = "Hello"
let constB = "world"

var stringTT = constA + constB
print(stringTT)

//String Length
var varUU = "Hello World 4"

print( "\(varUU), lenght is \((varUU.count))" )

//String Comparison
var varV = "Hello, Swift 4!"
var varVV = "Hello, World!"

if varV == varVV {
    print("\(varV) and \(varVV) are equal")
} else {
    print("\(varV) and \(varVV) are not equal")
}

//String Iterating
for chars in "ThisString" {
    print(chars, terminator: " ")
}

//Unicode Strings
var unicodeString = "Dog???"

print("UTF-8 Codes: ")
for code in unicodeString.utf8 {
    print("\(code) ")
}

print("\n")

print("UTF-16 Codes: ")
for code in unicodeString.utf16 {
    print("\(code) ")
}
