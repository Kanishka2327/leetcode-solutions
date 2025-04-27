#include <vector>
#include <unordered_map>
#include <set>
using namespace std;

class Solution {
public:
    int countCoveredBuildings(int n, vector<vector<int>>& buildings) {
        unordered_map<int, set<int>> rowBuildings, colBuildings;
        
        // Preprocess: store y-coordinates for each row and x-coordinates for each column
        for (auto& b : buildings) {
            int x = b[0], y = b[1];
            rowBuildings[x].insert(y);
            colBuildings[y].insert(x);
        }
        
        int covered = 0;
        
        for (auto& b : buildings) {
            int x = b[0], y = b[1];
            
            auto& row = rowBuildings[x];
            auto& col = colBuildings[y];
            
            // Find left: any y' < y
            auto itLeft = row.lower_bound(y);
            bool hasLeft = (itLeft != row.begin());
            
            // Find right: any y' > y
            auto itRight = row.upper_bound(y);
            bool hasRight = (itRight != row.end());
            
            // Find up: any x' < x
            auto itUp = col.lower_bound(x);
            bool hasUp = (itUp != col.begin());
            
            // Find down: any x' > x
            auto itDown = col.upper_bound(x);
            bool hasDown = (itDown != col.end());
            
            if (hasLeft && hasRight && hasUp && hasDown) {
                covered++;
            }
        }
        
        return covered;
    }
};