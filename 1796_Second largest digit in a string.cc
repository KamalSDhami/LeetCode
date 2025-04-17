#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Solution {
    public:
        int secondHighest(string s) {
            int largest ,second_largest ;
            largest = second_largest = -1;
            for (auto chr : s){
                if (isdigit(chr)){
                    if ((chr-'0') >largest){
                        second_largest = largest;
                        largest = chr -'0';
                    }else {
                        if ((chr-'0') > second_largest && (chr-'0') != largest){
                            second_largest = chr -'0';
                        }
                    }
                }
            }
            return second_largest;
        }
    };

int main(){

    Solution obj;
    string s = "sjhtz8344";
    cout << obj.secondHighest(s) << endl;
    return 0;
}