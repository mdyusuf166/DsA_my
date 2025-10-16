// // pair var koralgy  2 sonka
// #include <iostream>
// #include <vector>
// using namespace std;
// vector<int> pairSum(vector<int> nums, int terget)
// {
//   vector<int> ans;
//   int n = nums.size();
//   for (int i = 0; i < n; i++)
//   {
//     for (int j = i + 1; j < n; j++)
//     {
//       if (nums[i] + nums[j] == terget)
//       {
//         ans.push_back(i);
//         ans.push_back(j);
//         return ans;
//       }
//     }
//   }
//   return ans;
// }

// int main()
// {
//   vector<int> nums = {2, 7, 11, 15};
//   int terget = 9;
//   vector<int> ans = pairSum(nums, terget);
//   // for(int i = 0; i < ans.size(); i++){
//   //   cout<<ans[i]<<" ";
//   // }
//   cout << ans[0] << " " << ans[1] << " ";
//   return 0;
// }

// pair var koralgy  2 sonkab time copexsity O(n)
// #include <iostream>
// #include <vector>
// using namespace std;
// vector<int> pairSum(vector<int> nums, int terget)
// {
//   vector<int> ans;
//   int n = nums.size();
//   int i = 0, j = n - 1;
//   while (i < j)
//   {
//     int sum = nums[i] + nums[j];
//     if (sum == terget)
//     {
//       ans.push_back(i);
//       ans.push_back(j);
//       return ans;
//     }
//     else if (sum < terget)
//     {
//       i++;
//     }
//     else
//     {
//       j--;
//     }
//   }

//   return ans;
// }

// int main()
// {
//   vector<int> nums = {2, 7, 11, 15};
//   int terget = 9;
//   vector<int> ans = pairSum(nums, terget);
//   // for(int i = 0; i < ans.size(); i++){
//   //   cout<<ans[i]<<" ";
//   // }
//   cout << ans[0] << " " << ans[1] << " ";
//   return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// vector<int> pairSum(vector<int> nums, int terget)
// {
//   vector<int> ans;
//   int n = nums.size();
//   int i = 0, j = n - 1;
//   while (i < j)
//   {
//     int sum = nums[i] + nums[j];
//     if (sum == terget)
//     {
//       ans.push_back(i);
//       ans.push_back(j);
//       return ans;
//     }
//     else if (sum < terget)
//     {
//       i++;
//     }
//     else
//     {
//       j--;
//     }
//   }

//   return ans;
// }

// int main()
// {
//   vector<int> nums = {2, 7, 11, 15};
//   int terget = 15;
//   vector<int> ans = pairSum(nums, terget);
//   // for(int i = 0; i < ans.size(); i++){
//   //   cout<<ans[i]<<" ";
//   // }
//   cout << ans[0] << " " << ans[1] << " ";
//   return 0;
// }





//Majority Element
