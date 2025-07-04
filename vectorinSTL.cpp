//  vector in c++ STL lecture 71
 #include<iostream>
#include<vector>
using namespace std;
// template<class T>
void display(vector<int> &v){ // vector<T>
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
        // cout<<v.at(i)<<" ";
    }
    cout<<endl;
}
int main(){ 
    vector<int> vec1;
    int element, size = 2;
    cout<<"Enter the size of your vector"<<endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter an element to add to this vector: ";
        cin>>element;
        vec1.push_back(element);
    }
    display(vec1);    
    display(vec1);
   // vec1.pop_back(); // already add pop value so the value is less 1 before upper value of compile the program.
    display(vec1);
      vector<int> :: iterator iter = vec1.begin();

    // vec1.insert(iter+1,50,566); // depend on this value if iter value put before any digit num then iter point on that place.
     display(vec1);
    //   vector<int> vec1;      //zero length integer vector
    //   vector<char>vec2(4);  //4-element character vector
     // vec2.push_back('5');
    // display(vec2);
    //  vector<char>vec3(vec2);//4-element character vector from vec2
    //  display(vec3);
    // vector<int> vec4(4,13); //6-element vector of 3s 
    // display(vec4);
    return 0;
   
}
