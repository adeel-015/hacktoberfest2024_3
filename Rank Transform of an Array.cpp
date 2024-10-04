// LeetCode solution for question # 1331 -> Rank transformation of an Array. (Uses only 6 LoC)

class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> temp(arr);
        sort(temp.begin(), temp.end());
        unordered_map<int, int> mpp;
        for (int &i : temp) mpp.emplace(i, mpp.size() + 1);
        for (int i=0;i<arr.size();i++) arr[i] = mpp[arr[i]];
        return arr;
    }
};

const static int fast = []{
    ios::sync_with_stdio(0);
    cin.tie(0);
    return 0;
}();
