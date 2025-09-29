#include <stdio.h>
int main()
{
    char start,e;
    printf("Please say starting letter of country");
    scanf("%c",&start);
    switch(start)
    {
        case 'A':
        case 'a':
            printf("Please say ending letter\n");
            scanf("\n%c",&e);
            switch(e)
            {
                case 'A':
                case 'a':
                    printf("\n Alaska \n Albania \n Algeria");
                    break;
                default:
                    printf("\n No such country");
            }
            break;

        case 'B':
        case 'b':
            printf("Please say ending letter\n");
            scanf("\n%c",&e);
            switch(e)
            {
                case 'A':
                case 'a':
                    printf("\n Bulgaria \n Bolivia \n Botswana");
                    break;
                default:
                    printf(" No such country");
            }
            break;

        default:
            printf("Please type correct letter");
    }
}

