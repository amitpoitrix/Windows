#include <iostream>
#include <cstring>
 using namespace std;

 void rotate(char *a, int k){
     // step 1 find length of character array, we'll use strlen() from #include <cstring> 
     int i = strlen(a);  // i = 8 will give position of '\0' i.e., last character
     // shift each character array by kth length
     while(i >= 0){
         a[i+k] = a[i];
         i--;
     }
     // again take the length which will be bigger after shifting
     i = strlen(a);
     // take another pointer pointing at (i-k)th element that needs to be in LHS for rotation 
     int j = i-k;
     // take another pointer pointing to starting index to store the element
     int s = 0;
     while(j<i){
         a[s] = a[j];
         s++;
         j++;
     }
     // after rotation making last character as null to terminate
     a[i-k] = '\0';
 }

 int main(){
     char a[] = "learning";   // here bydefault last character is '\0' which is in 8th index position as indexing starts from 0 position
     int k = 2;
     rotate(a,k);
     cout << a << endl;

     return 0;
 }