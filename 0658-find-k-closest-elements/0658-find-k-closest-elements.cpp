class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();

        //creating a Max-Heap to store two things (1) the abs difference b/w x & arr[i] (2) arr[i]
        priority_queue<pair<int, int>> maxHeap;
        for(int i=0; i<n; i++)
        {
            maxHeap.push( {abs(arr[i]-x), arr[i]} );
            //Keep only the k closest elements in the heap 
            if(maxHeap.size() > k)
            {
                maxHeap.pop();
            }
        }
        //extract the element from max heap and store it in the vector
        vector<int> closestElement;
        while(maxHeap.size() > 0)
        {
            closestElement.push_back(maxHeap.top().second);
            maxHeap.pop();
        }
        //sort the closest element in the ascending order
        sort(begin(closestElement), end(closestElement));
        return closestElement;
    }
};