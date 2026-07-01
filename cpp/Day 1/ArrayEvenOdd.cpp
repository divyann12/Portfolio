#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> arr{100,101,110,60};

for(int i = 0; i<arr.size(); i++){
    if(arr[i]% 2 == 0){
        cout<<"even"<<endl;
    }
    else{
        cout<<"Odd"<<endl;
    }
}
}