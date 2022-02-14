#include<stdio.h>
char * fun(char temp){
    //char two[8][3] = {{'A','B','C'},{'D','E','F'},{'G','H','I'},{'J','K','L'},{'M','O','P'},{'Q','R','S'},{'T','U','V'},{'X','Y','Z'}};
    
    switch (temp)
    {
    case '2':
        return "ABC";
        break;
    case '3':
        return "DEF";
        break;
    case '4':
        return "GHI";
        break;
    case '5':
        return "JKL";
        break;
    case '6':
        return "MNO";
        break;
    case '7':
        return "PRS";
        break;
    case '8':
        return "TUV";
        break;
    case '9':
        return "WXY";
        break;
    default:
        printf("enter number only between 2 to 9\n");
        break;
    }
}
int main(){
    char in[7];
    printf("Enter number :");
    scanf("%s", in);
    char *input[7];
    FILE *fp;
    fp=fopen("wordfile.txt","w");
    fprintf(fp,"combination of letters from 7 numbers: \n");
    while(!feof(fp))
    {
    for(int i=0;i<7;i++)
    input[i] = fun(in[i]);
    for(int a=0;a<3;a++){
        for(int b=0;b<3;b++){
            for(int c=0;c<3;c++){
                for(int d=0;d<3;d++){
                    for(int e=0;e<3;e++){
                        for(int f=0;f<3;f++){
                            for(int g=0;g<3;g++){
                                fprintf(fp,"%c%c%c%c%c%c%c\n",input[0][a],input[1][b],input[2][c],input[3][d],input[4][e],input[5][f],input[6][g]);
                            }
                        }
                    }
                }
            }
        }
    }

    fputs("\nphone number is:",fp);
    for(int i=0;i<7;i++)
    {
        if(i==3)
        {
            fprintf(fp,"-");
        }
        fprintf(fp,"%s",input[i]);
    }
    }
    fclose(fp);
    printf("Thank you!");
}