bool isPalindrome(int x) 
{
    if (x<0)
        return 0;
    
    unsigned int num = x, reverse = 0;
 
    while (num) {
        reverse *= 10;
        reverse += num%10;
        num/=10;
  }
 
    if (x == reverse)
        return 1;
    else
        return 0;
}
