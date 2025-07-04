#include<iostream>
#include<functional>
#include<algorithm>
 
using namespace std;
 
int main(){
 
    // Function Objects (Functor) : A function wrapped in a class so that it is available like an object
    int arr[] = {1,73,8,2,64,88};
    sort(arr,arr+5,   greater <int>());    // use of (greater int) for sort in desccending order.And (arr+5) used to sort for only  5 digit sort
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<endl;
    }
 
    return 0;
}
