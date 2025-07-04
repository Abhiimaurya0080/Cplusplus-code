#include<iostream>
using namespace std;
      
    class Student
    {
      protected:
      int roll_number;
      public:
      void set_roll_number(int);
      void get_roll_number(void);
    };
    void Student ::set_roll_number(int r){
    roll_number =r;
    }
    void Student::get_roll_number(){
    cout<<"The roll number is "<<roll_number<<endl;
    }


    class Exam:public Student
    {
    protected:
    float maths;
    float physics;
    public:
    void set_marks(float, float);
    void get_marks(void);
    };
    void Exam ::set_marks(float m1 , float m2){
    maths =  m1;
    physics = m2;
    }
    void Exam ::get_marks(){
         cout<<"The marks obtained in maths are "<< maths <<endl;
         cout<<"The physics obtained in maths are "<< physics <<endl;
    }

     class Result : public Exam
     {
     int percentage;
     public:
     void display_result(){
     get_roll_number();
     get_marks();
     cout<<"your result is "<<(maths + physics)<<"%"<<endl;
     }
     };


int main(){
    Result abhii;
    abhii.set_roll_number(321);
    abhii.set_marks(98.4 ,97.9);
    abhii.display_result();
    
    return 0;
}