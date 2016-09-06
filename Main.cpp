/*
	1. Xây dựng chương trình nhập vào 1 chuỗi dùng hàm scanf (nhập cả dấu cách)
	2. Xây dựng chương trình nhập vào 1 chuỗi giống như câu lệnh copy con trong Dos (nhập cả dấu cách, cả xuống dòng và khi ấn f6 rồi enter thì thoát )
		(toàn bộ dữ liệu nhập vào nằm trong 1 chuỗi)
	3. Xây dựng chương trình nhập vào 1 chuỗi ko có kí tự số. ví dụ :
												nhập vào abc123 thì : abc vào trong chuỗi , 123 nằm trong stdin
												nhập vào abvsadsad*&^%%123 thì abvsadsad*&\n^%% vào trong chuỗi, 123 còn trong stdin
												nhập vào ab3abc thì ab vào chuỗi 3abc nằm trong stdin
	4. 
		a. Xây dựng chương trình nhập vào 1 chuỗi chỉ có chữ cái thường và số 8, dấu cách và dấu * và dấu ^
		b. Xây dựng chương trình nhập vào 1 chuỗi , việc nhập kết thúc khi ấn ^ rồi ấn enter
	5. Xây dựng chương trình nhập vào 1 chuỗi ko có điểm ngừng (dùng scanf) . Nhập mãi mãi ko dừng 
*/

#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
 
void main()
{
    char xau[100];
    //cau 1
    scanf("%[^\n]",xau);
 
	//cau 2
	scanf("%[^\0]", xau);

	//cau 3
	scanf("%[^0-9]", xau);

	//cau 4
	scanf("%[a-z8*^ ]", xau);
	scanf("%[^^]", xau);

	//cau 5
	scanf("%[]", xau);

	printf("Viet hoa  : ");
    for (char *p = xau; *p; p++) //p trỏ đến xâu; kí tự trỏ đến khác NULL;p=p+1
        printf("%c", toupper(*p));

	printf("\nDao nguoc xau : ");
    for(char *p=xau + strlen(xau) - 1; p >= xau; p--)  // cho p trỏ vào từ cuối cùng; p còn lớn hơn xau;p=p-1
        printf("%c", *p);

    getch();
}