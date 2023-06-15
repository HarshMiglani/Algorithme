bool isPossible(vector<int> &boards, int k, long long mid, int length){
    long long sum =0;
    int count =1;
    for(int i=0; i<length; i++){
        if(sum + boards[i] <= mid){
            sum += boards[i];
        }else{
            count++;
          if (boards[i] < mid) {
            sum = boards[i];
          }
            if(count > k || boards[i] > mid){
                return false;
            }
        }
    }
    return true;
}



int findLargestMinDistance(vector<int> &boards, int k)
{
    //    Write your code here.

    long long start = 0;
    int length = boards.size();
    long long sum = 0;
    
    for(int i = 0; i<length; i++){
        sum += boards[i];
    }
    long long end = sum;
    long long mid = start + (end-start)/2;
    long long ans;

    while(start <= end){
        if(isPossible(boards, k, mid, length)){
            ans = mid;
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}
