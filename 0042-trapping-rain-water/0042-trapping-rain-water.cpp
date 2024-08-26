class Solution {
public:
    int trap(vector<int>& arr) {
        int n = arr.size();

        vector<int> left_max(n);
        vector<int> right_max(n);
        vector<int> min_of_left_and_right(n);
        vector<int> min_minus_arr_of_i(n);

        left_max[0] = arr[0];
        for(int i=1; i<n; i++)
        {
            left_max[i] = max(left_max[i-1], arr[i]);
        }
        
        right_max[n-1] = arr[n-1];
        for(int i=n-2; i>=0; i--)
        {
            right_max[i] = max(right_max[i+1], arr[i]);
        }
        
        for(int i=0; i<n; i++)
        {
            min_of_left_and_right[i] = min(left_max[i], right_max[i]);
        }
        
        
        
        for(int i=0; i<n; i++)
        {
            min_minus_arr_of_i[i] = min_of_left_and_right[i] - arr[i];
        }
        
        
        int trapped_water = 0;
        for(int i=0; i<n; i++)
        {
            trapped_water += min_minus_arr_of_i[i];
        }
        return trapped_water;
    }
    
};