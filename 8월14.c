// #include <stdio.h>

//     첫번째 과제

// int main() {

//     int T;
//     int x1, x2, y1, y2, r1, r2;
//     int r_sum, r_sub, 

//     scanf_s("%d", &T); 

//     for(int i = 0; i < T; ++i){
//         scanf_s("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
//         int r_sum = r1 + r2;
//         int r_sub = r1 - r2;
//     }



//     return 0;
// }

    //2번째 과제

    








    //3번째 과제

// int main() {

//     int E, S, M;
//     int e1 =1 , s1 = 1, m1 = 1;         //초기화되지 않은 지역변수 사용?
//     scanf_s("%d %d %d", &E, &S, &M);

//     for (int i = 1; ; i++) {
//         e1++;
//         s1++;
//         m1++;       //이거
//         if (e1 == 16) {
//             e1 = 1;
//         }
//         if (s1 == 29) {
//             s1 = 1;
//         }
//         if (m1 == 20) {
//             m1 = 1;
//         }
//         if (E == e1 && S == s1 && M == m1) {
//             printf("%d", i + 1);
//             break;
//         }
//     }

//     return 0;
// }