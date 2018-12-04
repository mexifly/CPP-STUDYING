#include <iostream>
#include <string>
#include <vector>

using namespace std;

typedef string::size_type sz;
sz wd = 80;
char def = ' ';

int screen(sz = wd, char = def) {
	cout << wd << " " << def << endl;
	return 0;
}

void f2() {
	def = '*';
	sz wd = 100;
	int window = screen();
}



int main()
{
	screen();
	f2();
	
	system("PAUSE");
	return 0;
}