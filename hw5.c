//
//  main.c
//  C_project
//
//  Created by fox on 2021/11/08.
//

#include <stdio.h>

int main()
{
    int num[5] = {};
    int i ;
    printf("5개의 정수를 입력하세요:" );
    scanf("%d %d %d %d %d", &num[0], &num[1], &num[2], &num[3], &num[4]);
    printf("홀수: ");
    for (i = 0 ; i < 5 ; i++)
    {
        if ((num[i]%2) == 1)
        {
            printf("%d ", num[i]);
        }
    }
    printf("\n");
    printf("짝수: ");
    for (i = 0 ; i < 5 ; i++)
    {
        if ((num[i]%2) == 0)
        {
            printf("%d ", num[i]);
        }
    }
}
