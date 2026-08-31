#include <stdio.h>
#include <math.h>

int main() {
    int op; double a, b;
    while(1) {
        printf("\n--- CALCULADORA ---\n");
        printf(" 1: +    6: x^y    11: sen(x)  16: e^x\n");
        printf(" 2: -    7: raiz   12: cos(x)  17: |x|\n");
        printf(" 3: *    8: raiz3  13: tan(x)  18: 1/x\n");
        printf(" 4: /    9: x!     14: log10   19: max\n");
        printf(" 5: %%    10: x%% y  15: ln(x)   20: min\n");
        printf(" 0: Sair\n-------------------\nOpcao: ");
        
        scanf("%d", &op);
        if(op==0) break;
        if(op<1 || op>20) continue;
        
        printf("Valor 1: "); scanf("%lf", &a);
        if((op>0 && op<7) || op==10 || op==19 || op==20) { 
            printf("Valor 2: "); scanf("%lf", &b); 
        }

        printf("=> Resultado: ");
        switch(op) {
            case 1: printf("%g", a+b); break; case 2: printf("%g", a-b); break; 
            case 3: printf("%g", a*b); break; case 4: b==0?printf("erro"):printf("%g", a/b); break;
            case 5: b==0?printf("erro"):printf("%d", (int)a%(int)b); break;
            case 6: printf("%g", pow(a,b)); break; case 7: printf("%g", sqrt(a)); break;
            case 8: printf("%g", cbrt(a)); break; 
            case 9: { double f=1; for(int i=1; i<=a; i++) f*=i; printf("%g", f); break; }
            case 10: printf("%g", (a*b)/100); break; case 11: printf("%g", sin(a)); break;
            case 12: printf("%g", cos(a)); break; case 13: printf("%g", tan(a)); break;
            case 14: printf("%g", log10(a)); break; case 15: printf("%g", log(a)); break;
            case 16: printf("%g", exp(a)); break; case 17: printf("%g", fabs(a)); break;
            case 18: a==0?printf("erro"):printf("%g", 1/a); break; 
            case 19: printf("%g", fmax(a,b)); break; case 20: printf("%g", fmin(a,b)); break;
        }
        printf("\n");
    }
    return 0;
}