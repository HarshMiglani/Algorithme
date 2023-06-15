#include <bits/stdc++.h> 
void insertionSort(int n, vector<int> &arr){
    // Write your code here.

    for(int i=1; i<n; i++){
        int temp = arr[i];

        for(int j = i-1; j>-1; j--){
            if(temp < arr[j])
            {
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
