//Author: Jeremy Casada
#include<iostream>
#include<string>
using namespace std;

const int LIST_SIZE = 5;
int main()
{
  string list[LIST_SIZE]; //array of strings 
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

  cout << "==ITEMS TO BUY==" << endl;

  for(int index =0 ; index<LIST_SIZE ;index++)
  {
          cout  << index + 1 << " " << list[index] << endl;
  }
  return 0;
}
