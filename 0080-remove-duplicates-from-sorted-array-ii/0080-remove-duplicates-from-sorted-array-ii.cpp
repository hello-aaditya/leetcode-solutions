class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int i = 0;
        int j = 1;
        int n = arr.size();
        int flag = 0;
        while(j<n)
        {
            if(arr[j] == arr[j-1] && flag == 0)
            {
                flag = 1;
                arr[i+1] = arr[j];
                i = i+1;
                j++;
            }
            else if(arr[j] == arr[j-1] && flag == 1)
            {
                j++;
            }
            else if(arr[j] != arr[j-1] && flag == 1)
            {
                arr[i+1] = arr[j];
                i++;
                flag = 0;
                j++;
            }
            else
            {
                arr[i+1] = arr[j];
                i++;
                j++;
            }
        }
        return i+1;
    }
};