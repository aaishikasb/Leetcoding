class TrieNode
{
public:
    // Initialize your data structure here.
    TrieNode()
    {
        value = 0;
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
    }
    int value;
    TrieNode *children[26];
};

class Trie
{
public:
    Trie()
    {
        root = new TrieNode();
        count = 0;
    }

    // Inserts a word into the trie.
    void insert(string s)
    {
        TrieNode *p = root;
        int len = s.size();
        for (int i = 0; i < len; i++)
        {
            int idx = s[i] - 'a';
            if (!p->children[idx])
            {
                p->children[idx] = new TrieNode();
            }
            p = p->children[idx];
        }
        count++;
        p->value = count;
    }

    // Returns if the word is in the trie.
    bool search(string key)
    {
        TrieNode *p = root;
        int len = key.size();
        for (int i = 0; i < len; i++)
        {
            int idx = key[i] - 'a';
            if (p->children[idx])
            {
                p = p->children[idx];
            }
            else
            {
                return false;
            }
        }
        if (p->value != 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    // Returns if there is any word in the trie
    // that starts with the given prefix.
    bool startsWith(string prefix)
    {
        TrieNode *p = root;
        int len = prefix.size();
        for (int i = 0; i < len; i++)
        {
            int idx = prefix[i] - 'a';
            if (p->children[idx])
            {
                p = p->children[idx];
            }
            else
            {
                return false;
            }
        }
        return true;
    }

private:
    TrieNode *root;
    int count;
};