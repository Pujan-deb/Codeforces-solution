// Problem
/*
Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,target;
    cin >> n;
    int arr[n],res =0;
    for(int i=1; i<=n; i++)
    {
        cin >> arr[i];
    }
    cin >> target;
    for(int i=1; i<=n; i++)
    {
        for(int j=i+1; j<=n; j++)
        {
            res = arr[i] + arr[j];
            if(res == target)
            {
                cout << "[" << i-1 << "," << j-1 << "]";
            }
        }
    }
}



