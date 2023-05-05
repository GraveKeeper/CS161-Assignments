/*
Sean Harrington
CS 161
Assignment 2
Ohm’s Law is a formula that describes the relationship between voltage, current, and
resistance within a circuit. Using the Web, locate the formula for Ohm’s Law. Write a
program that inputs (from the user) current (measured in Amps) and resistance (measured
in Ohms) within a given circuit. Calculate the voltage (measured in Volts) needed to
supply the circuit and output the results.

 Formula = V(volts) = I(amps) x R(ohms)

Sources:
https://www.rapidtables.com/electric/ohms-law.html
*/
#include<iostream>
using namespace std;


int main()
{
    float ohms;
    float amps;
    float volts;
    cout << "Please enter the I(Amps) in the circuit " << endl;
    cin >> amps;

    cout << "Please now enter the R(ohms) of the circuit " << endl;
    cin >> ohms;

    volts = (amps*ohms);
    cout << "the circuits needs " << volts << " to supply the circuit" << endl;
}

