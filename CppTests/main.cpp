//
//  main.cpp
//  CppTests
//
//  Created by Paula Hasstenteufel on 2018-03-12.
//  Copyright © 2018 Hasstenteufel. All rights reserved.
//

#include <iostream>

double multiplyNumber(int number) {
    return number * number;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int number;
    
    std::cout << "input a number to see it multiplied by itself:\n";
    std::cin >> number;
    std::cout << "\n";
    
    while(!std::cin) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        
        std::cout << "your input is not valid, please input a number:\n";
        std::cin >> number;
        std::cout << "\n";
    }
    
    std::cout << "result of the operation is: " << multiplyNumber(number) << "\n";
    
    return 0;
}
