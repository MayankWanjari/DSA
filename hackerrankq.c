#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    
    if (n == 0) {
        printf("Circle");
    }
    else if (n == 3) {
        int a, b, c, A, B, C;
        scanf("%d %d %d %d %d %d", &a, &b, &c, &A, &B, &C);
        if (a>0 && b>0 && c>0 && A>0 && B>0 && C>0 && A<180 && B<180 && C<180 && a<=1000 && b<=1000 && c<=1000){
            if (A + B + C == 180 && (a+b>c) && (b+c>a) && (a+c>b)) {
            if (a == b && b == c) {
                if (A == 60 && B == 60 && C == 60) {
                    printf("Equilateral Triangle\n");
                } else {
                    printf("Invalid Figure\n");
                }
            }
            else if ((a == b && A==B && A!=C) || (b == c && B==C && A!=C) || (a == c && A==C && A!=B)) {
                printf("Isosceles Triangle\n");
            } 
            else if(a!=b && c!=b && A!=B && B!=C && A!=C ){
                printf("Scalene Triangle\n");
            }
            else {
            printf("Invalid Figure\n");
        }
        } 
        else {
            printf("Invalid Figure\n");
        }
    }
        else {
            printf("Invalid Figure\n");
        }
    } 
    else if (n == 4) {
        int a, b, c, d, A, B, C, D;
        scanf("%d %d %d %d %d %d %d %d", &a, &b, &c, &d, &A, &B, &C, &D);
        if(a>0 && b>0 && c>0 && d>0 && A>0 && B>0 && C>0 && D>0 && A<180 && B<180 && C<180 && D<180 && a<=1000 && b<=1000 && c<=1000 && d<=1000){
            if (A + B + C + D == 360 && a+b+c>d && a+b+d>a && a+d+c>b && a+b+d>c) {
            if (a == b && b == c && c == d) {
                if (A == 90 && B == 90 && C == 90 && D == 90) {
                    printf("Square\n");
                } else if (A == C && B == D) {
                    printf("Rhombus\n");
                } else {
                    printf("Invalid Figure\n");
                }
            } 
            else if (a == c && b == d) {
                if (A == 90 && B == 90 && C == 90 && D == 90) {
                    printf("Rectangle\n");
                } else if (A == C && B == D ) {
                    printf("Parallelogram\n");
                } else {
                    printf("Invalid Figure\n");
                }
            } else {
                printf("Invalid Figure\n");
            }
        }
            else {
            printf("Invalid Figure\n");
        }
    } 
        else {
            printf("Invalid Figure\n");
        }
        }
        
    else {
        printf("Invalid Figure\n");
    }

    return 0;
}
