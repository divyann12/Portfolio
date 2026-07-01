#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"Enter how many no.s you want to keep: "<<endl;
    int n;
    cin>>n;
    vector<int> arr{n};
    cout<<"Enter the array: ";
    for(int i = 0; i<n; i++){
        int num;
        cin>>num;
        arr[i] = num;
    }
    cout<<"The Array is : ";
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
    return 0;
}