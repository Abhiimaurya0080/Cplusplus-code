#include<iostream>
#include<map>
#include<string>
//Map is used to store key values, And (.insert) is used to inseet the value in map
 
using namespace std;
 
int main(){
    //map <data_type_of_key,   data_type_of_value>  variable_name;

 
    // Map is an associative array
    map<string, int>  marksMap;
    marksMap["Atul"] = 58;
    marksMap["Rohit"] = 57;
    marksMap["Kishlay"] = 78;
    marksMap["Aditya"] = 65;
    marksMap["Sachin"] = 53;
 
    map<string,int> :: iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";

        marksMap.insert( { {"Rohan", 89}, {"Akshat", 46} } ); // use of insert to insert new value  in map 

     }
 
    return 0;
}
