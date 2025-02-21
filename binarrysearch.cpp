#include <bits/stdc++.h>
using namespace std;


int binarysearch(int arr[], int size, int tar)
{
    int st=0, en = size-1;

    while(st<=en)
    {
        int mid = (st+en)/2;
        if(tar>arr[mid])
        {
            st = mid+1;
        }else if(tar<arr[mid])
        {
            en = mid-1;
        }else
        {
            return mid;
        }
    }
    return -1;
}


int main()
{
    int arr1[]={-1, 0, 3, 4, 5, 9, 12};
    int size = sizeof(arr1) / sizeof(arr1[0]);
    int tar1 = 12;
    cout<<binarysearch(arr1, size, tar1)<<endl;

    int arr2[]={-1, 0, 3, 5, 9, 12};
    int tar2 = 0;

    size = sizeof(arr2) / sizeof(arr2[0]);
    cout<<binarysearch(arr2, size, tar2)<<endl;

    return 0;
}
