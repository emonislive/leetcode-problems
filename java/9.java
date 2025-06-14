class Solution {
    public boolean isPalindrome(int x) {
        String integerToString = Integer.toString(x);
        String reverseString = new StringBuilder(integerToString).reverse().toString();
        
        return reverseString.equals(integerToString);
    }
}
