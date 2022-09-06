#include <stdio.h>

int main(void)
{
  int result;
  int num1;
  printf("정수 하나를 입력하세요: "); 
  scanf("%d", &num1);
  result=num1*num1;
  printf("%d의 제곱의 결과=%d", num1, num1*num1);
  return 0;
  } //정수의 제곱
