#include<iostream>     /* itrrates the object using pointer access the array using pointer */
using namespace std;
class Shopitem {
    int id ;
    float price;
    public:
void setData(int a, float b){
    id = a;
    price =b;
    }
    void getData(){
        cout<<" the code of this item is "<<id<<endl;
        cout<<" price of this item is "<<price<<endl;
    }

};
int main (){
    int size = 3;
    Shopitem* ptr = new Shopitem[size];
    Shopitem*ptrTemp=ptr;
    int p , i;
    float q;
    for (i = 0; i < size; i++){
        cout<<" enter id and price of item "<<i+1<<endl;
        cin>>p>>q;
        ptr->setData(p,q); //*ptr.setData(p,q);
        ptr++;
    }
    for (int j = 0; j < size; j++){
        cout<<"Item number "<<j+1<<endl;
        ptrTemp->getData();
        ptrTemp++;
         }
    

    return 0;

}
















    

