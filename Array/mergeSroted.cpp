#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0;
        int j=0;
        for(int k=0;k<m+n;k++){
            if(nums1[k]>nums2[j]){
                int temp=nums1[k];
                nums1[k]=nums2[j];
                nums2[j]=temp;
                j++;
            }
        }
        for(int i=m;i<m+n;i++){
            nums1[i]=nums2[i-n];
        }
}
void merge3(vector<int> &nums1,int m, vector<int> &nums2,int n){
    int j=0;
    for(int k=0;k<m+n;k++){
        if(k==m) j=0;
        if(nums1[k]>nums2[j]){
            swap(nums1[k],nums2[j]);
            j++;
        }
        if(k>=m) swap(nums1[k],nums2[j++]);
    }
    // for(int k:nums1) cout<<k<<" ";

}

void merge2(vector<int>  &nums1,int m,vector<int> &nums2,int n){
    int i=m-1,j=n-1,k=m+n-1;
    while(j>=0){
        if(i>=0 && nums1[i]>nums2[j]){
            nums1[k]=nums1[i];
            k--;
            i--;
        }else{
            nums1[k]=nums2[j];
            k--;
            j--;
        }
    }
}

int main(){
    vector<int> arr={1,2,3,0,0,0};
    vector<int> arr2={2,5,6};
    merge3(arr,3,arr2,3);
    for(int i:arr){
        cout<<i<<" ";
    }
}