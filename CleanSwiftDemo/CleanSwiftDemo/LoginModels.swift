//
//  LoginModels.swift
//  CleanSwiftDemo
//
//  Created by KiwiTech on 28/01/19.
//  Copyright (c) 2019 KiwiTech. All rights reserved.
//
//  This file was generated by the Clean Swift Xcode Templates so
//  you can apply clean architecture to your iOS and Mac projects,
//  see http://clean-swift.com
//

import UIKit

enum Login
{
  // MARK: Use cases
  
  struct Something
  {
    struct Request
    {
        var email: String?
        var password: String?
    }
    struct Response
    {
        var name: String?
    }
    struct ViewModel
    {
        var name: String
    }
  }
}
