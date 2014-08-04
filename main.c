#include<stdio.h>#include<stdlib.h>#include<malloc.h>#include<time.h>#include<windows.h>#include"func.h"
int*n=NULL;int*user=NULL;int**recnum=NULL;int*recsum=NULL;int*chack=NULL;int onoff=1;int count=0;int Scount=NULL;int Bcount=NULL;int tempcode=NULL;void relay(int i,int count){extern int*chack;extern int tempcode;int mc=0,p,c,dc,errorcode;getusernum(i);for(p=i;p>=0;p--){mc+=user[p]*(xten(i-p));}
chack[count]=mc;for(c=1;c<=count;c++){for(dc=1;dc<=count;dc++){if(chack[c]==chack[dc]&&c!=dc){errorcode=1;break;}}}
if(count>1&&errorcode==1){puts("     중복입니다. 다른수를 입력해주세요.");errorcode=0;tempcode=1;relay(i,count);}
if(tempcode!=1){check(i);}
tempcode=0;}
int main(){SetConsoleTitle("세상에서 가장 어려운 숫자야구");system("mode con lines=30 cols=58");void submenu();extern int**recnum;extern int*recsum;extern int*chack;extern int count;int i,p;double std;mv();printline('@',49);puts("                세상에서 가장 어려운 숫자야구              ");mv();printline('@',49);puts("");printf("             * Easy");printf("             * Medium\n");puts("");printf("          1)    두자리");printf("          3)    네자리\n");printf("          2)    세자리");printf("          4)   다섯자리\n");puts("");printf("             * Hard");printf("             * Hell\n");puts("");printf("          5)   여섯자리");printf("          7)   여덟자리\n");printf("          6)   일곱자리");printf("          8)   아홉자리\n");puts("");puts("                      0)      종료");puts("");mv();printline('@',49);puts("");printf("           :");scanf("%d",&i);if(i==0){return 0;}
mkrandnum(i);recnum=(int**)malloc(sizeof(int*)*(25*i));recsum=(int*)malloc(sizeof(int)*(25*i));chack=(int*)malloc(sizeof(int)*(25*i));while(onoff){system("cls");count++;relay(i,count);if(onoff==0)break;recorder(count,i);submenu(i);}
std=(double)(104-(4/i)*count);puts("");mv();printf("점수는   %0.2f 점 입니다.\n",(double)(104-(4/i)*count));if(100>=std&&std>=80){mv();puts("이 점수는 .. 상위 10% 십니다. 비결이 뭐죠?");}
if(80>std&&std>=60){mv();puts("이 점수는 .. 상위 30% 십니다. 재능이 있네요.");}
if(60>std&&std>=40){mv();puts("이 점수는 .. 중위권 십니다. 상위권 진출이 얼마 안남았네요.");}
if(40>std&&std>=20){mv();puts("이 점수는 .. 열심히 노력하세요. 중위권이 얼마 남지 않았어요.");}
if(20>std&&std>=4){mv();puts("이 점수는 .. 초보시군요. 더 좋은 점수 기대할게요.");}
if(4>std){mv();puts("error");}
puts("");for(p=0;p<=i;p++);{free(recnum[p]);}
free(recnum);free(recsum);free(chack);free(n);free(user);mv();system("pause");return 0;}
void submenu(int i){extern int count;int main();int sel;puts("");mv();mv();mv();printline('-',29);mv();mv();puts("         작업을 선택하세요");mv();mv();mv();printline('-',29);mv();mv();puts("       [1].   계속 진행");mv();mv();puts("       [2].   기록 보기");mv();mv();puts("       [3]. 메인으로 이동");mv();mv();mv();printline('-',29);mv();mv();printf("         :");scanf("%d",&sel);switch(sel){case 1:break;case 2:system("cls");history(count,i);break;case 3:system("cls");main();break;}}
