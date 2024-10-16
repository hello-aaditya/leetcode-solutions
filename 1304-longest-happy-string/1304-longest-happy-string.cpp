class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        priority_queue<pair<int, char>> pq;

        if(a>0)
        {
            pq.push({a, 'a'});
        }
        if(b>0)
        {
            pq.push({b, 'b'});
        }
        if(c>0)
        {
            pq.push({c, 'c'});
        }

        string answer = "";
        
        while(!pq.empty())
        {
            char currChar = pq.top().second;
            int currCount = pq.top().first;
            pq.pop();

            if(answer.size()>=2 && answer[answer.size()-1] == currChar && answer[answer.size()-2] == currChar)
            {
                if(pq.empty())
                {
                    break;
                }

                char nextChar = pq.top().second;
                int nextCount = pq.top().first;
                pq.pop();

                answer.push_back(nextChar);
                nextCount--;
                if(nextCount > 0)
                {
                    pq.push({nextCount, nextChar});
                }
            }
            else
            {
                answer.push_back(currChar);
                currCount--;
            }
            if(currCount > 0)
            {
                pq.push({currCount, currChar});
            }
        }
        return answer;
    }
};