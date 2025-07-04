#include<iostream>
using namespace std;
class Student{
    protected :      /*The virtual base class is a concept used in multiple inheritances to prevent ambiguity between multiple instances*/
    int roll_no;
    public:
    void set_roll_no(int a){
        roll_no= a;
    }
        void print_number(void){

        cout<<"your roll number is "<<roll_no<<endl;
    }
    };

    class Test:virtual public Student{
     protected:  
     float maths ,physics;
     public:
     void set_marks(float m1, float m2){
      maths  = m1;
      physics = m2;
    } 
    void print_marks(void){
        cout<<"your result is here"<<endl;
        cout<<"your marks are in maths "<<maths<<endl;
        cout<<"your marks are in physics "<<physics<<endl;
    } 
    };

    class Sports :virtual public Student{
    protected:
    float score;
    public:
    void set_score(float sc){
        score= sc;
     }
     void print_score(void){
        cout<<" your score is "<<score<<endl;
     }
    };
    class Result: public Test , public Sports{
        private:
        float total;
        public:
        void display(void){
            total= maths + physics + score;
            print_number();
            print_marks();
            print_score();
            cout<<"your total score is "<<total<<endl;

        }
    };
    int main(){
        Result abhi;
        abhi.set_roll_no(477);
        abhi.set_marks(69.9,99.8);
        abhi.set_score(9);
        abhi.display();
    
    return 0;
}