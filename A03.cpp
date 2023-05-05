/*
Sean Harrington
Cs161
*/
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float speedx,speedy,timeH,timeM;

    cout << "Please input the speed of car A " << endl;
    cin >> speedx;
    cout << "Please input the speed of car B " << endl;
    cin >> speedy;

    cout << "Please enter the elapsed time in hours (space) Minutes " << endl;
    cin >> timeH;
    cin >> timeM;

    double time = timeH + timeM / 60.0;

    double Adis = time*speedx;
    double Bdis = time*speedy;

    cout << "The distance is:" << " " << sqrt((Adis*Adis)+(Bdis*Bdis));
}
