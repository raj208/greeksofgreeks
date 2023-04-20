class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        int ptr1=0,ptr2=0;
        long long sum=arr[0];
        if(sum==s) return {1,1};
        if(s==0) return {-1};
        while(ptr2<n-1){
            if(sum+arr[ptr2+1] <= s){
                sum+=arr[ptr2+1];
                ptr2++;
            }
            else{
                sum-=arr[ptr1];
                ptr1++;
            }
            if(sum==s){
                return {ptr1+1,ptr2+1};
            }
        }
        return {-1};
    }
};


class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        vector<int>ans;
        int j=0;
        long long Sum=0;
        if(s==0){
            return{-1};
        }
        for(int i=0; i<n; i++){
           Sum+=arr[i];
            while(Sum>s){
                Sum-=arr[j];
                j++;
            }
            if(Sum==s){
                return {j+1,i+1};
        }
    }
        return {-1};
    }
};