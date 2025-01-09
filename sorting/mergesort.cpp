#include <bits/stdc++.h>
using namespace std;

void printarr(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
}

void ms(vector<int> &arr, int low,int high){
    if(low==high){
        return;
    }
    int mid=(low+high)/2;
    ms(arr,0,mid);
    ms(arr,mid+1,high);
    merge(arr,0,mid,high);
}

int main(){
    vector<int> arr={20,9,3,5,10,12};
    ms(arr,0,arr.size()-1);
    printarr(arr);
}