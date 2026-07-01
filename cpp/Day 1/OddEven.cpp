#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n=5;
    int num;
    vector<int> arr{};
    cout<<"Enter the array elements: ";
    for(int i = 0; i<n; i++){
        cin>>num;
        arr[i] = num;
    }
    vector<int> evenArr{};
    vector<int> OddArr{};
    if(arr[num]%2 == 0){
        evenArr.push_back(num);
    }
    else if(arr[num]%2 != 0){
        OddArr.push_back(num);
    }
    for(int i = 0; i<n; i++){
    cout<<evenArr[i];}

}