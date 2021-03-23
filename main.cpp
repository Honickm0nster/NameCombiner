//
//  main.cpp
//  Assignment_3
//
//  Created by Noah Honickman on 12/26/20.
//This program takes a first and last name and prints them back out as a single array

#include <iostream>
#include <string>
#include <cstring>

int main() {
    using namespace std;
    char firstname [25];
    char lastname [25];
    cout << "Enter your first name: ";
    cin >> firstname;
    cout << "\n";
    cout << "Enter your last name: ";
    cin >> lastname;
    cout << "\n";
    int a = strlen(firstname);
    int b = strlen (lastname);
     //lastname[b+1] = ",";
   // lastname[b+2] = " ";
    char comma[3] = ", ";
    int total = a + b;
    char combo [total + 2];
    strcpy(combo, lastname);
    strcat(combo, comma);
   strcat(combo, firstname);
    cout << "Here's the information in a single string: " << combo << "\n";
    
    return 0;
}
