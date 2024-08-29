#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    // cout<<" size is : "<<v.size()<<"\n";
    // cout<<" capacity is : "<<v.capacity()<<"\n";

    // v.push_back(1);
    // cout<<" size is : "<<v.size()<<"\n";
    // cout<<" capacity is : "<<v.capacity()<<"\n";

    // v.push_back(2);
    // cout<<" size is : "<<v.size()<<"\n";
    // cout<<" capacity is : "<<v.capacity()<<"\n";

    // v.push_back(3);
    // cout<<" size is : "<<v.size()<<"\n";
    // cout<<" capacity is : "<<v.capacity()<<"\n";

    // v.push_back(4);
    // cout<<" size is : "<<v.size()<<"\n";
    // cout<<" capacity is : "<<v.capacity()<<"\n";

    // v.pop_back();
    // cout<<" size is : "<<v.size()<<"\n";
    // cout<<" capacity is : "<<v.capacity()<<"\n";

    int n;
    cout<<"Number of elements in vector : ";
    cin>>n;
    for(int i=0; i<n; i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";
//////////////////////////////insert
    v.insert(v.begin()+1,707070);

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";

///////////////////////////////erase
    v.erase(v.end()-2);

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";



}