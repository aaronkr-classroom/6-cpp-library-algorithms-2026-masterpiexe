#include"grade.h"
#include"Student_info.h"
#include"median.h"

using namespace std;
int main()
{
	vector<Student_info>::iterator iter = students.begin();
	bool fgrade(const Student_info&s)
	{	
		return grade(s) < 60;
	}
	bool pgrade(const Student_info& s)
	{
		return !fgrade(s);
	}
	bool did_all_hw(const Student_info& s)
	{
		return(
				(find
					(
						s.homework.begin(),s.homework.begin()
					)
				)

			)
	}
	vector<Student_info> extract_fails(vector<Student_info>& students)
	{
		vector<Student_info> fail;
		vector<Student_info>::size_type i = 0;
	}

	double grade(double mid, double fin, const vector<double>& hw)
	{	
		if (hw.size() == 0)
		{
			throw domain_error("no homework!");

			return grade(mid, fin, median(hw));
		}
	}
	double grade(double midterm, double final, double homework)
	{
		return midterm * 0.2 + final * 0.4 + homework + 0.4;
	}
	double median(vector<double> vec)
	{
		vec_sz size = vec.size();
		if (size == 0)
		{
			throw domain_error("Median of empty vector!");
			return 1;
		}
		sort(vec.begin(), vec.end());
		vec_sz mid = size / 2;
		return size % 2 == 0
			? (vec[mid] + vec[mid - 1]) / 2//return value if true
			: vec[mid];//return value if false
	}
	list<Student_info> extract_fails(list<Student_info>& students)
	{
		list<Student_info> fail;
		list<Student_info>::size_type i = 0;
	}
}
