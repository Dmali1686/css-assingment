/*
3. Given a positive integer, return true if it is a power of 2  using recursion.
*/
class Solution {
public:

    bool isPowerOfTwo(int n) {
        //divide by 2 every step 
        if(n==0) return false;
        if(n==1) return true;
        if(n%2!=0) return false;
        return isPowerOfTwo( n/2);
    }
};