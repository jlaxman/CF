class node {
public:
  char data;
  unordered_map<char, node*> children;
  bool isterminal;
  node(char d) {
    data = d;
    isterminal = false;
  }
};
class trie {
public:
  node* root;
  unordered_map<char, char> mpp;
  trie() {
    root = new node('\0');
  }
  void insert(string word) {
    node* temp = root;
    for (auto ch : word) {
      if (temp->children.count(ch) == 0)
        temp->children[ch] = new node(ch);
      temp = temp->children[ch];
    }
    temp->isterminal = true;
  }
  bool search(int i, string& sub, node* temp) {
    if (i == sub.size()) return true;
    if (temp == NULL) return false;
    auto f = mpp.find(sub[i]);

    int op1 = 0;
    int op2 = 0;

    op1 = search(i + 1, sub, temp->children[sub[i]]);

    if (f != mpp.end()) {
      op2 = search(i + 1, sub, temp->children[mpp[sub[i]]]);
    }

    return (op1 || op2);
  }
};
