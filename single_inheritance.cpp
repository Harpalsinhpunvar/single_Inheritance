#include<iostream>
using namespace std;

//Base class
class Student {
    
    public:
        int rollno;
        string sname;

        void setdata(){

            rollno = 1;
            sname = "ABC";// till here, base class!
        }
};

//sub-class started from here.
class Marks: public Student {
    
    public:
    int m1, m2, m3, total;
    float per;
    void setmarks() {
       
        setdata();
        m1 = 60;
        m2 = 65;
        m3 = 55;
        total = m1 + m2 + m3;
        per = total / 3;
    }
    void show() {

        setmarks();
        cout<<"Student Information"<<endl<<endl;
        cout<<"Student Roll No: "<<rollno<<endl;
        cout<<"Student Name: "<<sname<<endl;
        cout<<"|-------------------------|"<<endl;
        cout<<"|======Student Marks======|"<<endl;
        cout<<"|-------------------------|"<<endl;
        cout<<"\tMarks1: "<<m1<<endl;
        cout<<"\tMarks2: "<<m2<<endl;
        cout<<"\tMarks3: "<<m3<<endl;
        cout<<"\tTotal: "<<total<<endl;
        cout<<"\tPercentage: "<<per<<endl;
    }
};

int main(){

    Marks marks;
    marks.setmarks();
    marks.show();
    
return 0;
}