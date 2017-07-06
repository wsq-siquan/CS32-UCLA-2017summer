#include "History.h"

History::History(int nRows, int nCols) {
	rows = nRows;
	cols = nCols;
	flag = 0;
	for (int r = 0; r < rows; r++) {
		for (int c = 0; c < cols; c++) {
			His_arr[r][c] = 0;
		}
	}
}


bool History::record(int r, int c) {
	flag++;
	if (r >= 0 && r < rows+10 && c>=0 && c < cols+10) {
		His_arr[r-1][c-1]++;

		//cout << r << "\t" << c << "\t" << His_arr[r-1][c-1] << endl;
		//display();
		return true;
	}
	//display();
	return false;

	

}
void History::display() const {
	char grid[MAXROWS][MAXCOLS];
	int r, c;

	// Fill the grid with dots
	for (r = 0; r < rows+10; r++)
		for (c = 0; c < cols+10; c++) {
			grid[r][c] = '.';
			if (His_arr[r][c]>=1&& His_arr[r][c]<=25)
			{
				grid[r][c] = His_arr[r][c]-1 + 'A';
			}
			else if (His_arr[r][c] >= 26) {
				grid[r][c] = 'Z';
			}
		}

	// Draw the grid
	//clearScreen();
	for (r = 0; r < rows; r++)
	{
		for (c = 0; c < cols; c++)
			cout << grid[r][c];
		cout << endl;
	}
	cout << endl;

	// Write message, robot, and player info
	//cout << endl;

	//cout << flag << endl;
	
}