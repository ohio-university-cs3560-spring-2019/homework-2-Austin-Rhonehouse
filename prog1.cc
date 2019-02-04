#include "prog1.h"


using namespace std;

string FNR(string target, string search, string replace){
    size_t place = 0;
    while ((place = target.find(search, place)) != string::npos) {//searches for target string removes the length of that string and add the replace string
         target.replace(place, search.length(), replace);
         place += replace.length();
    }
    return target;
}
