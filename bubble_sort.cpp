#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
    for(int i=1; i<n; i++){
        int swapp = 0;

        for( int j=0; j<n-i; j++){
          if (arr[j] > arr[j + 1]) {
            swap(arr[j], arr[j + 1]);
            swapp = 1;
          }
        }
        if(swapp == 0){
            break;
        }
    }
}

