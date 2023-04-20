/*Given an unsorted array A of size N that contains only positive integers,
 find a continuous sub-array that adds to a given number S and return the 
 left and right index(1-based indexing) of that subarray.*/

//  #include<iostream>
//  using namespace std;
 
//  int main(){
//     int n, j = 0, s;
//     long long sum = 0;
//     cout<<"Enter the no. of digit"<<endl;
//     cin>>n;

//     int arr[n];
//     cout<<"Enter the "<<n <<" number of elements"<<endl;
//     for (int k = 0; k < n; k++)
//     {
//         cin>>arr[k];
//     }

//     cout<<"Enter the number to find its sumarray"<<endl;
//     cin>>s;

//     if (s == 0)
//     {
//         return{-1};
//     }
//     for (int  i = 0; i < n; i++)
//     {
//         sum +=arr[i];
//         while (sum>s)
//         {
//             sum -=arr[j];
//             j++;
//         }
//         if (sum == s)
//         {
//             return {j+1};
//             return {i +1};
//             // cout<<arr[j+1]<<endl;
//             // cout<<arr[i+1]<<endl;
//         }
        
        
//     }
//     return {-1};
    
    
//     return 0;
//  }

#include <iostream>
using namespace std;
pair<int, int> subarray_sum(int arr[], int n, int target) {
    int left = 0, right = 0;
    int curr_sum = 0;
    
    while (right < n) {
        curr_sum += arr[right];
        while (curr_sum > target) {
            curr_sum -= arr[left];
            left++;
        }
        if (curr_sum == target) {
            return make_pair(left+1, right+1);
        }
        right++;
    }
    return make_pair(-1, -1); // subarray not found
}

int main() {
    int arr[] = {1, 4, 20, 3, 10, 5};
    int target = 33;
    int n = sizeof(arr)/sizeof(arr[0]);
    
    pair<int, int> result = subarray_sum(arr, n, target);
    if (result.first == -1) {
        cout << "Subarray not found.\n";
    } else {
        cout << "Subarray found from index " << result.first << " to " << result.second << endl;
    }
    return 0;
}
