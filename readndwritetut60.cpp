/* fstream base
Ifstream ---->derived from fstreambase
Ofstream----->derived from fstreambase

In order work with files in c++ you will have to open it.
Primarlly , there are 2 ways to open a file 

1. Using the constructor.
Using the member function open() of the class.*/
#include<iostream>
#include<fstream>
#include<string>
#include<cstring>
using namespace std;
int main(){
     string st = "Abhishek  0080 Maurya";
     string st2;
    //Opening files using constructor and writing to a file ;
     ofstream out ("Sample60.txt");  // ofstream is used to create and write a file
     out<<st;
    
    ifstream in(" Sample60b.txt");// ifstream is used to read a file .
    in>>st2;
     getline(in,st2);
    cout<<st2;

    
    return 0;
}




