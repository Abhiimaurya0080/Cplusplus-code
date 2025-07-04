/*constructor (arguement - list ): intiialization section 
{ Assignment + other code}
  -------<<<<<<<<<provide the value of class data member >>>>>>>>>>------------*/


  #include<iostream>
  using namespace std;
  class Test {
  int a; 
  int b;
 public :
//   Test(int i, int j ): a(i) , b(j)
//   Test(int i, int j ): a(i) , b(i+j)
//   Test(int i, int j ): a(i) , b(5*j)
  Test(int i, int j ): b(j) , a(i+j)
{
    cout<<"constructor executed "<<endl;
    cout<<"the value of a is "<<a<<endl;
    cout<<"the value of b is "<<b<<endl;
}};
int main(){
    Test t(4, 6);
    return 0;
}