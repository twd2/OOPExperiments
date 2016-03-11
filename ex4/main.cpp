#include <iostream>
#include <vector>
#include <string>
#include <map>
#include "temp1.hpp"
#include "temp2.hpp"
#include "temp3.hpp"

using namespace std;

int main()
{
    temp1<int, float> t1if;
    temp1<vector<string>, map<string, float> > t1vsmsf;
    temp2<double> t2d;
    // temp2<temp1> t2t1; // error: type/value mismatch at argument 1 in template parameter list for ‘template<class T> class temp2’
    temp2<temp1<double, bool> > t2t1db;
    temp3<int, float, temp1> t3ift1;
    // temp3<int, float, temp1<bool, double> > t3ift1bd; // error: type/value mismatch at argument 3 in template parameter list for ‘template<class T, class U, template<class V, class W> class TEMP> class temp3’

    return 0;
}
