#include<iostream>

using namespace std;

void information()
{
    cout << "the membership fee per month is $50.00" << endl;
    cout << "the personal training session fee is $30.00" << endl;
    cout << "the senior citizens discount is 30%" << endl;
    cout << "if the membership is bought and paid for 12 or more months, the discount is 15%;" << endl;
    cout << "if more than five personal training sessions are bought and paid for, the discount on each session is 20%" << endl;
}
void getInfo(char &senior, int &months, int &personal)
{
    cout << endl;
    cout << "Are you a senior " << endl;
    cin >> senior;
    cout << "How long would you like to be a member " << endl;
    cin >> months;
    cout << "How many personal training seasons o you want " << endl;
    cin >> personal;
}
double calcCost(char senior, int months, int personal)
{
    double totalF = 50*months;
    if(months >= 12)
    {
        totalF=totalF*.85;
    }
    double training = personal*30;
    if(personal>5)
    {
        training=training * .8;
    }
    totalF = totalF+training;
    if(senior='y')
        totalF=totalF*.7;
        return totalF;
}

int main()
{
    char senior;
    int months;
    int personal;
    char Op;
    cout << "Welcome to the Gym Membership calculator: " << endl;
     cout << "If you would you like to Calculate a membership cost Enter: a " << endl;
    cout << "If you would like to exit this program Enter: b " << endl;
    cin >> Op;
  while(Op == 'a')
  {
        information();
        getInfo(senior,months,personal);
        cout << "your total fee is " << calcCost(senior,months,personal)<<endl;;
        cout << "If you would you like to Calculate a membership cost Enter: a " << endl;
        cout << "If you would like to exit this program Enter: b " << endl;
        cin >> Op;
   }

}
