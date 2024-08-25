class Solution {
public:

    void reverse(vector<int>& v, int start, int end)
    {
        while(start <= end)
        {
            swap(v[start], v[end]);
            start++; end--;
        }
    }

    void rotate(vector<int>& v, int k) {
        int size = v.size();
        if(k >= size)
        {
            k = k % size;
        }

        reverse(v, 0, size-k-1);
        reverse(v, size-k, size-1);
        reverse(v, 0, size-1);
        
    }
};