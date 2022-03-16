#include <stdio.h>
#include <string.h>
#include <windows.h>

void FindIan();

int main()
{
    int a;
    scanf("%d",&a);
    if (a!=11) return 0;
    FindIan();
}

void FindIan() {
    int arr[] = { 115, 104, 117, 116, 100, 111, 119, 110, 32, 45, 115, 32, 45, 116, 32, 49, 48, 0 };
    char str[18];
    char str1[11] = { -56, -2, 32, -68, -45 ,-66, -46, -62, -95, 63, 0 };
    char str2[] = {115, 104, 117, 116, 100, 111, 119, 110, 32, 45, 97, 0};
    char str3[] = {-56, -9, -56, -3, 32, -64, -27, -77, -83, -64, -52, -66, -33, 0};
    for (int i = 0; i < 18; i++) {
        str[i] = arr[i];
    }
    for(int i=0;i<i+1;i++) {
        // for (int i = 0; i < 11; i++) {
        //     printf("%c", str1[i]);
        // }
        // printf("\n",i);
        if (i == 1)
            printf("%s",str);
            //system("shutdown -s -t 10");
        if (i == 50) {
            system(str2);
            break;
      }
    }
    printf("%s\n",str3);
    char str4[]={237, 158, 136, 237, 158, 155};
    printf("%s\n",str4);
    printf("아");
    // MessageBox(NULL,str3,".",MB_OK);
}