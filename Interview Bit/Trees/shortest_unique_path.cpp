class TrieNode{
public:
int pref;
TrieNode* arr[26]; 
};
TrieNode* get_node(){
TrieNode* new_node = new TrieNode();
new_node->pref = 1;
for(int i = 0; i < 26; i++){
    new_node->arr[i] = NULL;
}
return new_node;
}
void insert(TrieNode* root,string to_insert){
TrieNode* crawl = root;
for(int i = 0; i < to_insert.length(); i++){
    int index = to_insert[i]-'a';
    if(!crawl->arr[index]){
        crawl->arr[index] = get_node();
    }
    else crawl->arr[index]->pref +=1 ;
    crawl = crawl->arr[index];
}
}
string sup(TrieNode* root,string s){
  TrieNode* crawl = root;
string res = "";
for(int i = 0; i < s.length(); i++){
 int index = s[i]-'a';
 res += index + 'a';
 if(crawl->arr[index]->pref == 1)
     return res;
crawl = crawl->arr[index]; 
  }
 return res;

}
vector<string> Solution::prefix(vector<string> &A) {
TrieNode* root = get_node();
for(int i = 0; i < A.size(); i++){
insert(root,A[i]);
}
vector<string> res;
for(int i = 0; i < A.size(); i++){
res.push_back(sup(root,A[i]));
}
return res;
}
