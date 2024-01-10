#include<bits/stdc++.h>
using namespace std;
int main(){

//intialize array
    array<int,5>a={1,2,7,6,9};
//to check size of array
    int size = a.size();
    cout<<size<<endl;

    //access any index of array 
    cout<<a.at(2)<<endl;
    cout<<"to check if empty or not"<<a.empty()<<endl;
//first element
cout<<a.front()<<endl;
//last element
cout<<a.back();

}