class Solution {
public:
    int maximumSwap(int num) {
        string str = to_string(num); //convert num to string
        int n = str.length();

        //vector for storing the index of the max digit to the right of each pos
        vector<int> maxRight(n);

        maxRight[n-1] = n-1; //initialization the right position

        //iterate from right to left to fill maxRight
        for(int i=n-2; i>=0; i--)
        {
            int rightMaxElemenet = str[i];
            int rightMaxIdex = str[maxRight[i+1]];
            if(rightMaxElemenet > rightMaxIdex) //current element is larger
            {
                maxRight[i] = i;
            }
            else
            {
                maxRight[i] = maxRight[i+1]; //Max element remains the same
            }
        }

        //find the first position where we can swap to get a larger number
        for(int i=0; i<n; i++)
        {
            int rightMaxElement = str[i];
            int rightMaxPos = str[maxRight[i]];
            if(rightMaxElement != rightMaxPos)
            {
                swap(str[i], str[maxRight[i]]);
                break;
            }
        }
        num = stoi(str); //string to int
        return num;
    }
};