# char array vs string array

This tutorial is intended to show that the following two strings are equivalent: 
- char str[] = {'h','e','l','l','o'};
- char str[] = "hello" 

# C: Garbage characters or unprintable character?
- **Garbage character** is a byte that resides in a variable that wasn't asigned in some well-defined way.

- **Unpredictable character** is a character that does not have a well-defined representation when printed as characters. For example, ASCII codes 0-31 (0-1F) and 127(7F) are control characters and therefore unprintable.

The nature of garbage characters is that their contents are undefined. The standard does not say what values should go there. They could chose to leave whatever values happen to be at those memory address, they could chose to write 0 to all addresses. In other words, the contents are undefined. 

In this example, *char str[]* will be printing garbage characters when it is called in the for loop. To fix it just enter the lenght of the char array i.e *char str[6]*. 

# String constant vs char constant
- **A string constant** is a series of characters enclosed in double quotes(" ")
- **A character constant** is a character enclosed in single quotes ('')
when a character variable ch and a character array(string) are initialized with the same character x such as the following :
    
                char ch = 'x';
                char str = "x";

One byte is reserved for the character variable ch and two bytes area allocated for the char array str. The reason that an extra byte is nedded for str  is that the compiler has to append a null character to the array.
