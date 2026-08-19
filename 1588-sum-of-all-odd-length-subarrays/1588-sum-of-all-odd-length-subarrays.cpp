class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr)
{
    int n = arr.size();
    int ans = 0;

    for(int k = 1; k <= n; k++)
    {
        // Only odd length windows
        if(k % 2 != 0)
        {
            int l = 0;
            int r = k - 1;

            // Calculate first window sum
            int sum = 0;

            for(int i = l; i <= r; i++)
            {
                sum += arr[i];
            }

            // Add first window
            ans += sum;

            // Slide the window
            while(r < n - 1)
            {
                sum -= arr[l];
                l++;

                r++;
                sum += arr[r];

                ans += sum;
            }
        }
    }

    return ans;
}
};