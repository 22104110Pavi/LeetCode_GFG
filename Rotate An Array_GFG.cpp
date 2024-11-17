// Solutuion -1 (Pass All Cases)
class Solution {
public:
    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
        int n = arr.size();
        d = d % n; // In case d is larger than n

        // Step 1: Reverse the first d elements
        reverse(arr.begin(), arr.begin() + d);

        // Step 2: Reverse the remaining n - d elements
        reverse(arr.begin() + d, arr.end());

        // Step 3: Reverse the entire array
        reverse(arr.begin(), arr.end());
    }
};
//Solution 2 -(PASS 1110/1115 Cases) Time Complexity is More
class Solution {
  public:

    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
        
        int in=0;
        d=d%arr.size();
        while(in<d)
        {
            int t=arr[0];
            for(int i=0;i<arr.size()-1;i++)
            {
                arr[i]=arr[i+1];
            }
            arr[arr.size()-1]=t;
            in++;
        }
    }
};
