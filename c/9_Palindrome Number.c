bool isPalindrome(int x) {
   long int remainder = 0, reverseNumber = 0;
   long int inputNumber = x;
  
    if(inputNumber < 0)
    return false;

    while(inputNumber > 0){
        remainder = inputNumber % 10;
        reverseNumber = reverseNumber * 10 + remainder;
        inputNumber /= 10;
    }
    
    if (reverseNumber == x)
    return true; 
    else
    return false;
    
}
