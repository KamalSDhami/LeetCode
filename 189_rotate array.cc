#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

class Solution {
    private : 
      void reverce (vector<int> & arr, int start , int end){
          while (start < end){
              swap(arr[start++],arr[end--]);
          }
      }
    public:
  
      // Function to rotate an array by d elements in counter-clockwise direction.
      void rotate(vector<int>& arr, int d) {
          // code here
          int rotation = d%arr.size();
          reverce (arr,0,arr.size()-rotation-1);
          reverce (arr,arr.size()-rotation,arr.size()-1);
          reverce (arr,0, arr.size()-1);
          
      }
};