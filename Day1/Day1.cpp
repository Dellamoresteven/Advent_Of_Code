#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <fstream>
#include <string>

using namespace std;

/*
 * #class DayOne |
 * @author Steven Dellamore |
 * @desc Day one of the 25 days! |
 */

/*
 * #function DayOne::PartOne |
 * @desc Santa is trying to deliver 
 * presents in a large apartment building, 
 * but he can't find the right floor - 
 * the directions he got are a little confusing. 
 * He starts on the ground floor (floor 0) and then 
 * follows the instructions one character at a time.
 * An opening parenthesis, @inline{(}, 
 * means he should go up one floor, and a 
 * closing parenthesis, @inline{)}, means he should go down one floor.
 * The apartment building is very tall, and the 
 * basement is very deep; he will never find 
 * the top or bottom floors. |
 */
// int main() {
//     ifstream ifs("Day1.txt"); 
//     string line;
//     int floor(0);
//     if (ifs.is_open()) {
//         getline (ifs,line);
//         for( auto c : line ){
//             if(c == ')') floor--;
//             if(c == '(') floor++;
//         }
//         ifs.close();
//     }
//     cout << floor << endl;;
// }

/*
 * #function DayOne::PartTwo |
 * @desc Now, given the same instructions, 
 * find the position of the first character 
 * that causes him to enter the basement 
 * (floor -1). The first character in the 
 * instructions has position 1, the second 
 * character has position 2, and so on. |
 */
int main() {
    ifstream ifs("Day1.txt"); 
    string line;
    int floor(0);
    if (ifs.is_open()) {
        getline (ifs,line);
        for( int i = 0; i < line.length(); i++ ){
            char c = line.at(i);
            if(c == ')') floor--;
            if(c == '(') floor++;
            if(floor == -1){
                cout << (i + 1) << endl;
                ifs.close();
                return 1;
            }
        }
        ifs.close();
    }
}