// merge sort - divide & conquer

#include<iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r){
    // size of temp arr
    int an = mid-l+1;
    int bn = r-mid;

    // create 2 temp arr
    int a[an];
    int b[bn];

    for(int i=0; i<an; i++){
        a[i]=arr[l+i];
    }
    for(int i=0; i<bn; i++){
        b[i]=arr[mid+1+i];
    }

    int i=0;  // initial index of first subarray, a
    int j=0;  // initial index of second subarray, b
    int k=l;  // initial index of merge subarray

    while(i<an && j<bn){
        if(a[i]<b[j]){
            arr[k++] = a[i++];
        } else {
            arr[k++] = b[j++];
        }
    }
    while(i<an){
        arr[k++] = a[i++];
    }
    while(j<bn){
        arr[k++] = b[j++];
    }
}
  
void mergeSort(int arr[], int l, int r){
    if(l>=r){
        return;
    }
    
    int mid = (l+r)/2;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid+1, r);
    merge(arr, l, mid, r);

}


int main() {

    int arr[] = {10,28,24,6,34,18,44};
    int n = sizeof(arr)/sizeof(arr[0]);

    mergeSort(arr, 0, n-1);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}