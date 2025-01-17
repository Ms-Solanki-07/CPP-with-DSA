// find the square root of the given non negative value x. round it off to the nearest floor integer value.
// O(logN);

#include<iostream>
using namespace std;
int sqrt(int x){
    int lo=1; 
    int hi=x;
    int ans=-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(mid*mid <= x){
            ans = mid;
            lo = mid +1;
        } else {
            hi = mid-1;
        }

    }
    return ans;
}

int main () {
    int x;
    cin>>x;
    cout<<sqrt(x);

    return 0;
}