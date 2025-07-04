// in it which things common for all object store only one time  and which things different for memory   provide another memory for that memory 
#include<iostream>
using namespace std;
class shop {
    int itemId[100];
    int itemPrice [1000];
    int counter;
    public:
    void intitcounter(void){counter=0;}
    void setPrice(void);
    void displayPrice(void);
};
void shop::setPrice(void)
{
    cout<<"Enter id of your item no"<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"Enter Price of your item "<<endl;
    cin>>itemPrice[counter];
    counter++;
}
void shop ::displayPrice(void){
    for ( int i=0; i<counter; i++)
    {
        cout<<"The Price of the item with id "<<itemId[i]<<" is "<<itemPrice [i]<<endl;

    }

}
int main(){
 shop dukaan;
 dukaan.intitcounter();
 dukaan.setPrice();
 dukaan.setPrice(); 
 dukaan.displayPrice();



    return 0;
} 