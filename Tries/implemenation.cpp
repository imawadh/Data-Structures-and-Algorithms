#include <bits/stdc++.h>
using namespace std;

class TrieNode {
public:
    vector<TrieNode*> v;
    bool isEnd;
    TrieNode() {
        v.resize(26, nullptr);  // For lowercase English letters (a-z)
        isEnd = false;
    }
};

class Trie {
public:
    TrieNode* root;
    Trie() {
        root = new TrieNode();
    }
    
    void insert(string word) {
        TrieNode* temp = root;
        for (char c : word) {
            if (temp->v[c - 'a'] == nullptr) {
                temp->v[c - 'a'] = new TrieNode();
            }
            temp = temp->v[c - 'a'];
        }
        temp->isEnd = true;
    }
    
    bool search(string word) {
        TrieNode* temp = root;
        for (char c : word) {
            if (temp->v[c - 'a'] == nullptr) {
                return false;
            }
            temp = temp->v[c - 'a'];
        }
        return temp->isEnd;
    }
    
    bool startsWith(string prefix) {
        TrieNode* temp = root;
        for (char c : prefix) {
            if (temp->v[c - 'a'] == nullptr) {
                return false;
            }
            temp = temp->v[c - 'a'];
        }
        return true;
    }
};

int main() {
    Trie trie;

    // Insert words into the trie
    trie.insert("apple");
    trie.insert("app");
    trie.insert("banana");
    trie.insert("bat");

    // Test search function
    cout << "Search 'apple': " << (trie.search("apple") ? "Found" : "Not Found") << endl;      // Expected: Found
    cout << "Search 'app': " << (trie.search("app") ? "Found" : "Not Found") << endl;          // Expected: Found
    cout << "Search 'orange': " << (trie.search("orange") ? "Found" : "Not Found") << endl;    // Expected: Not Found
    cout << "Search 'banana': " << (trie.search("banana") ? "Found" : "Not Found") << endl;    // Expected: Found
    cout << "Search 'batman': " << (trie.search("batman") ? "Found" : "Not Found") << endl;   // Expected: Not Found

    // Test startsWith function
    cout << "Starts with 'app': " << (trie.startsWith("app") ? "Yes" : "No") << endl;         // Expected: Yes
    cout << "Starts with 'ban': " << (trie.startsWith("ban") ? "Yes" : "No") << endl;         // Expected: Yes
    cout << "Starts with 'bat': " << (trie.startsWith("bat") ? "Yes" : "No") << endl;         // Expected: Yes
    cout << "Starts with 'ora': " << (trie.startsWith("ora") ? "Yes" : "No") << endl;         // Expected: No
    cout << "Starts with 'ball': " << (trie.startsWith("ball") ? "Yes" : "No") << endl;       // Expected: No

    return 0;
}