class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int size = arr.size();
        int start = 0;
        int end = size-1;
        int peakIndex = -1;

        while(start<=end)
        {
            int mid = start + (end-start)/2;
            if(arr[mid] < arr[mid+1])
            {
                // go right
                start = mid+1;
            }
            else
            {
                // we have reached here means, we are in line-2
                // means, mid is on the line-2 so
                // either peak is on the mid (we stand on the peak)
                // or paek is on our left side
                peakIndex = mid; // store n compute
                end = mid-1;
            }
        }
        return peakIndex;
    }
};