//=======================================================================================================
//                                                                                                      =
//..................................One Defination Rule.................................................=
//                                                                                                      =
//=======================================================================================================

// defination cant show more then once in a program or translation units

// in context of:
// -->>Free standing variables
// -->>Function
// -->>Classes
// -->>Class member Function
// -->>Class Static member variable 
#include <iostream>#include <set>
#include <random>
using namespace std;

int program() {
    // VARIABLES = defination and decleration
    double weight{};

}

struct point {// this can be intilized for many times

    //cout << "This is a pointer using struct." << endl;
    double mx;
    double my;
};
// in classes we can volite this rule a little bit

//'''''''''''''''''''''''''''''''''''''''''''''''''
//                 Function
//,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,

// a reuseable code that can be take a number of optional 
// inputs and produce some desireable output

//................Syntax...................
// 
// return_type function_name(para1, para2){
// 
//   //operations
// 
//   return return_type;
// 
// }


// function Signature :   Function name + Function parameters
// calling a function: a function is called in a main program b 
// using its name and passing its parameters
// ..........Syntax
// result = function_name(arg1,arg2);

void greet() {  // Function declaration without parameters
    cout << "Hello, world!" << endl;  // Print a greeting
}


int square(int number) {  // Function declaration with one parameter
    int result = number * number;  // Calculate the square
    return result;                 // Return the result
}


int addNumbers(int num1, int num2) {  // Function with two parameters
    int sum = num1 + num2;  // Calculate the sum
    return sum;             // Return the sum
}



/*
string generateLuckyNumber(int nDigits) {
    set<int> digits;
    random_device rd;
    mt19937 gen(rd());  // Seed the random number generator
    uniform_int_distribution<> dist(0, 9);  // Generate digits 0-9

    while (digits.size() < nDigits) {
        int digit = dist(gen);
        digits.insert(digit);
    }

    string luckyNumber;
    for (int digit : digits) {
        luckyNumber += to_string(digit);
    }

    return luckyNumber;
}
*/

// implicit conversion in a function
// in this we are passing those parameters that we dont have to mean the function data tpe is int
// but we are passing parameters of double tpe so it will convert by itself from double to int


void printValue(int value) {
    std::cout << "Integer: " << value << std::endl;
}

void printValue(double value) {
    std::cout << "Double: " << value << std::endl;
}


class Number {
public:
    Number(int value) {
        std::cout << "Constructing Number from int: " << value << std::endl;
    }

    Number(double value) {
        std::cout << "Constructing Number from double: " << value << std::endl;
    }
};
int main() {

    //'''''''''''''''''''''''''''''''''''''''''''''''''''''''
    program();
    point p1;

    //'''''''''''''''''''''''''''''''''''''''''''''''''''''''
    greet();  // Call the function without arguments


    //''''''''''''''''''''''''''''''''''''''''''''''''''''''''
    int value = 5;
    int squaredValue = square(value);  // Call the function with an argument

    cout << "The square of " << value << " is " << squaredValue << endl;

    //'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
    int a = 10;
    int b = 20;
    int result = addNumbers(a, b);  // Call the function with two arguments

    cout << "The sum of " << a << " and " << b << " is " << result << endl;

    /*
    //'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
    int numDigits = 4;  // Example: Generate a 4-digit lucky number
    string luckyNum = generateLuckyNumber(numDigits);
    cout << "Lucky number (all digits different): " << luckyNum << endl;
    */


    //'''''''''''''''''''''''''''''''''''''''''''''''''

    printValue(10);       // Calls printValue(int)
    printValue(3.14159);  // Calls printValue(double)

    //'''''''''''''''''''''''''''''''''''''''''''''''''''

    Number num1 = 5;      // Calls Number(int)
    Number num2 = 3.14;  // Calls Number(double)

    return 0;
}

