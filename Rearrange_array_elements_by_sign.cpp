#include <iostream>
#include <vector>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
    int n = nums.size();
    vector<int> result(n);

    int posIndex = 0; // even index
    int negIndex = 1; // odd index

    for (int num : nums) {
        if (num > 0) {
            result[posIndex] = num;
            posIndex += 2;
        } else {
            result[negIndex] = num;
            negIndex += 2;
        }
    }

    return result;
}

// Driver code
int main() {
    vector<int> nums1 = {3,1,-2,-5,2,-4};
    vector<int> ans1 = rearrangeArray(nums1);

    cout << "Output: ";
    for (int x : ans1) cout << x << " ";
    cout << endl;

    vector<int> nums2 = {-1,1};
    vector<int> ans2 = rearrangeArray(nums2);

    cout << "Output: ";
    for (int x : ans2) cout << x << " ";
    cout << endl;

    return 0;
}