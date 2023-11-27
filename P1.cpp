//include headers and libraries
// ./a.out < test_input.txt
#include <iostream>
#include "Library.h"
#include <string>

using namespace std;

int main(){
    Library library;
    
    //ask for commands and execute
    string command;
    Library mylib;

    while (true)
    {
        cout<<"Enter command: ";
        getline(cin,command);

        if (command=="p")
        {
            mylib.print();
        }
        else if (command == "q") 
        {
            cout<<"Exiting"<<endl;
            break;
        }
        else if (command[0]=='a')
        {
            if (! mylib.addBook(command.substr(2)))
            {
                cout<<"Cannot add the book."<<endl;
            }
        }

        else if (command[0]=='r')
        {
            if (! mylib.removeBook(command.substr(2,command.length()-1)))
            {
                cout<<"Cannot remove the book."<<endl;
            }
        }
        else
        {
            cout<<"Invalid command."<<endl;
        }
    }



}
