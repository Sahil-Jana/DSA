#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   int zero=0,one=0,two=0; 
    for (int i=0; i<n;i++){                             // counting frequency
        if(arr[i] == 0)
            zero++;
        if(arr[i] == 1)
            one++;
        if(arr[i] == 2)
            two++;
    }
    for (int i=0; i<zero; i++)                             // modifying array as per freq
        arr[i] = 0;
    for (int i=zero; i<zero+one; i++)
        arr[i] = 1;
    for (int i=zero+one; i<zero+one+two; i++)
        arr[i] = 2;
}