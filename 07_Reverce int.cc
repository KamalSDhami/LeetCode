#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

class Solution {
    public:
        int reverse(int x) {
            int rev = 0;
            while ( x !=0){
    
                if (rev * 10 >= INT_MAX|| rev + x%10>= INT_MAX)
                    return 0;
                rev*=10;
                rev += x%10;
                x/=10;
            }
            return rev;
        }
    };

int main(){
    Solution obj;
    int x = 1534236469;
    cout << " X : " << x << endl;
    cout << obj.reverse(x) << endl;
    return 0;
}
// 1,534,236,469