#include <iostream>
#include<vector>
using namespace std;

int main()
{
int strength=0;
int number,y,x=0;
cin>>strength>>number;
vector<int>arr;
vector<int>arr2;

for(int i=0;i<number;i++){
cin>>x>>y;
arr.push_back(x);
arr2.push_back(y);}
for(int i=0;i<number;i++){
    for(int j=0;j<arr.size();j++){
            if(strength>arr[j]){
                strength=strength+arr2[j];
                arr.erase(arr.begin()+j);
                arr2.erase(arr2.begin()+j);

            }
    }
}
if(arr.empty()){
    cout<<"YES";
}
else{cout<<"NO";}




    return 0;
}
