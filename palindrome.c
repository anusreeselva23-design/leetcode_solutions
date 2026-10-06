#include <stdbool.h>

bool isPalindrome(int x) {
   
    if (x < 0 || (x % 10 == 0 && x != 0)) {
        return false;
    }

    int original = x;
    long reversed = 0; 

  
    while (x > 0) {
        int remainder = x % 10;          
        reversed = (reversed * 10) + remainder; 
        x = x / 10;                      
    }

    
    return original == reversed;
}
