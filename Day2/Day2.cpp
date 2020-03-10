#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <fstream>
#include <string>

using namespace std;

/*
 * #class DayTwo |
 * @author Steven Dellamore |
 * @desc Day Two of the 25 days! |
 */

/*
 * #function DayTwo::PartOne |
 * @desc TODO |
 */
// int main() {
//     ifstream ifs("Day2.txt"); 
//     string line;
//     int total(0);
//     if (ifs.is_open()) {
//         while( getline(ifs,line,'x') ) {
//             int l = stoi(line);
//             getline(ifs,line,'x');
//             int w = stoi(line);
//             getline(ifs,line,'\n');
//             int h = stoi(line);
//             cout << l << ":" << w << ":" << h << endl;
//             total += (2*l*w + 2*w*h + 2*h*l);
//             total += std::min(std::min(l*w,w*h),h*l);
//         }
//         ifs.close();
//     }
//     cout << total << endl;
// }

/*
 * #function DayTwo::PartTwo |
 * @desc TODO |
 */
int main() {
    ifstream ifs("Day2.txt"); 
    string line;
    int total(0);
    if (ifs.is_open()) {
        while( getline(ifs,line,'x') ) {
            int l = stoi(line);
            getline(ifs,line,'x');
            int w = stoi(line);
            getline(ifs,line,'\n');
            int h = stoi(line);
            cout << l << ":" << w << ":" << h << endl;
            total += (2*l*w + 2*w*h + 2*h*l);
            total += std::min(std::min(l*w,w*h),h*l);
        }
        ifs.close();
    }
    cout << total << endl;
}