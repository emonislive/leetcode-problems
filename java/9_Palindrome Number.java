class Solution {
    public boolean isPalindrome(int x) {
    int remainder, reverseNumber = 0;
    int inputNumber = x;
    
    if(inputNumber < 0)
        return false;

    while(inputNumber > 0){
        remainder = inputNumber % 10;
        reverseNumber = reverseNumber * 10 + remainder;
        inputNumber = inputNumber / 10;
    }

    if (x == reverseNumber)
        return true;
    else
        return false;
       
    }
}
