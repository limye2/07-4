//
//  main.c
//  07-4
//
//  Created by MacBook Air on 2023/10/19.
//

#include <stdio.h>
void f(void);

int i;
int main(void)
{
    for(i=0; i<5; i++)
    {
        f();
    }
    return 0;
}

void f(void)
{
    for(i=0; i<10; i++)
        printf("#");
}
