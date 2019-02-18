#include "stdafx.h"
#include "mainutils.h"

using namespace std;

int main(int argc, char *argv[])
{
	printUsageStrings(argc,argv);
	processInputParameters(argc,argv);
	
	return 0;
}