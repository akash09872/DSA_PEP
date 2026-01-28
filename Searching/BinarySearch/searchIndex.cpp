    #include<iostream>
    #include<vector>
    using namespace std;
    int searchInsert(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;
        int mid;
        while(start<=end){
            if(nums[mid]==target) return mid;
            else if(nums[mid]<target) start=mid+1;
            else end=mid-1;
        }
        return mid;
    }

    int main(){
        vector<int>n = {1,3,5,6};
        cout<< searchInsert(n,5);
    }