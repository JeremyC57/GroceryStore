//Author: Jeremy Casada
#include<iostream>
#include<string>
#include<vector>
using namespace std;


int main()
{
  vector<string> list; //vector of strings 
  int numItems = 0;
  string item;
  string input;
  do
  {
          
          cout<<"\n==GROCERY LIST MANAGER==";
          cout<<"\nEnter your choice: ";
          cout<<"\n (A)dd an item";
          cout<<"\n (Q)uit";
          cout<<"\nYour choice (A/Q): ";
          cin>>input;
          if(input == "a" || input == "A")
          {
                  cout << "What is the item?\n";
                  cin >> item;
                                                              
                  list.push_back(item);
                  numItems++;
                  
          }
  }while(input != "q" && input != "Q");

  if(list.size() > 0)
  {
          cout << "==ITEMS TO BUY==" << endl;

          for(int index =0 ; index<list.size() ;index++)
          {
                  cout  << index + 1 << " " << list[index] << endl;
          }
  }
  else
  {
          cout << "No items to buy!\n" ;
  }
  return 0;
}
