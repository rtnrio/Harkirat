// ## Recursion
// Recursion is a programming technique where a function calls itself to solve a problem. It involves breaking down a problem into smaller, self-similar subproblems, and solving each subproblem using the same function until a base case is reached, which stops the recursion. 


// 1-Head recursion-In head recursion, the recursive call is made before any other operations.
void headRec(int n) {
    if (n == 0) return;
    headRec(n - 1);         // Recursive call first
    cout << n << " ";       // Work happens after recursion
}
// 2- Tail recursion-In tail recursion, the recursive call is made at the end, after all work is done.
void tailRec(int n) {
    if (n == 0) return;
    cout << n << " ";       // Work first
    tailRec(n - 1);         // Recursive call after
}


// Questions-

// Basic
// Q1-Sum of first N numbers
class Solution {
public:
    int NnumbersSum(int N) {
        // Base case: if N is 0, return 0
        if (N == 0) return 0;
        // Recursive case: add N to the sum of N-1
        return N + NnumbersSum(N - 1);
    }
};
// Q2-Factorial of a number
class Solution{	
	public:
		long long int factorial(int n){
			if(n<=1) return 1;
            return n * factorial(n-1);
		}
};
// Q3-Sum of array elements

class Solution {
public:
    int arraySum(vector<int>& nums) {
        // Start from index 0
        return sum(nums, 0);
    }

private:
    int sum(vector<int>& nums, int left) {
        // Base case: out of bounds
        if (left >= nums.size()) {
            return 0;
        }
        // Add current element and recurse
        return nums[left] + sum(nums, left + 1);
    }
};



