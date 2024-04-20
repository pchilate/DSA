#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> nmap;
        int n = nums.size();

        for (int i = 0; i < n; i++)
        {
            nmap[nums[i]] = i;
        }

        for (int i = 0; i < n; i++)
        {
            int comp = target - nums[i];
            if (nmap.count(comp) && nmap[comp] != i)
            {
                return {i, nmap[comp]};
            }
        }
        return {};
    }
};

int main()
{
    vector<int> num(4, 0);
    int target;
    for (int i = 0; i < num.size(); i++)
    {
        cin >> num[i];
    }
    cin >> target;
    Solution ans;
    vector<int> result = ans.twoSum(num, target);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " "; // Output each element of the result vector
    }
    return 0;
}
