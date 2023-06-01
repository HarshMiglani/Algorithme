#include <bits/stdc++.h> 
using namespace std;

bool isPossible(int m, int n, vector<int> time, long long mid){

	long long studentcount = 1;
	long long sum = 0;
	for(int i=0; i<m; i++){
		if(sum+time[i] <= mid){
			sum+=time[i];
		}
		else{
		 	studentcount++;
			if(studentcount > n || time[i] > mid){
				return false;
			} 
				sum = time[i];
			}
				if(studentcount > n){
					return false;
				}
	}
	return true;
}

long long ayushGivesNinjatest(int n, int m, vector<int> time) 
   {
	long long s = 0;
    long long sum = 0;
    
    for(int i = 0; i<m; i++) {
        sum += time[i];
    }
    long long e = sum;
    long long ans = -1;
    long long mid = s + (e-s)/2;
    
    while(s<=e)
    {
        if(isPossible(m,n,time,mid)) {
            //cout<<" Mid returned TRUE" << endl;
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
