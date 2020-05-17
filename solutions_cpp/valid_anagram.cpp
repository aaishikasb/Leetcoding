class Solution
{
public:
    bool isAnagram(string s, string t)
    {

        int mp[26] = {0};
        if (s.size() != t.size())
        {
            return false;
        }
        for (int i = 0; i < s.size(); ++i)
        {
            mp[s[i] - 'a'] += 1;
            mp[t[i] - 'a'] -= 1;
        }
        for (int i = 0; i < 26; i++)
        {
            if (mp[i] != 0)
            {
                return false;
            }
        }
        return true;
    }
};