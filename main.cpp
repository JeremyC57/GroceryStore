//Author: Jeremy Casada
#include<iostream>
#include<string>
using namespace std;

int main()
{
  string list[5]; //array of 5 strings
  int numItems = 0;
  string item;
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
                  cout << "What is the item?\n";
                  cin >> item;
                  cin.clear();
                  cin.ignore();
                  if(numItems <5)                                                                                 {                                           
                        list[numItems] = item;
                       numItems++;
                  }
                  else
                  {
                          cout << "You'll need a bigger list!" << endl;
                  }
          }
  }while(tolower(input) != 'q');
  return 0;
}
