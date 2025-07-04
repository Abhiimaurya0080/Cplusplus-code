#include<iostream>     // It is used to define generic functions to able to use a function independent of its data types different type of combination.
using namespace std;    // the data type combinations between an integer, a float, or a double value.
template<class T1, class T2>
float funcAverage(T1 a,T2 b){           
    float avg=(a+b)/2.0;
    return avg;
}

int main(){
    float a;
    a = funcAverage(5,3);
    printf("average of these number is %f ", a);
return 0;
}