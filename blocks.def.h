//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/	/*Update Interval*/	/*Update Signal*/
	{"",		"~/.local/bin/internet",	5,	4},
	{"",		"~/.local/bin/volume",		1,	10},
	{"",		"~/.local/bin/brightness",	1,	11},
	{"",		"~/.local/bin/memory",		10,	14},
	{"",		"~/.local/bin/fanspeed",	5,	12},
	{"",		"~/.local/bin/cpu",		10,	18},
	{"",		"~/.local/bin/battery",		5,	3},
	{"",		"~/.local/bin/clock",		20,	1},
	{"",		"~/.local/bin/capslock",	1,	2},
	{"",		"~/.local/bin/low-battery-notification",	120,	13},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " |";
static unsigned int delimLen = 5;
