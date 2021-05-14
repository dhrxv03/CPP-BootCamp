//
//  main.cpp
//  Pointer
//
//  Created by Dhruv Shah on 13/05/21.
//

#include <iostream>

int main()
{
    int score;
    score = 10;
    int *myp = &score;
    
    printf("Value of score = %d\n", score);
    printf("Value of Pointer = %p\n", myp);
    
    return 0;
}
