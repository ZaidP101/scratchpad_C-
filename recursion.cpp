#include<iostream>
using namespace std;

// void pr(int n){
//     if(n==0) return;
//     cout<<n<<"\n";
//     pr(n-1);
// }
// int main(){
//     pr(5);
// }


///////////////////// with extra parameter x //////////////////////
// void pr(int x, int n){
//     if(x>n) return;
//     cout<<x<<"\n";
//     pr(x+1, n);
// }
// int main(){
//     int n;
//     cout<<"number of times : ";
//     cin>>n;
//     pr(1,n);
// }

///////////////////// without extra parameter x //////////////////////
// void pr(int n){
//     if(n==0) return;
//     pr(n-1);
//     cout<<n<<"\n";
// }

// int main(){
//     int n;
//     cout<<"Number : ";
//     cin>>n;
//     pr(n);  
// }


////////////////////////////// sum //////////////////////
// int sum(int n){
//     if(n==1) return 1;
//     return n + sum(n-1);
// }
// int main(){
//     int n;
//     cout<<"number of times : ";
//     cin>>n;
//     cout<<sum(n)<<"\n";
// }

////////////////////////////// factorial //////////////////////
// int fto(int n){
//     if(n==1 || n==0) return 1;
//     return n * fto(n-1);
// }
// int main(){
//     int n;
//     cout<<"number of times : ";
//     cin>>n;
//     cout<<fto(n)<<"\n";
// }

////////////////////////////// a to the power b (a^b) //////////////////////
// int pow(int a ,int b){
//     if(b==0) return 1;
//     return a * pow(a,b-1);
// }
// int main(){
//     int a, b;
//     cout<<" In a^b, a =  ";
//     cin>>a;
//     cout<<" In a^b, b =  ";
//     cin>>b;
//     cout<<pow(a,b)<<"\n";
// }


////////////////////////////// fibonacci series //////////////////////

// int fibo(int n){
//     if(n==1 || n==2) return 1;
//     return fibo(n-1) + fibo(n-2);
// }
// int main(){
//     int n;
//     cout<<"Number : ";
//     cin>>n;
//     cout<<fibo(n)<<"\n";
// }


