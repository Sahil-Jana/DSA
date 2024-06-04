class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int i=m;i<m+n;i++){
            nums1.at(i)=nums2.at(i-m);
        }

        for (int i=1; i<m+n ; i++){         //insertion sort
            int key = nums1[i];
            int j=i-1; 
        
            while (j>=0 && key<nums1[j]){
                nums1[j+1] = nums1[j];
                j-=1;
            }
            nums1[j+1]=key;
        }
    }
};