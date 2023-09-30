struct node{
    node *links[26];
    bool flag=false;
    bool containsKey(char ch){
        return (links[ch-'a']!=NULL);
    }
    void put(char ch,node *p){
        links[ch-'a']=p;
    }
    node* get(char ch){
        return links[ch-'a'];
    }
    void setEnd(){
        flag=true;
    }
    bool isEnd(){
        return flag;
    }
};
class Trie {
    node *root;
public:
    Trie() {
        root=new node();
    }
    
    void insert(string word) {
        node *p=root;
        for(int i=0;i<word.length();i++){
            if(!p->containsKey(word[i])){
                p->put(word[i],new node());
            }
            p=p->get(word[i]);
        }
        p->setEnd();
    }
    
    bool search(string word) {
        node *p=root;
        for(int i=0;i<word.length();i++){
            if(!p->containsKey(word[i])){
                return false;
            }
            p=p->get(word[i]);
        }
        return p->isEnd();
    }
    
    bool startsWith(string prefix) {
        node *p=root;
        for(int i=0;i<prefix.length();i++){
            if(!p->containsKey(prefix[i])){
                return false;
            }
            p=p->get(prefix[i]);
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
