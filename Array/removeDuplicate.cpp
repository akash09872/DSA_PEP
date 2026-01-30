#include<iostream>
#include<vector>
using namespace std;

void removeDuplicate(vector<int> &nums){
    int i=0;
    for(int j=0;j<nums.size();j++){
        if(nums[i]!=nums[j]){
            i++;
            nums[i]=nums[j];
        }
    }
}

int main(){
    vector<int> nums={1,1,1,3,3,4,5,6,7,7,7};
}