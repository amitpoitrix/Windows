#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// vector a kind of array that dynamically doubles up its size when needed

bool compare(int a, int b){
    return a>b;
}

int main(){
    vector<int> v;
    v.reserve(100); //reserve() function will create the vector bucket of size 100
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp); // while inputting v[i] won't work all the time so we use push_back() function
    }

    v.pop_back(); // pop_back() removes the last element
    sort(v.begin(), v.end(), compare);  // begin() & end() points to starting & ending element
    //v.clear();  clear() delete all the elements store in vector
    cout << v.capacity() << endl;

    // print these
    for (int i = 0; i < v.size(); i++)  // size() function return exact size occupy by the element
    {
        cout << v[i] << " ";   // for printing we can use v[i]
    }
    
    //cout << v.max_size() << endl;
    
    return 0;
}