#include <bits/stdc++.h>
using namespace std;
void print_vector(vector<auto> v){
   cout << "[";
   for(int i = 0; i<v.size(); i++){
      cout << v[i] << ", ";
   }
   cout << "]"<<endl;
}
void print_vector(vector<vector<auto> > v){
   cout << "[";
   for(int i = 0; i<v.size(); i++){
      cout << "[";
      for(int j = 0; j <v[i].size(); j++){
         cout << v[i][j] << ", ";
      }
      cout << "],";
   }
   cout << "]"<<endl;
}
class SlidingWindow {
   public:
   vector<int> maxSlidingWindow(vector<int>& nums, int k) {
      vector <int> ans;
      deque <int> dq;
      if(nums.size()==0)return ans;
      for(int i =0;i<k;i++){
         while(!dq.empty() && nums[dq.back()]<nums[i])dq.pop_back();
         dq.push_back(i);
      }
      for(int i = k;i<nums.size();i++){
         ans.push_back(nums[dq.front()]);
         while(!dq.empty() && dq.front()<(i-k + 1))dq.pop_front();
         while(!dq.empty() && nums[dq.back()]<nums[i])dq.pop_back();
         dq.push_back(i);
      }
      ans.push_back(nums[dq.front()]);
      return ans;
   }
};
main(){
   SlidingWindow ob;
   vector<int> v = {1,3,-1,-3,5,3,6,8};
   print_vector(ob.maxSlidingWindow(v,3));
}
