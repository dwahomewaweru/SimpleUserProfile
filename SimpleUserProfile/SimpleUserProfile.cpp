// SimpleUserProfile.cpp 
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Simple User Profile >> \n";
    string Fname,Lname,Fmeal,Fmovie;
    cout << "input your first name : \n";
    getline(cin,Fname);
    cout << "input your Last name : \n";
    getline(cin, Lname);
    cout << "input your Favourite Meal : \n";
    getline(cin, Fmeal);
    cout << "input your favourite Movie : \n";
    getline(cin, Fmovie);
    
    cout << "\n";
    cout << "\n *Simple User Profile* \n";
    cout << "\n First Name : " << Fname << "\n Last Name : " << Lname << "\n Full Name : " << Fname << " " << Lname << "\n Favourite Meal : " << Fmeal << "\n Favourite Movie : " << Fmovie << "\n";

    return 0;

}
