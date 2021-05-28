class Solution {
public:
    int maxProduct(vector<string>& words) {
     int n=words.size();
        if(!n) return 0;
        vector<int> word_int(n,0);
        vector<int> word_len(n,0);
        string w;
        int w_int;
        for(int i=0;i<n;i++){
            w= words[i];
            int _len = w.length();
            w_int = 0;
            for(int j=0;j<_len;j++)
                w_int|=1<<(w[j]-'a');
            word_int[i] = w_int;
            word_len[i]=_len;
            
        }
        
        int max_product = 0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if((word_int[i] & word_int[j])==0){
                    max_product = max(max_product,word_len[i]*word_len[j]);
                 }

             }
        }
        
    return max_product;
    }
    
    
};
