//#58abstract class and pure functions virtual functions
 // Pure virtual functions are used to create abstract classes.
 // The work of abstract classes is to provide a common interface for derived classes.
#include<iostream>
using namespace std;
    class CWH{
    protected:
        string title;
        float rating;
        public:
    CWH(string s,float r){
        title = s;
        rating = r;
        }
    virtual void display()=0; //pure virtual functions;
       };
    class CWHVideo : public CWH 
       {
     float videoLength;
        public :
        CWHVideo(string s,float r, float vl):
        CWH(s,r){
        videoLength = vl; 
        }
     void display () {
        cout<<" An amazing video with title " <<title<<endl;
        cout<<" Rating: "<<rating<<" out of 5 stars "<<endl;
        cout<< "Length of this video is: "<<videoLength<<" minutes "<<endl;
        }
        };

    class CWHText: public CWH{
        int words;
        public :
        CWHText(string s,float r, int wc): CWH(s,r){
        words = wc; 
        }
     void display (){
        cout<<" An amazing text with title "<<title<<endl;
        cout<<" Rating: "<<rating<<" out of 5 stars "<<endl;
        cout<< " No. of words of this text: "<<words<<"words"<<endl;
        }
        };
     int main(){
        string title;
        float rating ,vlen ;
        int words;
        // for carry minaati video --
        title = "Django tutorials for begginers: ";
        vlen = 12.36;
        rating  = 4.93;
     CWHVideo djVideo(title,rating,vlen);
   
        // for code with harry text -- 
        title = "Django tutorials text: ";
        words = 566;
        rating = 4.66;
        CWHText djText( title, rating,words);   
        CWH*tuts[2];
        tuts[0] = &djVideo;
        tuts[1] = &djText;
        tuts[0]->display();
        tuts[1]->display();
     return 0;
     }