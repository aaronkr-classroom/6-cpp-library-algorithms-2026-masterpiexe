
#include<algorithm>
#include<cctype>
#include<iostream>
#include<string>
#include<vector>

using namespace std;
typedef string::
bool not_url_char(char c)
{
	static const string url_ch = "~;/?:@=&-_.+!*'(),";
	return !(
		isalnum(c) ||
		find(url_ch.begin(), url_ch.end(), c) != url_ch.end()
		);
}
vector<string> find_urls(const string& s) {}
int main()
{
	
	string::const_iterator url_end(){}
	string::const_iterator url_beg(){}
	vector<string> find_urls(const string& s) {}
	
}
