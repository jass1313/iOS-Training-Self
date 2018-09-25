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



//Syntax
/* My first program in Swift 4 */
var myString1 = "Hello, World!"
print(myString1)

//Tokens in Swift 4
print("test!")
//The individual tokens are:
print("test!")

//Comments
/*bjbsjbjksbcx */



//Built-in Data Types
let integer : Int = 10
let boolean : Bool = true
var double : Double = 12.4849392
let float : Float = 3.50
let string : String = "jass"
let character : Character = "C"
var optionalStrings : String? = nil
var tuples = (501, "jass")

//Type Aliases Data Types
typealias Feet = Int
var distance: Feet = 100
print(distance)

//Type Safety
//var varE = 42
//varE = "This is hello"
//print(varE)

//Type Inference
// varA is inferred to be of type Int
var varGG = 42
print(varGG)

// varJJ is inferred to be of type Double
var varJJ = 3.14159
print(varJJ)

// varII is also inferred to be of type Double
var varII = 3 + 0.14159
print(varII)








//Swift - Variables
//Variable Declaration
var varZ = 42
print(varZ)

//Type Annotations
var varZZ = 40
print(varZZ)

var varY:Float
varY = 3.14529
print(varY)

//Naming Variables
var _var = "Hello, Swift 4!"
print(_var)

//Printing Variables
var varK = "Godzilla"
var varL = 1000.00

print("Value of \(varK) is more than \(varL) millions")


//Swift - Optionals
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

let nicName :String? = "jass"
let fullName = "Jass Singh"
let information = "HI \(nicName ?? fullName)"

var myString:String? = nil
if myString != nil {
    print(myString)
} else {
    print("my String is has nil value")
}

//Forced Unwrapping String
var myString2:String? = nil
myString2 = "Hello Jasbeer"
if myString2 != nil {
print(myString2)
} else {
    print("my string is has nil value")
}

//let's apply unwrapping to get the correct value of the variable
var myString3:String?
myString3 = "Hello, Swift 4!"
if myString3 != nil {
    print( myString3! )
} else {
    print("myString has nil value")
}

//Automatic Unwrapping
var myString4:String!
myString4 = "hello jass"
if myString4 != nil {
    print(myString4)
} else {
    print("myString has nil value")
}

//Optional Binding
var myString5:String?
myString5 = "hello world"

if let yourString1 = myString5 {
    print("your String has - \(yourString1)")
} else {
    print("yout string does not have a value")
}



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




//Literals
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
let constV = "world"

var stringTT = constA + constV
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


//Swift - Characters
let char1: Character = "A"
let char2: Character =  "B"

print("value of char1 \(char1)")
print("value of char2 \(char2)")

//Accessing Characters from Strings
for ch in "hello" {
print(ch)
}

//Concatenating Strings with Characters
var varQ:String = "Hello"
let varQL:Character = "G"

varQ.append(varQL)

print("Value of var = \(varQ)")




//Arrays
//Creating Arrays
var booksName = ["English", "Maths", "Eco", "Science"]

var someArray = [String]()
var someArray1 = [Int](repeating: 40, count: 30)
print(someArray1)

//Accessing Arrays
var carName = ["i20", "Verna", "i10", "Xent", "Creta"]
carName[4] = "my fav car is Creta"
print(carName)

var someInt = [Int](repeating: 40, count: 3)
var someVar = someInt[0]
print("Value of First element is \(someInt[0])")
print("Value of First element is \(someInt[1])")
print("Value of First element is \(someInt[2])")

//Modifying Arrays
var someInt1 = [Int]()
someInt1.append(10)
someInt1.append(20)
someInt1 += [30]
var someVar1 = someInt1[0]
print("Value of First element is \(someVar1)")
print("Value of First element is \(someInt1[1])")
print("Value of First element is \(someInt1[2])")

var someInt2 = [Int]()
someInt2.append(20)
someInt2.append(30)
someInt2 += [40]

someInt[2] = 50
print("Value of First element is \(someInt2[0])")
print("Value of First element is \(someInt2[1])")
print("Value of First element is \(someInt2[2])")

//Iterating Over an Array
var someStrs = [String]()
someStrs.append("Apple")
someStrs.append("Orange")
someStrs += ["Banana"]

for item in someStrs {
    print(item)
}

var someStrs1 = [String]()
someStrs1.append("Apple")
someStrs1.append("Orange")
someStrs1.append("Banana")

for (index , item) in someStrs1.enumerated() {
     print("Value at index = \(index) is \(item)")
}

//Adding two arrays in same type
var intsA = [Int](repeating: 2, count:2)
var intsB = [Int](repeating: 1, count:3)

var intsC = intsA + intsB
for item in intsC {
    print(item)
}

var intsAA = [10, 11, 20, 10]
var intsBB = [13, 10, 20, 11]
var intCC = intsAA + intsBB
for item in intCC {
print(item)
}
//The Count Property
var intsAB = [Int](repeating: 2, count: 2)
var intsBA = [Int](repeating: 3, count: 1)

var intsCB = intsAB + intsBA

print("Total items in intsA = \(intsAB.count)" )
print("Total items in intsB = \(intsBA.count)")
print("Total items in intsC = \(intsCB.count)")

//The empty Property
var instAC = [Int](repeating: 2, count: 2)
var intsAD = [Int](repeating: 2, count: 1)
var intsAE = [Int]()

print(instAC.isEmpty)
print(intsAD.isEmpty)
print(intsAE.isEmpty)

//Swift - Sets
var someSet : Set = [10,11,11,23,45]

//Accessing and modifying Sets
someSet.count
someSet.insert(20)
someSet.isEmpty
someSet.remove(10)
someSet.removeAll()
someSet.contains(50)

//Iterating over a Set
var someSet1 : Set = [10,11,15,23,48]
for _ in someSet1 {
    print(someSet1)
}

var someSet2 : Set = [10,12,35,33]
for _ in someSet2.sorted() {
    print(someSet2)
}

let evens: Set = [10,12,14,16,18]
let odds: Set = [5,7,9,11,13]
let primes = [2,3,5,7]

odds.union(evens).sorted()
odds.intersection(evens).sorted()
odds.subtracting(primes).sorted()






//Dictionaries
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

var someDict = [Int: String]()
someDict = [20 : "Jasbeer Singh"]

var someDict1:[Int : String] = [1: "One", 2: "Two", 3: "Three", 4: "Four"]

//Sequence Based Initialization
//create Dictionary from arrays
var cities = ["Delhi", "Mumbai", "Kolkata"]
var Distance = [2000, 600, 300]
let cityDistanceDict = Dictionary(uniqueKeysWithValues: zip(cities, Distance))
print(cityDistanceDict)

//Filtering
var closeCities = cityDistanceDict.filter{$0 .value < 1000}
print(closeCities)

//Dictionary Grouping
var cities2 = ["Delhi", "Banglore", "Hyndrabad", "Dehradun", "Mumbai"]
var groupCities = Dictionary(grouping: cities2) {$0.first!}
print(groupCities)

//Accessing Dictionaries
var someDict2:[Int: String] = [1: "One", 2: "Two", 3: "Three", 4: "Four", 5: "Five", 6: "Six"]
var someVar11 = [1]
print("\(someVar11)")
print("\(String(describing: someDict2[2])))")
print("\(String(describing: someDict2[3])))")


//Modifying Dictionaries
var someDict12:[Int: String] = [1: "one", 2: "two", 3: "three"]
var oldVal = someDict12.updateValue("New Value", forKey: 1)
var someVar13 = someDict12[1]
print("\(String(describing: oldVal))")
print("\(String(describing: someVar13))")
print("\(String(describing: someDict12[2]))")
print("\(String(describing: someDict12[3]))")

var someDict13:[Int: String] = [1: "one", 2: "two", 3: "three"]
var oldVal1 = someDict12[1]
someDict12[1] = "new vale of one"
var someVar14 = someDict13[1]
print("\(String(describing: oldVal1))")
print("\(String(describing: someVar14))")
print("\(String(describing: someDict13[2]))")
print("\(String(describing: someDict13[3]))")

//Remove Key-Value Pairs
var someDict14:[Int: String] = [1: "one", 2: "two", 3: "three"]
var removeTheValue = someDict14.removeValue(forKey: 2)
print("\(String(describing: someDict14[1]))")
print("\(String(describing: someDict14[2]))")
print("\(String(describing: someDict14[3]))")

var someDict15:[Int: String] = [1: "one", 2: "two", 3: "three"]
someDict15[2] = nil
print("\(String(describing: someDict15[1]))")
print("\(String(describing: someDict15[2]))")
print("\(String(describing: someDict15[3]))")

//Iterating Over a Dictionary
var someDict16:[Int: String] = [1: "one", 2: "two", 3: "three"]
for (index, keyValue) in someDict16.enumerated() {
    print("\(index) - \(keyValue)")
}

var someDict17:[Int: String] = [1: "one", 2: "two", 3: "three"]
for (key, value) in someDict17.enumerated() {
print("\(key) - \(value)")
}

//Convert to Arrays
var someDict18:[Int: String] = [1: "one", 2: "two", 3: "three"]
var dictKeys = [Int](someDict18.keys)
var dictValue = [String](someDict18.values)

print("Print Dict Keys")
for (key) in dictKeys {
    print(key)
}
print("print dict valus")
for (value) in dictValue {
    print(value)
}

//The count Property
var someDict19:[Int: String] = [1: "one", 2: "two", 3: "three"]
var someDict20:[Int: String] = [1: "one", 2: "two", 3: "three"]

print(someDict19.count)
print(someDict20.count)


///The empty Property
var someDict21:[Int: String] = [1: "one", 2: "two", 3: "three"]
var someDict22:[Int: String] = [1: "one", 2: "two", 3: "three"]
var someDict23:[Int: String] = [Int: String]()
print(someDict21.isEmpty)
print(someDict22.isEmpty)
print(someDict23.isEmpty)

//Functions
func student(name : String) -> String {
    return name
}
print(student(name: "jasbeer singh"))
print(student(name: "jass"))
print(student(name: "james"))

func display (no1: Int) -> Int {
let a = no1
return a
}
print(display(no1: 100))
print(display(no1: 200))
print(display(no1: 300))

//Parameters and Return Values
func mult (no1: Int, no2: Int) -> Int {
    return no1*no2
}
print(mult(no1: 10, no2: 30))
print(mult(no1: 30, no2: 34))

//Functions without Parameters
func votersname() -> String {
    return "jasbeer"
}
print(votersname())

//Functions with Return Values
func ls(array: [Int]) -> (large: Int, small: Int) {
    var lar = array[0]
    var sma = array[0]

for i in array [0..<array.count] {
    if i < sma {
        sma = i
    } else if i > lar {
        lar = i
    }
    }
    return (lar, sma)
    
}
let num = ls(array: [50,410,12,1,21])

//Functions without Return Values
func sum(a:Int, b:Int) {
    let a = a+b
    let b = a-b
    print(a, b)
}
sum(a: 30, b: 10)
sum(a: 40, b: 20)
sum(a: 20, b: 30)



//Functions with Optional Return Types
func minMax(array:[Int]) -> (min : Int, Max : Int)? {
    if array.isEmpty {return nil}
    var currentMin = array[0]
    var currentMax = array[0]

    for value in array[1..<array.count] {
        if value < currentMin {
            currentMin = value
        } else if value > currentMax {
        currentMax =  value
    }
    }
        return (currentMin, currentMax )
}
    if let numbers = minMax(array: [10,20,10,25,60,90,-6,-10]) {
    print(numbers.min, numbers.Max)
    }

//Functions Local Vs External Parameter Names
func sample(number: Int) {
    print(number)
}
sample(number: 1)
sample(number: 2)
sample(number: 3)


//External Parameter Names
func pow(firstArg a: Int, secondArg b: Int) -> Int {
    var res = a
    for _ in 1..<b {
        res = res * a
    }
    print(res)
    return res
}

pow(firstArg:5, secondArg:4)


//Variadic Parameters
func vari<N>(members: N...){
    for i in members {
        print(i)
    }
}
vari(members: 4,3,5)
vari(members: 4.5, 3.1, 5.6)
vari(members: "Swift 4", "Enumerations", "Closures")




//Fabonnaci Series
func printFebonnaci (until n : Int) {
    
    var n1 = 0
    var n2 = 1
    for _ in 0...n {
        let num = n1 + n2
        
        //    Logic swipe the value
        n1 = n2
        n2 = num
        print(num)
    }
}
printFebonnaci(until: 10)

//Factorial
var number: Int = 4 // Change the number here

var fact: Int = 1

var n: Int = number + 1

for i in 1..<n{
    
    fact = fact * i
    
}
print("Factorial of ",number," is: ", fact)


//Calculation of simple interest
let p = 1000
let y = 3
let i = 8.5

let result = Double(p) * Double(y) * i/100
let convert = Int(result)
print(result)



//Armstrong Number 153
func armstrong (a: Int, b: Int, c: Int) {
var ab = a
var ba = b
var ca = c
ab = ab * a * a
    for _ in 1...2 {
        ab = ab * a
        ba = ba * b
        ca = ca * c
        }
    let total = ab + ba + ca
print(total)
}
armstrong(a: 1, b: 5, c: 3)




//Magic Number 145
func magicNumber (aa: Int, bb: Int, cc: Int) {
    var ma = aa
    var gi = bb
    var cs = cc
    
       for jk in 1..<aa {
        ma = jk * ma
    }; for jt in 1..<bb {
        gi = jt * gi
    }; for ja in 1..<cc {
        cs = ja * cs
        
            let total1 = (cs + ma + gi)
        
    print(total1)
}
    
}
magicNumber(aa: 1, bb: 4, cc: 5)

//func amstrongNumber(num:Int) -> String {
//    var sum = 0
//    var tempNum = num
//    var ks = 0
//
//    while tempNum != 0  {
//
//        ks = tempNum % 10
//        tempNum /= 10
//        sum = sum + ks * ks * ks
//
//
//        if sum > num {break}
//    }
//    if sum == num {
//        return "Yes"
//    } else {
//    return "No"
//}
//}
//let numAm = 153
//let resultAm = amstrongNumber(num:numAm)
//print(resultAm)








































