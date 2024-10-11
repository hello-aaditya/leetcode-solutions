class Solution {
public:
    int smallestChair(vector<vector<int>>& times, int targetFriend) {
         int n = times.size();
        for (int i = 0; i < n; ++i) {
            times[i].push_back(i);
        }

        std::sort(times.begin(), times.end(), [](const std::vector<int>& a, const std::vector<int>& b) {
            return a[0] < b[0];
        });

        std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<>> occupied;

        std::priority_queue<int, std::vector<int>, std::greater<>> available;
        
        for (int i = 0; i < n; ++i) {
            available.push(i);
        }

        for (const auto& time : times) {
            int arrival = time[0];
            int departure = time[1];
            int friendIndex = time[2];

            while (!occupied.empty() && occupied.top().first <= arrival) {
                available.push(occupied.top().second);
                occupied.pop();
            }

            int chair = available.top();
            available.pop();

            if (friendIndex == targetFriend) {
                return chair;
            }

            occupied.push({departure, chair});
        }

        return -1; 
    }
};