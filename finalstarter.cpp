//This program is your final exam.
//Please fill in the functions at the bottom of the file.  (evenCount and insertItem)
//DO NOT CHANGE ANYTHING ELSE.
//main has all the code needed to test your functions.  Once your functions are written, please build and make sure it works fine
/*
Sean Harrington Final Assessment CS161
*/

#include <iostream>
#include <fstream>
#include <cstdlib> // for rand
#include <ctime>   // for random seed time(NULL)
using namespace std;

//constants
const int CAP = 100;

//function prototypes
bool openFile(ifstream &);
void readData(ifstream &, int [], int &);
void printData(const int [], int);
void evenCount(const int[], int);
void insertItem(int[], int &, int, int);

using namespace std;

int main()
{
	ifstream inFile;
	int list[CAP], size = 0;

	if (!openFile(inFile))
	{
		inFile.close();
		cout << "numbers.txt not found, generating 50 random numbers." << endl;
		ofstream fout("numbers.txt");
		srand(time(NULL));
		for(int i = 0; i < 50; i++)
		{
			fout << (rand() % 100) << endl;
		}
		fout.close();
		if (!openFile(inFile))
		{
			cout << "Unable to create and open numbers.txt" << endl;
			return -1;
		}
	}
	//read the data from the file
	readData(inFile, list, size);
	inFile.close();
	cout << "Data in file:" << endl;
	printData(list, size);
	//insert a few items
	insertItem(list, size, 15, 5);
	cout << "Inserted 15 in position 5:" << endl;
	printData(list, size);
	insertItem(list, size, 101, 2);
	cout << "Inserted in position 5:" << endl;
	printData(list, size);
	insertItem(list, size, 215, 12);
	cout << "Inserted in position 5:" << endl;
	printData(list, size);
	//call the evenCount function
	evenCount(list, size);
	//end program
	cout << "Press any key to continue...";
	getchar();

	return 0;
}

//function to open file
bool openFile(ifstream &inFile)
{
	inFile.open("numbers.txt");
	if (!inFile)
	{
		return false;
	}
	return true;
}

//reads the data from the file
void readData(ifstream &inFile, int list[], int &size)
{
	while (!inFile.eof())
	{
		inFile >> list[size++];
	}
}

//print the contents of the array
void printData(const int list[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << list[i] << endl;
	}
	cout << endl;
}


//insert an item (newNum) in the given position (newPos)
//newPos is the index to insert newNum
void insertItem(int list[], int &size, int newNum, int newPos)
{
	for(int ii = size;ii >= 0;ii--)
    {
        if(ii==size)
        {
            list[ii]=list[ii];
        }
        if(ii>newPos)
        {
            list[ii+1]=list[ii];
        }
        if(ii>newPos)
        {
            list[ii]=newNum;
        }
        if(ii>newPos)
        {
            list[ii]=list[ii];
        }
    }
}

//count the even numbers in the list and output in this function
void evenCount(const int list[], int size)
{
	int evenCount = 0;
	int oddCount = 0;
	cout << "evenNum";
	for(int i = 0;i<size;i++)
    {
        if(list[i]&1==1)
            oddCount++;
        else
            evenCount++;
    }
    cout << evenCount <<endl;
}
