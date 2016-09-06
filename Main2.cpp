//1 style duyệt xâu mới
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

void main()
{
    char xau[100],*p = xau, *q, *i;
    printf("Nhap : "), scanf("%[a - z]",xau); // nhap vao "ho dem ten"
    
    while(*p != ' ') p++;
    q = xau + strlen(xau) - 1;
    while(*q != ' ') q--;
    
    //viet hoa
    *xau = toupper(*xau);
    p[1] = toupper(1[p]);
    q[1] = toupper(1[q]);

    //viet
    printf("Xuat :%s", q); //ten
    for(i = p; i <= q; i++) printf("%c", *i); // dem
    for(i = xau;i < p; i++) printf("%c", *i); // ho
    
    getch();
}  