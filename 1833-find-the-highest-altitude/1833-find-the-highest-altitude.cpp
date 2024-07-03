class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        vector<int> altitudes(n+1, 0);
        int highest = altitudes[0];

        for(int i=1; i<n+1; i++)
        {
            altitudes[i] = altitudes[i-1] + gain[i-1];
            highest = max(highest, altitudes[i]);
        }

        return highest;
    }
};