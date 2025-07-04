#include<iostream>
using namespace std;
class A{     /* this is a keyword which is a pointer to the object which  invokes the member function ;*/
    int a;
    public :
    A & setData(int a){
        this->a=a;
        return *this;
    }
    // void setData(int a){
        // this->a = a;
    // }

    void  getData(){
        cout<<"  the value of is a "<<a<<endl;
    }    
    };
int main(){
    A a;
    // a.setData(5);
    // a.getData();
    a.setData(5).getData();
    return 0;
}