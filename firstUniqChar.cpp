
#include <iostream>


class Solution {
	public:
		int firstUniqChar(string s) {
			int len = s.length();
			int i;
			map<char, int> letter;
			for(i =0 ; i < len; i++){
				letter[s[i]]++;
			}
			for(int i =0; i < len; i++){
				if(letter[s[i]] ==1)
					return i;
			}
			return -1;
		}
}
