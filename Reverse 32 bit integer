class Solution {
public:
    int reverse(int x) {
        int temp = x;
        int reverse_num=0;
        int modulo=0;
        
     while(x!=0)
     {
         modulo=x%10;
         x=x/10;
         reverse_num=reverse_num*10+modulo;
     }
        return reverse_num;
    }
};

int stringToInteger(string input) {
    return stoi(input);
}

int main() {
    string line;
    while (getline(cin, line)) {
        int x = stringToInteger(line);
        
        int ret = Solution().reverse(x);

        string out = to_string(ret);
        cout << out << endl;
    }
    return 0;
}
