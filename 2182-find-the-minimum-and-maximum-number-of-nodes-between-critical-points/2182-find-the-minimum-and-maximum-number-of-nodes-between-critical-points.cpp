/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* prev = head;
        ListNode* curr = head->next;
        int currPos=1;
        int firstCriticalPoint = 0;
        int prevCriticalPoint = 0;
        int minDist = INT_MAX;

        while(curr->next != NULL)
        {
            //case where a critical point (localMaxima or localMinima) is found
            if( (curr->val < prev->val && curr->val < curr->next->val) || (curr->val > prev->val && curr->val > curr->next->val) )
            {
                //this line will run only once when first critical point will found
                if(prevCriticalPoint == 0)
                {
                    firstCriticalPoint = currPos;
                    prevCriticalPoint = currPos;
                }

                //this line will be run after find the firstCriticalPoint
                else
                {
                    //for minDistance
                    minDist = min(minDist, currPos - prevCriticalPoint);
                    prevCriticalPoint = currPos;
                } 
            }
            currPos++;
            prev = curr;
            curr = curr->next;
        }

        //if minDist is not found
        if(minDist == INT_MAX)
        {
            return {-1, -1};
        }

        //if minDist is found
        return {minDist, prevCriticalPoint - firstCriticalPoint};
    }
};