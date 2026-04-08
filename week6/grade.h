#pragma once
#ifndef GUARD_grade_h
#define GUARD_grade_h

#include<vector>
#include"Student_info.h"
#include"grade.h"
#include"median.h"
#include<list>

using std::vector;

bool fgrade(const Student_info&);
vector<Student_info> extract_fails(vector<Student_info>&);
list<Student_info> extract_fails(list<Student_info>&);

double grade(double mid, double fin, const vector<double>&);


double grade(double midterm, double final, double homework);

double median(vector<double> vec);


#endif
