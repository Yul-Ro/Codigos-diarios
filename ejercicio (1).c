int main () { 
int P = 1;
int Q = 0;
int R = 1;
int T = 0;

printf(" True && False : %d\n" ,(1 && 1));
printf(" False || False : %d\n" ,(0 || 0));
printf("True && False || true && false %d\n" , (1&&0 || 1&&0));
printf("true ^ false ^ true ^ false %d\n " , ( 1 ^ 0 ^ 1 ^0));
printf("! false && ! false %d\n", (!0 && !0));
printf("%d\n" , !!! P);
}