void mv(){printf("     ");}
void mkrandnum(int i){extern int*n;int p,q=0;n=(int*)malloc(sizeof(int)*i+1);srand(time(NULL));n[0]=rand()%10;for(p=1;p<=i;p++){n[p]=rand()%10;for(q=0;q<p;q++){if(n[p]==n[q]|n[0]==n[p]){p--;break;}}}}
void getusernum(int i){extern int*user;extern int tempcode;int p,q;user=(int*)malloc(sizeof(int)*i+1);puts("");if(tempcode!=1){mv();printline('-',46);puts("           자리수 만큼 한 자리씩 입력해주세요.");mv();printline('-',46);puts("");}
for(p=0;p<=i;p++){printf("     %d의 자리 : ",i+1-p);scanf("%d",&user[p]);if(user[p]>=10){puts("     10미만의 수만 입력가능합니다.");p--;}
if(user[p]==0){for(q=1;q<p;q++){if(user[p]==user[q]){puts("     숫자가 중복되었습니다.");puts("      다른 수를 넣어주세요.");p--;break;}}}else for(q=-1;q<p;q++){if(user[p]==user[q]){puts("     숫자가 중복되었습니다.");puts("      다른 수를 넣어주세요.");p--;break;}}}}
void check(int i){extern int*n;extern int*user;extern int onoff;extern int Scount;extern int Bcount;Scount=0;Bcount=0;int p=0,q=0;for(p=0;p<=i;p++){for(q=0;q<=i;q++){if(n[p]==user[q]){if(p==q)Scount++;else Bcount++;}}}
mv();printline('-',46);printf("     결과 : ");if(Scount==0&Bcount==0){printf("out");puts("");}else{printf("%dS, %dB",Scount,Bcount);puts("");}
if(Scount==i+1)onoff=0;}
void recorder(int c,int i){int pack,p;extern int*user;extern int**recnum;extern int*recsum;extern int Scount,Bcount;recnum[c]=(int*)malloc(sizeof(int)*i);for(p=0;p<=i;p++){recnum[c][p]=user[p];}
pack=(Scount*10)+Bcount;puts("");recsum[c]=pack;}
void history(int count,int i){extern int**recnum;extern int*recsum;int p,c;mv();printline('-',40);puts("                      기록보기 ");mv();printline('-',40);for(c=count;c>=1;c--){printf("     [%d]",c);printf(" | ");for(p=0;p<=i;p++){printf("%d",recnum[c][p]);}
printf(" | ");printf("%dS %dB",recsum[c]/10,recsum[c]%10);puts("");}
mv();printline('-',40);puts("");mv();system("pause");}
int xten(int n){int p,sum=1;if(n!=0){for(p=1;p<=n;p++){sum*=10;}}
return sum;}
void printline(char ss,int num){int p;for(p=1;p<=num;p++)
printf("%c",ss);printf("\n");}
