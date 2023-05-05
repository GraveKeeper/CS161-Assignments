/*
Sean Harrington
Cs161
*/
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int op;
    double TVD,area;
    double ratio1 = 1.75;
    double ratio2 = 1+9/16;
    cout << "Please enter the Diagonal Length of the TV " << endl;
    cin >> TVD;
    double Ds = TVD*TVD;
    cout << "Select what type of TV to view:" << endl;
    cout << "1. Traditional TV area " << endl <<"2. LCD TV area " << endl << "3. Both Types of TVs area" << endl;
    cin >> op;
    if(op == 1 || op == 3)
    {
       double length = sqrt(Ds/ratio1);
       double width = .75*length;
       area = length*width;
       cout << "The Traditional TV's Length is: " << length << endl;
       cout << "The Traditional TV's width is: " << width << endl;
       cout << "The Traditional TV's area is: " << area << endl;
    }
    if(op == 2 || op == 3)
    {
       double length = sqrt(Ds/ratio2);
       double width = .75*length;
       area = length*width;
       cout << "The Traditional TV's Length is: " << length << endl;
       cout << "The Traditional TV's width is: " << width << endl;
       cout << "The Traditional TV's area is: " << area << endl;
    }
}
