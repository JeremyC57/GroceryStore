//Author: Jeremy Casada
#include<iostream>
#include<string>
using namespace std;

int main()
{
  string list[5]; //array of 5 strings
  int numItems = 0;
  char input;
  do
  {
          
          cout<<"\n==GROCERY LIST MANAGER==";
          cout<<"\nEnter your choice: ";
          cout<<"\n (A)dd an item";
          cout<<"\n (Q)uit";
          cout<<"\nYour choice (A/Q): ";
          cin>>input;
          if(tolower(input) == 'a')
          {
                  if(numItems <5)                                                                                         {   
                       cout << "\nWhat is the item?" << endl;
                       cin >> list[numItems];
                       numItems++;
                  }
                  else
                  {
                          cout << "\nYou'll need a bigger list!";
                  }
          }
  }while(tolower(input) != 'q');
  return 0;
}
