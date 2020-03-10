#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <vector>

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
            vector<int> lwh;
            lwh.push_back(stoi(line));
            getline(ifs,line,'x');
            lwh.push_back(stoi(line));
            getline(ifs,line,'\n');
            lwh.push_back(stoi(line));
            total += lwh.at(0)*lwh.at(1)*lwh.at(2);
            std::sort(lwh.begin(), lwh.end());
            total += 2*lwh.at(0) + 2*lwh.at(1);
        }
        ifs.close();
    }
    cout << total << endl;
}