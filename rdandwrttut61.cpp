    // raed and write operation in c++

   //   * Read Operation --->>>
  /* ifstream in (This.txt);
     string stp;
     in>>st; // just like cin;
        *  Write Operation --->>>
        ofstream out("This.txt");
        string st = Abhii Maurya;
        out<<st;
     connecting our file with aout  stream  */
     #include<iostream>
     #include<fstream>
     using namespace std;
     int main(){  //write the file;
          ofstream aout ("This79.txt");
          string name;
          cout<<"Enter your name";
          cin>>name;
          aout<<name +" is my name";
          aout.close();
           
          // Read the file;

          ifstream ain("This79.txt");
          string content;
          ain>>content;
          cout<<" the content of this file is: "<<content<<endl;
          ain.close();
        
        return 0;
     }