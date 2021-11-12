class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &a, int target)
    {
        vector<vector<int>> res;
        int n = a.size();
        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++)
        {
            if (i > 0 && a[i] == a[i - 1])
            {
                continue;
            }
            for (int j = i + 1; j < n; j++)
            {
                if (j > i + 1 && a[j] == a[j - 1])
                {
                    continue;
                }
                bool found = 0;
                int remains = target - a[i] - a[j];
                int low = j + 1;
                int high = n - 1;
                while (low < high)
                {
                    if (a[low] + a[high] == remains)
                    {
                        if (high < n - 1 && low > j + 1 && a[low - 1] == a[low] && a[high] == a[high + 1])
                        {
                            low++;
                            high--;
                            continue;
                        }
                        vector<int> temp = {a[i], a[j], a[low], a[high]};
                        res.push_back(temp);
                        high--;
                        low++;
                    }
                    else if (a[low] + a[high] < remains)
                    {
                        low++;
                    }
                    else
                    {
                        high--;
                    }
                }
            }
        }
        return res;
    }
};