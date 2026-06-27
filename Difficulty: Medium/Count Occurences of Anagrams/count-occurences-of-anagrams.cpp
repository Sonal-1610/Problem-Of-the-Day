class Solution {
	public:
	int search(string &pat, string &txt) {
		// code here
		int k = pat.length();
		unordered_map<char, int> mp;
		for (int i = 0; i<pat.length(); i++) {
			mp[pat[i]]++;
		}
		int i = 0;
		int j = 0, count = 0;
		while (j<txt.size()) {
			if (mp.find(txt[j]) != mp.end()) {
				mp[txt[j]]--;
			}
			
			if (j - i + 1 == k) {
				bool flag = 1;
				for (auto it: mp) {
					if (it.second>0) {
						flag = 0;
					}
				}
				if (flag == 1)
					count++;
				
				if (mp.find(txt[i]) != mp.end()) {
					mp[txt[i]]++;
					
				}
				i++;
			}
			j++;
		}
		return count;
	}
};
