class Solution
{
public:
    int minSetSize(vector<int> &arr)
    {
        int n = arr.size();
        unordered_map<int, int> freq;
        for (auto &num : arr)
        {
            ++freq[num];
        }
        int m = freq.size();
        vector<int> v;
        v.reserve(m);
        for (auto &it : freq)
        {
            v.push_back(it.second);
        }
        sort(v.begin(), v.end(), greater<>());
        int ans = 0, length = n;
        for (auto &f : v)
        {
            if (length <= n / 2)
            {
                return ans;
            }
            length -= f;
            ++ans;
        }
        return ans;
    }
};