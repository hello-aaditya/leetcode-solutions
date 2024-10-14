class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        int n = nums.size();
        //we are using a Max-Heap, bcoz for every iteration we will need of the max value from the vector
        //create a Max-Heap to store all elements of 'nums'
        priority_queue<int> maxHeap;
        
        // push all elem into the Max-heap
        for(int i=0; i<n; i++)
        {
            maxHeap.push(nums[i]);
        }

        long long finalScore = 0; //to store the final score
        // Loop 'k' times to select the top elem, update it and push it back
        while(k--)
        {
            int temp = maxHeap.top(); //get the max elem fro the heap
            maxHeap.pop();           //remove the top elem
            finalScore += temp;      //add the top elem to the finalScore
            temp = ceil(temp/3.0);   //update the elem by dividing it by 3 and ceil it
            maxHeap.push(temp);      //push the updated elem back into the heap
        }
        return finalScore;
    }
};