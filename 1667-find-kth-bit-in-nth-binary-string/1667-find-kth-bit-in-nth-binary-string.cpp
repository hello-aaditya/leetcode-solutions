class Solution {
public:
    char findKthBit(int n, int k) {
        if(n == 1) {
            return '0';  //base case: S1 = "0"
        }

        int length = (1 << n) - 1;  //length of the string at level n (2^n - 1)
        int mid = length / 2 + 1;   //middle position is at length / 2 + 1

        if(k == mid) {
            return '1';  //the middle bit is always '1'
        } else if(k < mid) {
            return findKthBit(n - 1, k);  //search in the left half (same as the previous string)
        } else {
            //search in the right half (reversed and flipped)
            char ch = findKthBit(n - 1, length - k + 1);
            return (ch == '0') ? '1' : '0';  //flip the bit
        }
    }
};
