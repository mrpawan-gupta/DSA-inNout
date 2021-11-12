class Solution
{
private:
    typedef array<uint8_t, 26> LetterCount;

    LetterCount getLetterCount(string &str)
    {
        LetterCount counts = {0};
        for (char ch : str)
        {
            ++counts[ch - 'a'];
        }
        return counts;
    }

public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        map<LetterCount, vector<string>> groups;
        for (auto &str : strs)
        {
            groups[getLetterCount(str)].push_back(std::move(str));
        }

        vector<vector<string>> result(groups.size());
        int i = 0;
        for (auto &group : groups)
        {
            result[i++] = std::move(group.second);
        }

        return result;
    }
};