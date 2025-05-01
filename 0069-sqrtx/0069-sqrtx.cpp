class Solution {
public:
    int mySqrt(int x) {
        int start = 0, end = x;
        int squareRoot = -1;

        while(start<=end)
        {
            long long int mid = start + (end-start)/2;
            if( (mid*mid) == x)
            {
                squareRoot = mid;
                return squareRoot;
            }
            else if( (mid*mid) > x )
            {
                end = mid-1;
            }
            else
            {
                squareRoot = mid;
                start = mid+1;
            }
        }
        return squareRoot;
    }
};