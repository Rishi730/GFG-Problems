class Solution {
  public:

    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
        // code here
        int n=arr.size();
        int e=d%n;
        vector<int>temp;
        
        for(int i=0;i<e;i++){
            temp.push_back(arr[i]);    
        }
        
        for(int i=e;i<n;i++){
            arr[i-e]=arr[i];
        }
        int j=0;
        for(int i=n-e;i<n;i++){
            arr[i]=temp[j];
            j++;
        }
        
        
    }
};
