#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;

void averageHigh(string [] Months, int [][12] Temps, int how_many, string & month, int & temp)
{
    int index = 0;
	temp = Temps[1][0];
	for (int i = 1; i < how_many; i++)
    {
        if (Temps[1][i] > temp)
        {
             temp = Temps[1][i];
             index = i;
        }
    }
    month = Months[index];
}

void averageLow(string [] Months, int [][12] Temps, int how_many, string & month, int & temp)
{
    int index = 0;
	temp = Temps[0][0];
	for (int i = 1; i < how_many; i++)
    {
        if (Temps[0][i] < temp)
        {
             temp = Temps[0][i];
             index = i;
        }
    }
	month = Months[index];
}

void loadData(ifstream &infile, string Months [], int Temps [2][12], int &size)
{
	int i = 0;
	if (infile)
	{
		while (i < size)
		{
			infile >> Months[i];
			infile >> Temps [i][0];
			infile >> Temps [i][1];
			i++;
		}
	}

	else
	{
		cout << "File not exist" << endl;
		exit(1);
	}
}

int main()
{
	int size = 12;
	int Temps [12][2], temp;
	string Months [12], month;

	ifstream infile("temps.txt");
	loadData(infile, &Months, &Temps, size);

    averageHigh (Months[], Temps[ size, &month, &temp);
	cout << "Highest temperature in current year : " << temp << endl;
	cout << "It occured in " << month;

    averageLow (Months, Temps, size, &month, &temp);
	cout << "Lowest temperature in current year : " << temp << endl;
	cout << "It occurred in " << month;
}
