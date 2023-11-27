//include headers and libraries
#include "Library.h"
#include <string>
#include <iostream>
//implement class functions

using namespace std;

Library::Library() //default constructor with no books
{
    for (int i=0; i<10; i++)
    {
        this->books[i]="";
    }
}

bool Library::addBook(string bookName)
{
    for (int i=0; i<10; i++)
    {
        if(this->books[i]==bookName)
        {
            return false;
        }
        else if(this->books[i]=="")
        {
            this->books[i]=bookName;
            return true;
        }
    }
    return false;
}

bool Library::removeBook(string bookName)
{
    for (int i=0; i<10; i++)
    {
        if(this->books[i]==bookName)
        {
            books[i]="";
            return true;
        }

    }
    return false;
}

void Library::print()
{
    cout<<"Library contents:"<<endl;
    for (int i=0; i<10; i++)
    {  
        if(this->books[i]!="")
        {
            cout<<this->books[i]<<endl;
        }
    }
}

