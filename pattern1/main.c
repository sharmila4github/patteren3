//
//  main.c
//  pattern1
//
//  Created by Felix ITs 08 on 31/10/18.
//  Copyright © 2018 Felix. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    int i,j;
    for (i=1; i<=4; i++) {
        
        for (j=1; j<=i; j++) {
            printf("*");
        }
        printf("\n");
        
    }
    return 0;
}
