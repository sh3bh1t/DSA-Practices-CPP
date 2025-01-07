#include<bits/stdc++.h>
using namespace std;

void print_arr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}

void selection_sort(int arr[],int n){
    for(int i=0;i<n;i++){
        int mini=i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        int temp=arr[mini];
        arr[mini]=arr[i];
        arr[i]=temp;
    }
}


int main(){
    int n=5;
    int arr[n]={34,45,6,8,90};
    selection_sort(arr,n);
    print_arr(arr,n);
}