#include <stdio.h>

// c언어로 내림차순 버블정렬 알고리즘을 구현한 함수이다.
// [?]에 들어갈 if문의 조건으로 올바른 것은?
// (단, size는 1차원 배열인 value의 크기이다.)

// void BubbleSorting(int *value, int size) {
//   int x, y, temp;
//   for (x = 0; x < size; x++){
//     for(y = 0; y < size-x-1; y++){
//       if ( [?] ) {
//         temp = value[y];
//         value[y] = value [y+1];
//         value[y+1] = temp;
//       }
//     }
//   }
// }

/*---------------------------------------------------------*/
// 정답
/*---------------------------------------------------------*/
// [?]에 들어갈 말은?
// value[y] < value[y+1]

void BubbleSorting(int *value, int size) {
  int x, y, temp;
  for (x = 0; x < size; x++){
    for(y = 0; y < size-x-1; y++){
      if ( value[y] < value[y+1] ) {
        temp = value[y];
        value[y] = value [y+1];
        value[y+1] = temp;
      }
    }
  }
}