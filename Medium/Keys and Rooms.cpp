class Solution {
private:
    vector<bool> visit;
    
public:
    void enter(int room, vector<vector<int>> &rooms) {
        for (auto &key : rooms[room])
            if (!visit[key]) {
                visit[key] = true;
                enter(key, rooms);
            }
    }
    
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        visit = vector(rooms.size(), false);
        enter(0, rooms);
        for (int i = 1; i != visit.size(); ++i)
            if (!visit[i])
                return false;
        return true;
    }
};
