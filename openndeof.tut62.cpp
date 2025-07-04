// Open and close  a file using the open() member function of the class.
#include<iostream>
#include<fstream>
#include<string>
#include<cstring>
using namespace std;
int main(){
    ofstream out;
    out.open("sample60.txt");
    out<<"Maurya Abhi";
    out<<"Maurya Samrat";
    out.close();//closing file connection;

    ifstream in;
    string st;
    in.open("sample60.txt");
    while(in.eof()==0){
       (getline(in,st));
        cout<<st<<endl;
        in.close();
    }

return 0;
}