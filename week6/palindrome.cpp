#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

bool is_palidrome(const string& s)
{
	return equal(s.begin(), s.end(), s.rbegin());
}
int main()
{
	string s;
	while (cin >> s)
	{
		if (is_palidrome(s))
			cout << s << "은 회문이다." << endl;
		else
			cout << s << "회문아님." << endl;
	}
	
}
