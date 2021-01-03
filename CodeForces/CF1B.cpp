// #include<bits/stdc++.h>
// using namespace std;

// bool type(string s)
// {
// 	if(s[0] == 'R') return true;
// 	if(!(s[1] >= '0' && s[1] <='9')) return false;

// 	int n = s.length();
// 	for (int i = 2; i < n-1; i++)
// 	{
// 		if(s[i] == 'C')
// 			return true;
// 	}
// 	return false;
// }

// int main(int argc, char const *argv[])
// {
// 	int n;
// 	string s;
// 	scanf("%d", &n);

// 	while(n--) {
// 		cin >> s;

// 		if(type(s)) {
// 			string row="", col;
// 			int pos = 1;

// 			while(s[pos] != 'C') {
// 				row += s[pos];
// 				pos++;
// 			}
// 			//cout << pos << "\n";
// 			pos++;

// 			col = s.substr(pos);
// 			int a = stoi(col);
// 			col = "";

// 			while(a > 0) {
// 				int r = a%26;
// 				a /= 26;

// 				if(r != 0) 
// 					col = (char)('A' + r - 1) + col;
// 				else {
// 					col = 'Z' + col;
// 					a--;
// 				}
// 			}

// 			cout << col << row << endl;
// 		}

// 		else {
// 			int i=0,x=0;
// 			string col = "";

// 			while(s[i] >= 'A' && s[i] <='Z') {
// 				col += s[i];
// 				i++;
// 			}
// 			//cout << i << "\n";

// 			string row = s.substr(i);

// 			for(char c : col) {
// 				x*=26;
// 				x+=(c-'A'+1);
// 			}
			
// 			cout << "R" << row << "C" << x << endl;
// 		}
// 	}

// 	return 0;
// }

    #include <bits/stdc++.h> 
    using namespace std; 
     
    bool type(string s){
        if(s[0] != 'R') return false;
        if(!(s[1] >= '0' && s[1] <= '9')) return false;
        int n = s.length();
        for(int i = 2; i < n-1; i++){
            if(s[i] == 'C') return true;
        }
        return false;
    }
     
    // Driver code 
    int main()
    { 
        int t = 1;
        cin >> t;
        while(t--){
            string s;
            cin >> s;
            bool isRC = type(s);
            if(isRC){
                string col, row = "";
                int pos = 1;
                while(s[pos] != 'C'){
                    row += s[pos];
                    pos++;
                }
                pos++;
                col = s.substr(pos);
                int c = stoi(col);
                col = "";
                while(c > 0){
                    int rem = c%26;
                    c /= 26;
                    if(rem != 0) col = (char)('A'+rem-1)+col;
                    else{
                        col = 'Z'+col;
                        c--;
                    }
                }
                cout << col << row << endl;
            }
            else{
                string row, col = "";
                int pos = 0;
                while(s[pos] >= 'A' && s[pos] <= 'Z'){
                    col += s[pos];
                    pos++;
                }
                row = s.substr(pos);
                int c = 0;
                int n = col.length();
                for(char x : col){
                    c *= 26;
                    c += (x-'A'+1);
                }
                cout << "R" << row << "C" << c << endl;
            }
        } 
        return 0; 
    } 