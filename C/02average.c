#include <stdio.h>

//입출력장치로부터 학생들의 키를 입력받아 키의 평균과 구간별 학생의 수를 구하는 프로그램
// int main()
// {
//     int i, sum=0, cnt_1=0,cnt_2=0,cnt_3=0;
//     int height[5];
//     int size = sizeof(height)/sizeof(height[0]);
//     for(i=0;i<size;i++){
//         printf("%d번 학생의 키를 입력하세요 :", ㉠);
//         scanf("%d", ㉡);
//         sum += height[i];
//         if(㉢)
//             cnt_1+=1;
//         else if(height[i]>150)
//             cnt_2+=1;
//         else
//             cnt_3+=1;
//     }
//     printf("\n");
//     printf("우리 반 학생 평균키:%d\n", ㉣);
//     printf("170cm 이상의 학생 수 : %d\n", cnt_1)
//     printf("151~169cm의 학생 수 : %d\n", cnt_2)
//     printf("150cm 이하의 학생 수 : %d\n", cnt_3)

//     return 0;
// }

/*---------------------------------------------------------*/
// 정답
/*---------------------------------------------------------*/
// ㉠ ㉡ ㉢ ㉣ 들어갈 내용은?
// ㉠ : i+1
// ㉡ : &height[i]
// ㉢ : height[i]>=170
// ㉣: (sum/size)

int main()
{
    int i, sum=0, cnt_1=0,cnt_2=0,cnt_3=0;
    int height[5];
    int size = sizeof(height)/sizeof(height[0]);
    for(i=0;i<size;i++){
        printf("%d번 학생의 키를 입력하세요 :", i+1);
        scanf("%d", &height[i]);
        sum += height[i];
        if(height[i]>=170)
            cnt_1+=1;
        else if(height[i]>150)
            cnt_2+=1;
        else
            cnt_3+=1;
    }
    printf("\n");
    printf("우리 반 학생 평균키:%d\n", (sum/size));
    printf("170cm 이상의 학생 수 : %d\n", cnt_1);
    printf("151~169cm의 학생 수 : %d\n", cnt_2);
    printf("150cm 이하의 학생 수 : %d\n", cnt_3);

    return 0;
}

//입출력장치로부터 학생들의 점수를 입력받아서 총점과 평균을 구하는 C프로그램이다.
//100보다 큰 수를 입력했을 때, 입력을 완료하고 출력하시오.

// int main () {
//   int score=0, m=0, sum=0;
//   while (1)
//   {
//     printf("학생의 점수를 입력하시오");
//     scanf("%d", &score);
//     if(㉠)
//       ㉡;
//     m=㉢;
//     sum = sum + score;
//   }
//   printf("\n입력학생수는 %d입니다\n",m);
//   printf("점수 합계는 %d입니다.\n",sum);
//   printf("평균점수는 %d입니다.\n",㉣);

//   return 0;
// }

/*---------------------------------------------------------*/
// 정답
/*---------------------------------------------------------*/
// ㉠ ㉡ ㉢ ㉣ 들어갈 내용은?
// ㉠ : score>100
// ㉡ : break
// ㉢ : m+1
// ㉣: sum/m

int main () {
  int score=0, m=0, sum=0;
  while (1)
  {
    printf("학생의 점수를 입력하시오 : ");
    scanf("%d", &score);
    if(score>100)
      break;
    m=m+1;
    sum = sum + score;
  }
  printf("\n입력학생수는 %d입니다\n",m);
  printf("점수 합계는 %d입니다.\n",sum);
  printf("평균점수는 %d입니다.\n",sum/m);

  return 0;
}