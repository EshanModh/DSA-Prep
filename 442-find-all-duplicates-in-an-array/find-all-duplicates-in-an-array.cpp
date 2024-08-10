class Solution {
public:
    vector<int> findDuplicates(vector<int> &nums)
{
    set<int> uniqueVals;
    vector<int> duplicates;

    for (int i = 0; i < nums.size(); i++)
    {
        if (!uniqueVals.insert(nums[i]).second) duplicates.push_back(nums[i]);
    }

    return duplicates;
}    
};