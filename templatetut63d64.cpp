               
               
               
               /*----->>>>>>>---------<<<<<<<<<<< Templates in c++ lecture 63 and 64 are equal --->>>>>>-----------<<<<<<<<<<




  a termplate is  behind to esclate the potential pof c++ several fold by giving it ability to define data types as parametr making it useful to reduce 
  repeatation 
  
   why use templates ?
   1. Do Not Repeat (|DRY)/
   2. Generic Programming.-- create only one class not being specific and use for any data types*/
   #include<iostream>
   using namespace std;
   template<class T>
   class vector{
   public:
   T*arr;
   int size;
    vector(int m) //constructor intilaize the sizze of the vector;
    {
    size=m;
    arr=new T[size];
     }
    T dotProduct(vector&v){
    T d=0;
    for(int i=0; i<size; i++){

    d+=this->arr[i]*v.arr[i];
    }
    return d;
    }
   };
    int main(){
        vector<float>v1(3);
        v1.arr[0] = 3.2;
        v1.arr[1] = 2.5;
        v1.arr[2] = 1.6;

     vector<float>v2(3);

        v2.arr[0] = 2.3;
        v2.arr[1] = 5.2;
        v2.arr[2] = 4.1;
        float a =v1.dotProduct(v2);
        cout<<a<<endl;
        return 0;
   }
   
