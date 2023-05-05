/*
Sean Harrington
5
CS161
*/

#include <iostream>
#include <fstream>


using namespace std;

int main()
{
    int timeS = 0,Totaltime,Basetime,Addtime;
    ofstream myfile ("times.txt");
    myfile.open("times.txt");
    if(myfile.is_open())
    {

    myfile << Addtime << Basetime << Totaltime << " " << endl;
    for(int i = 1; timeS <= Totaltime;i++)
    {
        timeS = timeS+Basetime+(Addtime*i);

    }
    cout << "the number of dishes you can make is " << int i+1 << endl;
        myfile.close();

    }
    cout << Addtime << " " << Basetime << " " << Totaltime << endl;
}

