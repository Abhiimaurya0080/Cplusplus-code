#include <iostream>
using namespace std;
int main (){
    int age;
   cout<<"tell me your age "<<endl;
   cin>>age;
// if((age<18)  && (age>0)) {
//     cout<<"you can not come to my party" <<endl;
// }
// else if(age==18){
//     cout<<"you are a kid and you will get a kid pass to the party"<<endl;
// }
// else if(age<1){
//     cout<<"you are not yet born"<<endl;
// }
// else{
//     cout<<"you can come to the party"<<endl;
// }

//Seelection control structure: Switch case statement

    switch (age)
    {
    case 18:
        /* code */
               cout<<"you are 18";
        break;
       case 22: 
             cout<<"you are 22";
       break;
       case 24:
              cout<<"you are men";
       break;
        
    default:
    cout<<" No special cases"<<endl;
        break;
    }


    return 0;
}