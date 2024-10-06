class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int i = m+n-1; //pointer-1: which points at last index of merged vector;
        int p1 = m-1; //pointer-2: which points at last index of nums1 initially;
        int p2 = n-1; //pointer-3: which points at last index of nums2 initially;

        //starting from the end and merging accordingly
        //continue untill all elements from nums2 are merged
        while(p2>=0)
        {
            if(p1 >= 0 && nums1[p1] > nums2[p2])
            {
                nums1[i--] = nums1[p1--];
            }
            else
            {
                nums1[i--] = nums2[p2--];
            }
        }
        
    }
};