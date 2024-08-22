#include<iostream>
using namespace std;
int main(){
    // int n;
    // cout<<"Enter a number : ";
    // cin>>n;
    // if (n%2==0)
    //     cout<<"even\n";
    // else
    //     cout<<"odd\n";


// //////////

    int a, b, c;
    cout<<"First number is : ";
    cin>>a;
    cout<<"Second number is : ";
    cin>>b;
    cout<<"Third number is : ";
    cin>>c;
    if(a>b){
        if(a>c) { cout<<a<<" is the greatest";
        }
        else {cout<<c<<" is the greatest\n";
        }
    }
    else{
        if(b>c){
            cout<<b<<" is the greatest\n";
        }
        else{
            cout<<c<<" is the greatest\n";
        }
    }
}