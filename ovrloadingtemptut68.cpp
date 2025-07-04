#include <iostream>
using namespace std;
template <class T>
class Harry
{
public:
    T data;
    Harry(T a)
    {         // Function overloading allows defining multiple functions with the same name but different parameter lists within the same scope
         //   . Function templates, on the other hand, provide a way to write generic functions that can operate on various data types without 
                    // needing to write separate functions for each type
        data = a;
    }
    void display();
};
 
template <class T>
void Harry<T> :: display(){
    cout<<data;
}

 
void func(int a){
    cout<<"I am first func() "<<a<<endl;
}
 
template<class T>
void func(T a){
    cout<<"I am templatised func() "<<a<<endl;
}
int main()
{


    // Harry<int> h(5.7);
    // cout << h.data << endl;
    // h.display();
  

    func(4);  //Exact match takes the highest priority
    return 0;
}
 // C++ program to demonstrate the
// function overloading
// #include <iostream>
// using namespace std;
// template< class T>
// // Function to calculate square
// int square(int a)
// {
//     cout << "Square of " << a
//          << " is " << a * a
//          << endl;
// }

// // Function to calculate square
// int square(double a)
// {
//     cout << "Square of " << a
//          << " is " << a * a
//          << endl;
// }

// // Driver Code
// int main()
// {
//     // Function Call for side as
//     // 9 i.e., integer
//     square(9);

//     // Function Call for side as
//     // 2.25 i.e., double
//     square(2.25);
//     return 0;
// }