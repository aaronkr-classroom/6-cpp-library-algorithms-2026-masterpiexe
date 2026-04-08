#include<iostream>
#include<string>
#include<vector>
#include"split_str.h"
#include<cctype>//자료형의 함수 여러 개 있음
//isspace(a) a가 공백이면 참 값을 반환

using namespace std;
//인수 공백시 false
bool not_space(char c)
{
	return !isspace(c);
}
//인수가 공백시 true
bool space(char c)
{
	return isspace(c);
}

vector<string> split(const string& s)
{
	vector<string> ret;
	typedef string::size_type str_sz;
	str_sz i = 0;

	while (i != s.size())
	{
		while (i != s.size() && isspace(s[i]))
		{
			i++;
		}
		str_sz j = i;

		while (j != s.size() && !isspace(s[j]))
		{
			j++;
		}
		if (i != j)
		{
			ret.push_back(s.substr(i, i - 1));
			i = j;
		}
	}
	return ret;
}
vector<string> lib_split(const string& s)
{
	vector<string> ret;
	typedef string::const_iterator iter;
	iter i = s.begin();//첫 요소 가리키는 포인터

	while (i != s.end())
	{
		i = find_if(i, s.end(), not_space);
		//다음 단어 끝 찾음
		iter j = find_if(i,s.end(),space);

		
		if (i != s.end())
		{
			ret.push_back(string(i, j));
			
		}
		i = j;
	}
	return ret;
}

int main()
{
	string s;

	while (getline(cin, s))
	{
		vector<string> v1 = split(s);
		vector<string> v2 = lib_split(s);

		cout << "original split(): " << endl;
		for (vector<string>::size_type i = 0;
			i != v1.size(); i++)
		{
			cout << v1[i] << endl;
		}
		cout << "new lib_split(): " << endl;
		for (vector<string>::size_type i = 0;
			i != v2.size(); i++)
		{
			cout << v2[i] << endl;
		}

	}
}
