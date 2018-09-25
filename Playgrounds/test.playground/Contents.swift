

import UIKit
var str = "Hello, playground"

func amstrongNumber(num:Int) {
    var sum = 0
    var armNum = num
    var ks = 0
    

   
    while armNum != 0  {
        
        ks = armNum % 10
        armNum /= 10
        
        sum = sum + ks * ks * ks
        
        print(sum)
        
        
        }
        if sum == num {
            print("Yes its a armstrong number")
        } else {
            print("no its not a armstrong number")
        }
    }
amstrongNumber(num: 153)



/*

Magic Number 145
func magicNumber (num : Int) {
    let magiNum = num
    var ma = magiNum % 10
    var gi = magiNum / 10 % 10
    var cs = magiNum / 10 / 10
    
    for jk in 1..<ma {
        ma = jk * ma
    }; for jt in 1..<gi {
        gi = jt * gi
    }; for ja in 1..<cs {
        cs = ja * cs
    }
   let result = (ma+gi+cs)
    
    if result == num {
        print("yes its magic number")
    } else {
        print("no its not a magic number")
    }
 
}
magicNumber(num: 145)









*/
