#include <iostream>
using namespace std;

// First Occurence of element in sorted order also known as Lower Bound and last Occurence also known as Upper Bound using Binary Search
int firstOccurence(int a[], int n, int key)
{
    int s = 0;
    int e = n-1;
    int ans = -1;
    while (s <= e)
    {
        int mid = (s+e)/2;
        if (a[mid] == key)
        {
            // almost same as Binary Search but here we just modify the code
            ans = mid;
           // e = mid-1; // Becoz we are searching in leftmost part i.e., first occurence
             s = mid+1; // for last occurence i.e., Upper Bound
        }
        else if(a[mid] > key){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return ans;
}

int main(){
    int a[] = {1,2,2,2,2,4,4};
    int n = sizeof(a)/sizeof(int);
    // calling firstOccurence()
    int ans = firstOccurence(a, n, 2);
    cout << "First Occurence of 2 is " << ans << endl;
    return 0;
}