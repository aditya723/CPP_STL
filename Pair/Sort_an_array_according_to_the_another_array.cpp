/*
Input : 2 1 5 4 9 3 6 7 10 8
        A B C D E F G H I J

Output : 1 2 3 4 5 6 7 8 9 10 
         B A F D C G H J E I 
Here we are sorting second array
(a character array) according to 
the first array (an integer array).
*/

// Sort an array according to  
// other using pair in STL. 
#include <bits/stdc++.h> 
using namespace std; 
  
// Function to sort character array b[] 
// according to the order defined by a[] 
void pairsort(int a[], char b[], int n) 
{ 
    pair<int, char> pairt[n];
    
    // vector <pair<int, char>>v; // vector can also be used
  
    // Storing the respective array 
    // elements in pairs. 
    for (int i = 0; i < n; i++)  
    { 
        pairt[i].first = a[i]; 
        pairt[i].second = b[i]; 
    } 
  
    // Sorting the pair array. 
    sort(pairt, pairt + n); 
      
    // Modifying original arrays 
    for (int i = 0; i < n; i++)  
    { 
        a[i] = pairt[i].first; 
        b[i] = pairt[i].second; 
    } 
} 
  
// Driver function 
int main() 
{ 
    int a[] = {2, 1, 5, 4, 9, 3, 6, 7, 10, 8}; 
    char b[] = {'A', 'B', 'C', 'D', 'E', 'F',  
                         'G', 'H', 'I', 'J'}; 
                           
    int n = sizeof(a) / sizeof(a[0]); 
      
    // Function calling 
    pairsort(a, b, n); 
  
    for (int i = 0; i < n; i++) 
        cout << a[i] << " "; 
    cout << endl; 
  
    for (int i = 0; i < n; i++) 
        cout << b[i] << " "; 
          
    return 0; 
} 
