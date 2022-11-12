# include <stdio.h>
# include <stdlib.h>


int main(){

    int ay;
    printf("****************************************************************\nYilin kacinci ayi?:\n");
    scanf("%d",&ay);
    printf("****************************************************************\n");
    switch (ay)
    {
    case 11:
    case 12:
    case 1:
        printf("Kis mevsimi");
        break;
        case 2:
        case 3:
        case 4:
        printf("Bahar mevsimi");
        break;
        case 5:
        case 6:
        case 7:
        printf("Yaz mevsimi");
        break;
        case 8:
        case 9:
        case 10:
        printf("Sonbahar mevsimi");
        break;
    
    default:
    printf("Tekrar deneyin");

        break;
    }




















    return 0;
}