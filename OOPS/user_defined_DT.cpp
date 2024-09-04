#include<iostream>
using namespace std;
// class Students{
// public:
//     string name;
//     int roll;
//     float gpa;
// };
// void print(Students s){
//     cout<<"Name : "<<s.name<<"  Roll - "<<s.roll<<"  GPA = "<<s.gpa<<"\n";
// }
// int main(){
//     cout<<"Enter the Name, Roll No. & GPA of the Student"<<"\n";
//     Students s1;
//     cin>>s1.name;
//     cin>>s1.roll;
//     cin>>s1.gpa;


//     cout<<"Enter the Name, Roll No. & GPA of the next Student"<<"\n";
//     Students s2;
//     cin>>s2.name;
//     cin>>s2.roll;
//     cin>>s2.gpa;

//     /////////////////////////  coppy ///////////////////////
     
//     Students s4 = s1; // deep copy
//     Students s5(s2); // Copy constructor

    
//     // cout<<"Name : "<<s1.name<<"  Roll - "<<s1.roll<<"  GPA = "<<s1.gpa<<"\n";
//     // cout<<"Name : "<<s2.name<<"  Roll - "<<s2.roll<<"  GPA = "<<s2.gpa<<"\n";

//     print(s1);
//     print(s2);
//     print(s4);
//     print(s5);
// }



// ///////////////////////////////////// Constructor  ///////////////////////////////////// //

// class Students{
// public:
//     string name;
//     int roll;
//     float gpa;

//     //////  Constructor /////////
//     Students(string s, int r,float g){
//         name = s;
//         roll = r;
//         gpa = g;
//     }
// };
// int main(){
//     Students s3("Ali",33,8.8);

//     cout<<"Name : "<<s3.name<<"  Roll - "<<s3.roll<<"  GPA = "<<s3.gpa<<"\n";
// }

////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// if you want both ways of initialization then, //////////////////////////
////////////////////////////////////// set the default parameter > while building a //////////////////////////
////////////////////////////////////// a constructor in class, make an empty constructor ////////////////////
////////////////////////////////////// Eg :- students(){} //////////////////////////////////////////////////
////////////////////////////////////// just adding the above will allow you initialized in same class//////
//////////////////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////// similarly multiple constructors are allowed //////////////////////


//////////////////////////////////////  Function in function //////////////////////////////////
// class Students{
// public:
//     string name;
//     int roll;
//     float gpa;

//     Students(string name, int roll,float gpa){
//         this->name = name;      // here first NAME is of CLASS and SECOND is of PARAMETER
//         this->roll = roll;      
//         this->gpa = gpa;       
//     }

//     void print(){
//     cout<<"Name : "<<name<<"  Roll - "<<roll<<"  GPA = "<<gpa<<"\n";
//     }
// };
// int main(){
//     Students s1("Ali",33,8.8);
//     Students s2("zaid", 34, 7.3);

//     s1.print();
//     s2.print();
// }

/////////////////////////////////////  Inheritance /////////////////////////////////////////////

class scooty{ ////// parent class
public:
    int speed;
    float miliage;
private:
    int bootspace;
};
class bike : public scooty{   //// clid class or derived class
public:
    int gears;

void print(){
    cout<<speed<<"\n"<<miliage<<"\n"<<gears<<"\n";
}
};
int main(){
    bike b1;
    b1.speed = 20;
    b1.miliage = 2000;
    b1.gears = 6;

    b1.print();
}
