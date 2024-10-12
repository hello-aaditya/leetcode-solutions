class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {

        //sorting based on starting point
        sort(begin(intervals), end(intervals));

        //define a min_heap to store ending points of each groups
        priority_queue<int, vector<int>, greater<int>> pq;

        //iterate in the 'intervals' vector to fetch starting & ending of each intervals
        for(vector<int>& interval : intervals)
        {
            int startingPonit = interval[0];
            int endingPoint = interval[1];

            if(!pq.empty() && startingPonit > pq.top())
            {
                pq.pop();
            }
            pq.push(endingPoint);
        }

        //returning the size of heap which gives total no. of groups
        return pq.size();

        /*
        Time Complexity:
        sorting- O(nlogn), iterating- O(n), pop & psh in pq- logn

        Space Complexity:
        Priority_queue- o(n)
        */
    }
};