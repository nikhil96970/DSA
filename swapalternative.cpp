#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swapAlternative(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(size>i+1){
            // swap(arr[i] , arr[i+1]); INSTEAD OF THIS FN YOU CAN DO THIS ALSO
            int temp=arr[i];
            arr[i]==arr[i+1];
            arr[i+1]==temp;

        }
    }
}


int main(){
    int even[8]={5,7,6,8,3,2,4,9};
    int odd[5]={2,4,9,3,7};
    swapAlternative(even,8);
    printarray(even,8);

    swapAlternative(odd,5);
    printarray(odd,5);
    return 0;

}