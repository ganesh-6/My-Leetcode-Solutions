class Solution {
public:
    bool isPalindrome(int x) {
		    string s= to_string(x);
		    string y=s;
		    reverse(y.begin(),y.end());
		    if(y==s)
		    {
		        return 1;
		    }
		    else{
		        return 0;
		    }
    }
};