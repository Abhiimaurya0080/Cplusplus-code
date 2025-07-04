/* we define multiple datatypes in one  class frame specify in one template */

#include<iostream>
using namespace std;
template<class T, class S>
class Book{
    public:
    T data1;
    S data2;
    Book(T d1, S d2){
        data1 = d1;
        data2 = d2;
    }
    void display(){
        cout<<this->data1<<endl;
        cout<<this->data2<<endl;
  }
};
int main(){
    // Book<char, float> b('B', 3.69); // here we define multiple datatypes on one template class;
    // Book<int, float> b(42, 3.69);
    Book< float, double > b(40.2, 3.66646949);
    b.display();
    
    return 0;
}