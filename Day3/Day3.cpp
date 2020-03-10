#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <set>

using namespace std;

/*
 * #class DayThree |
 * @author Steven Dellamore |
 * @desc Day three of the 25 days! |
 */

/*
 * #function DayThree::PartOne |
 * @desc TODO |
 */
int main() {
    ifstream ifs("data.txt");
    std::set<std::pair<int,int>> m; 
    string line;
    int sx(0);
    int sy(0);
    int rx(0);
    int ry(0);

    auto lam = [&](auto charr, int& x, int& y){
        switch(charr){
            case '<':
                x--;
                break;
            case '>':
                x++;
                break;
            case '^':
                y++;
                break;
            case 'v':
                y--;
                break;
        }
        m.insert(std::pair<int,int>(x,y));
    };

    if (ifs.is_open()) {
        getline (ifs,line);
        for(int i = 0; i < line.length() ; i += 2 ) {
            char s = line.at(i);
            char rs = line.at(i+1);
            lam(s, sx, sy);
            lam(rs, rx, ry);
        }
    }
    cout << m.size() << endl;
}
