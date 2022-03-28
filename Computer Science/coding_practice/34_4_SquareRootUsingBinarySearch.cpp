#include <iostream>
using namespace std;

// Square Root of any number upto precision p using Binary Search
float squareRoot(int no, int p){
    int s = 0;
    int e = no;
    int mid;
    float ans;

    // For getting perfect square root i.e., Integer Part
    while (s <= e)
    {
        mid = (s+e)/2;
        if (mid*mid == no)
        {
            ans = mid;
            break;
        }
        else if(mid*mid < no){
            ans = mid;
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }

    // Fractional part upto p precision
    float inc = 0.1;
    for (int i = 0; i < p; i++)
    {
        while (ans*ans <= no)
        {
            ans += inc;
        }
        ans -= inc;
        inc = inc/10;
    }
    
    return ans;
}

int main(){
    cout << squareRoot(25,2) << endl;
    cout << squareRoot(10,3) << endl;
    cout << squareRoot(49,3) << endl;

    return 0;
}