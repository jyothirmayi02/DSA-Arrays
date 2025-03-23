class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> arr;
        set<int> s(nums.begin(),nums.end());
        for (int i=1;i<=nums.size();i++)
        {
            if (s.find(i)==s.end())
               arr.push_back(i);
        }
        return arr;
    }
};
