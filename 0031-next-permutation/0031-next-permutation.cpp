class Solution {
public:
    void nextPermutation(vector<int>& arr) {
        int size = arr.size();
        int targetedIndex = -1;

        for(int i=size-1; i>0; i--)
        {
            if(arr[i-1] < arr[i])
            {
                targetedIndex = i-1;
                break;
            }
        }

        int biggerThanTargeted = -1;
        if(targetedIndex != -1)
        {
            for(int i=size-1; i>targetedIndex; i--)
            {
                if(arr[i] > arr[targetedIndex])
                {
                    biggerThanTargeted = i;
                    break;
                }
            }
            swap(arr[targetedIndex], arr[biggerThanTargeted]);
        }
        
        

        reverse(arr.begin()+targetedIndex+1, arr.end());

    }
};