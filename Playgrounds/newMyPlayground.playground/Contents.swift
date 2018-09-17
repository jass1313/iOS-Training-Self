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


//Control follows
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

//Optional String
var optionalString: String? = "Hello"
print(optionalString == nil)

var optionalName: String? = "Jasbeer Singh"
var greetings = "Hello!"

if let name = optionalString {
    greetings = "Hello \(name)"
}













