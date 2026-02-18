#include <iostream>#include <iostream>
#include <iomanip> // Required for setw

using namespace std;

int getIntValue() {
    // Declare a variable var_int of type int and set its value to 10.
    int var_int = 10;
    cout << setw(10) << "George" << endl;
    return var_int;
}

float getFloatValue() {
    // Declare a variable var_float of type float and set its values
 float var_float = 10.75f;
    return var_float; 
}

char getCharValue() {
    // Declare a variable var_char of type character and set its value to A.
    //return var_char;
    char var_char = 'A'; // Use single quotes for char
    return var_char;
}

int convertFloatToInt(float value) {
    // convert value to int.
    int result = static_cast<int>(value);
    return result; 
    
}

/*
Convert Fahrenheit to Celsius and store your answer in a variable celsius.

Formula:
    Celsius = (Fahrenheit - 32) * 5 / 9
*/
float fahrenheitToCelsius(float fahrenheit) {



    float celsius = (fahrenheit - 32.0f) * 5.0f / 9.0f;
    return celsius; 
}
    //return celsius
