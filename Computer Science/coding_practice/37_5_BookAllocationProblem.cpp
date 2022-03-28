#include <iostream>
using namespace std;

#define ll long long int

// n -> no. of books, m-> no. of students
// Problem -> Find max no. of pages a student can have in his assignmenet of books
bool isValidConfig(ll books[], ll n, ll m, ll mid){
    ll student = 1;
    ll current_pages = 0;
    for (int i = 0; i < n; i++)
    {
        if (current_pages + books[i] > mid)
        {
            current_pages = books[i];
            student++;
            if (student > m)
                return false;
        }
        else{
            current_pages += books[i];
        }
    }
    return true;
}

int binarySearchBooks(ll books[], ll n, ll m){
    ll s, e;
    ll total_pages = 0; // e will be equal to sum of all pages i.e, total pages
    for (int i = 0; i < n; i++)
    {
        total_pages += books[i];
        // let s be a variable to store the book with max no of pages that can be assign to any student and it will be last book as elements are sorted
        s = max(s, books[i]);
    }
    e = total_pages;
    int finalAns = s;

    while (s <= e)
    {
        ll mid = (s+e)/2;
        if (isValidConfig(books, n, m, mid)){
            // True than search in left portion for lowerBound element which is true
            finalAns = mid;
            e = mid-1;
        }
        else{
            // False than search in right portion
            s = mid+1;
        }
    }
    return finalAns;
}

int main(){
    ll n, m;
    cin >> n >> m;
    ll books[10005];
    for (int i = 0; i < n; i++)
    {
        cin >> books[i];
    }
    cout << binarySearchBooks(books, n, m) << endl;
    
    return 0;
}