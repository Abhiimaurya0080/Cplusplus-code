#include<iostream>      // [ lectures 50 completed <<<<_--- revisiting pointers: new and delete operators---]
using namespace std;
int main(){
    int a = 7;
     int*ptr = &a;
    // *ptr = 999;
     cout<< "the value of a is "<<a<<endl;
     // New operator 
    float*p = new float(96.32);
    cout <<"the value at address p is " <<*(p)<<endl;
    int *arr =new int [5]; // dynamically allocated array of size 5;
    arr[0]= 10;
    arr[1]= 20;
    arr[2]= 30;
    arr[3]= 40;
    arr[4]= 50;
//    delete[] arr; // deallocating the memory allocated for the array;

   // Accessing the values after deletion (undefined behavior)
     cout<<"the value of arr[0] is "<<arr[0]<<endl;
     cout<<"the value of arr[1] is "<<arr[1]<<endl;
     cout<<"the value of arr[2] is "<<arr[2]<<endl;
     cout<<"the value of arr[3] is "<<arr[3]<<endl;
     cout<<"the value of arr[4] is "<<arr[4]<<endl;

    return 0;
}