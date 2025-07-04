         // ------Pointer to Derived Class -------//
            // Try to access the property of derived class from base class then it will give an error .
            //  Base class pointer always pointed base class and run display always shown base class.
            // pointer runn to the baseclass when derived/run from derived class
         #include<iostream>
         using namespace std;
        
            class BaseClass{
                public:
                int var_base;
                void display(){
                    cout<<"Base Class display var_base "<<var_base<<endl;
                }
               };
                 
            class DerivedClass: public BaseClass{
                public:
               int var_derived;
               void display(){
                  cout<<"Base Class display var_base " <<var_base<<endl;
                cout<<"Derived Class display var_derived " <<var_derived<<endl;
              }
            };
            int main(){
                BaseClass*base_class_pointer;
                BaseClass obj_base;
                DerivedClass obj_derived;
                base_class_pointer = &obj_derived; // base class pointer pointing to derived class object;

                  base_class_pointer->var_base=34;
                //   base_class_pointer->var_derived=340;
                  base_class_pointer->display ();

                      base_class_pointer->var_base=3400;
                      base_class_pointer->display ();

                      DerivedClass*derived_class_pointer;
                      derived_class_pointer = &obj_derived;
                      derived_class_pointer->var_base = 94;
                      derived_class_pointer->var_derived = 9444;
                      derived_class_pointer->display();
                      return 0;
                       };