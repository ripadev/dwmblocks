//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/	/*Update Interval*/	/*Update Signal*/
	{"",		"internet",	5,	4},
	{"",		"volume",	1,	10},
	{"",		"brightness",	1,	11},
	{"",		"memory",	10,	14},
	{"",		"fanspeed",	5,	12},
	{"",		"cpu",		10,	18},
	{"",		"battery",	5,	3},
	{"",		"clock",	20,	1},
	{"",		"capslock",	1,	2},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " |";
static unsigned int delimLen = 5;
