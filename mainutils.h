#include "stdafx.h"

#ifndef MAINUTILS_H
#define MAINUTILS_H

string month,year,station;

bool printUsageStrings(int argc, char* argv[])
{
	if (argc <= 1)
	{
		std::cout << "usage: " << argv[0] << " M=Month(06) Y=Year(2019) S=Station(27713)" << std::endl;
		return 0;
	}
	return 1;
}

void recognizeToken(string arg)
{
	if (arg.find('M') != string::npos)
	{
		month = arg.substr(arg.find('M') + 2, arg.length() - 2);
		cout<<"Month:"<<month<<endl;
	}
	if (arg.find('Y') != string::npos)
	{
		year = arg.substr(arg.find('Y') + 2, arg.length() - 2);
		cout<<"Year:"<<year<<endl;
	}
	if (arg.find('S') != string::npos)
	{
		station = arg.substr(arg.find('Y') + 2, arg.length() - 2);
		cout<<"Station:"<<station<<endl;
	}
}

void processInputParameters(int argc, char* argv[])
{
	std::istringstream oss;
	stringstream ss;
	int i;
	month="01";
	year="2019";
	station="27713";
	for (i = 1; i != argc; i++)
		recognizeToken(string(argv[i]));
}
#endif