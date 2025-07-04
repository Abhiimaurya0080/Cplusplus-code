#include<iostream>
using namespace std;
inline int product (int a , int b){
  // Not recommended to use  below lines with inline functions 
   // return a*b;  this is execute only once 
//    static int c=0; //Next time this function is run the value of c will be retained
//    c = c + 1;
   return a*b;

}
float moneyReceived(int currentMoney, float factor=1.04){
   return currentMoney * factor ;
}
int main(){
    int a, b;
    cout<<"Enter the value of a and b "<<endl;
    cin>>a>>b;
   // cout<<"The product of a and b is "<<product(a,b)<<endl;
      int money = 100000;
      cout<< "If you have "<<money<<"Rs  in your bank account , you will receive "<<moneyReceived(money)<< "Rs after 1 year";
    return 0;
}