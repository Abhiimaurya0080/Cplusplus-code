#include<iostream>
#include<list>
using namespace std;
/*A List is a bi-directional linear storage of elements. Few key features as to why a list should be used is, 

It gives faster insertion and deletion operations.
Its access to random elements is slow.*/

void display(list<int> &lst){
    list<int> :: iterator it;
    for(it=lst.begin(); it !=lst.end(); it++){
        cout<<*it<<" ";
    }
    }
    int main(){
    
    list<int> list1;  //empty list of 0 length
 
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
    display(list1);
    cout<<endl;
    // Removing element from the list?
    //list1.pop_back(); // elements remove from back in th list
    //list1.pop_front(); // elements remove from front in th list
   // list1.remove(9);    //elements remove from thrr middle of the list which you  select
    
    // Sorting the list
    //  list1.sort();

    //Reversing the list
    //  list1.reverse();
        display(list1);
        cout<<endl;
    list<int> list2(3);  //empty list of length 3
    list<int> :: iterator it = list2.begin();
    *it = 45;
    it++;
    *it = 6;
    it++;
    *it = 9;
    it++;
 
     display(list2);
     list2.swap(list1);
    // list1.merge(list2);
    // cout<<" List 1 after merging";
    return 0;
}