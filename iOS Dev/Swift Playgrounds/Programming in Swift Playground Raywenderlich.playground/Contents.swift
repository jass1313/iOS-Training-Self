import UIKit

var string = "Hello, playground"
string = "hi!"

var currentValue = 50
var targetValue = 55

var differnce = currentValue-targetValue

if differnce < 0 {
    differnce *= -1
}

print(differnce)
