#include <iostream>

using namespace std;

int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<n;i++){
    int j=0;
    for(;j<n;j++){
        if(i!=j && arr[i]==arr[j]){
            break;
        }
    }
    
        if (j == n)
        {
            cout<<arr[i];
        }
}
}
