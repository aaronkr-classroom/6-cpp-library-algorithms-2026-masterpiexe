#include<algorithm>
#include<fstream>
#include<ios>
#include<iomanip>
#include<iostream>
#include<stdexcept>
#include<string>
#include<vector>

#include"grade.h"
#include"median.h"
#include"Student_info.h"

using namespace std;
int main(void)
{
	ifstream student_file("grades.txt");

	Student_info std;
	string::size_type maxlen = 0;

	vector<Student_info> did, didnt;
	while (read(student_file, std))
	{
		maxlen = max(maxlen, std.name.size());
		if (dis_all_hw(std))
			did.push_back(std);
		else
			didnt.push_back(std);

	}
	if (did.empty())
	{
		cout << "homework undone" << endl;
		return 1;
	}
	if (didnt.empty())
	{
		cout << "homework finshed" << endl;
	}
	return 0;
}
