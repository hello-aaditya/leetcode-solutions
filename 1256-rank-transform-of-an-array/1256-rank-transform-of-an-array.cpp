class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {

        int n = arr.size();
        //edge case: when the size of the given array is 1
        if(n==0) return {};

        //creating a pair-vector and store the element of the each index & index no.
        vector<pair<int, int>> pairVec;
        for(int i=0; i<n; i++)
        {
            pairVec.push_back({arr[i], i});
        }

        //sort the pair-vector based on it's first element
        sort(pairVec.begin(), pairVec.end());

        int rank = 1; //initialize the rank variable with '1'

        // creating a vector 'rankVec' that posses the rank of each element in the vector 'arr'
        vector<int> rankVec(n);

        rankVec[pairVec[0].second] = rank; // assign the rank to he first element of the 'arr'

        for(int i=1; i<n; i++)
        {
            //edge-case
            //check the first of pairVec should not equal to it's previous first
            if(pairVec[i].first != pairVec[i-1].first)
            {
                rank++;
            }
            rankVec[pairVec[i].second] = rank;
        }

        return rankVec;
    }
};