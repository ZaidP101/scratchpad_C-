#include<iostream>
using namespace std;



// Combination /////////////////////
// int fact(int x){
//     int f = 1;
//     for(int i=1; i<=x; i++){
//         f *= i;
//     }
//     return f;
// }

// int main(){
//     int n, r;
//     cout<<" Enter n : ";
//     cin>>n;
//     cout<<" Enter r : ";
//     cin>>r;
//     int a = fact(n);
//     int b = fact(r);
//     int c = fact(n-r);
//     cout<<a/(b*c)<<"\n";

// }

// ///////////////////////// PASCAL TRIANGLR ////////////////////////
// int fact(int x){
//     int f = 1;
//     for(int i=1; i<=x; i++){
//         f *= i;
//     }
//     return f;
// }
// int ncr(int n, int r){
//     return fact(n)/(fact(r)*fact(n-r));
// }

// int main(){
//     int n;
//     cout<<" Number of times : ";
//     cin>>n;
//     for(int i=0; i<=n; i++){
//         for(int j=0; j<=i; j++){
//             cout<<ncr(i,j)<<" ";
//         }
//         cout<<"\n";
//     }
// }

/////////////////////////////////////  swap  ////////////////////////////
// int main(){
//     int x = 2;
//     int y = 4;
//     cout<<x<<" "<< y<<"\n";
//     int tem = x;
//     x = y;
//     y = tem;
//     cout<<x<<" "<< y<<"\n";
// }

////////////////////////////////////  Without tem  //////////////////////
// void swap(int& x, int& y){
//     x = x+y;
//     y = x-y;
//     x = x-y;

// }
// int main(){
//     int x = 2002;
//     int y = 4004;
//     cout<<x<<" "<< y<<"\n";
//     swap(x,y);
//     cout<<x<<" "<< y<<"\n";
// }

