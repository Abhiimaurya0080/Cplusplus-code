#include<iostream>
using namespace std;
class BankDeposit{   // The dynamic initialization of the object means that the object is initialized at the runtime. 
                          // Dynamic initialization of the object using a constructor is beneficial when the data is of different formats
    int principal;
    int years ;
    float interestRate ;
    float returnValue;
    public:
    BankDeposit(){}
    BankDeposit( int p, int y, float r);// r is here float like 0.04 ;  
    BankDeposit( int p, int y, int r);// r is here int  like 14  ;
     void show();

};

BankDeposit :: BankDeposit( int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for ( int i=0; i<y; i++)
    {
       returnValue = returnValue * (1+interestRate);
    }
}
BankDeposit :: BankDeposit( int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r)/100;
    returnValue = principal;
    for ( int i=0; i<y; i++)
    {
       returnValue = returnValue * (1+interestRate);
    }
}

 void BankDeposit :: show(){
    cout<<endl<<"principal amount was "<<principal
    <<".Return value after "<<years
    <<" years is "<<returnValue<<endl;
 }
int main(){
    BankDeposit bd1, bd2, bd3;
    int p,y;
    float r;
    int R;
    cout<<"Enter the value of p,y and r"<<endl;
    cin>>p>>y>>r;
    bd1 = BankDeposit( p,y,r);
    bd1.show();
    cout<<"Enter the value of p,y and R"<<endl;
    cin>>p>>y>>R;
    bd2 = BankDeposit( p,y, R);
    bd2.show();
    return 0;
}