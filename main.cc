#include "prog1.h"

using namespace std;

int main(int argc, char** argv){
	string original = argv[1];//first string being removed
	string replaced = argv[2];//string that gets inserted
	string before = "";//string to be found and replaced
	string after = "";//string that replaces the first string
	getline(cin,before);
	after = FNR(before, original, replaced);
	cout << after;
	return 0;
}
