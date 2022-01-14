/* Kadane's Algorith implementation */

int maxSumSubArray(vector<int> &A) {
     int n = A.size(); // Size of the array
     int local_max = 0; 
     int global_max = INT_MIN; // -Infinity

     for (int i = 0; i < n; i++) {
         local_max = max(A[i], A[i] + local_max);
         if (local_max > global_max) {
            global_max = local_max;
         }
     }

     return global_max;
}
