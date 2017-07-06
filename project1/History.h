#ifndef _H_H
#define _H_H

#include "globals.h"
class Arena;

class History
{
public:
	History(int nRows, int nCols);
	bool record(int r, int c);
	void display() const;
	int flag;

private:
	int rows;
	int cols;	
	int His_arr[MAXROWS][MAXCOLS];
};

#endif // !_H_H
