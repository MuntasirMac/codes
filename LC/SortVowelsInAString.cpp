class Solution {
public:
    bool is_vowel(char c) {
        return c=='A' || c=='E' || c== 'I' || c=='O' || c=='U' || c=='a' || c=='e' || c== 'i' || c=='o' || c=='u';
    }
    string sortVowels(string s) {
        string vowels = "AEIOUaeiou";
        int len = s.size(), w=0, freq[10] = {};
        for(char c:s) {
            if(is_vowel(c)) {
                int pos = vowels.find(c);
                if(pos != -1) freq[pos]++;
            }
        }

        // for(int i=0; i<10; i++)
        //     printf("%d ",freq[i]);

        for(int i=0; i<len; i++) {
            if(is_vowel(s[i])) {
                while(!freq[w]) {
                    w++;
                }
                s[i] = vowels[w];
                freq[w]--;
            }
        }

        return s;
    }
};
