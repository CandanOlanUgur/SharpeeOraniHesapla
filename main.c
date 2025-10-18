#include <stdio.h>

int hss_deger = 0;
int yillk_getiri = 0;
int faiz_oran = 0;
int stndrt_sapma = 0;
double sharpee_orani = 0.0;

int main(void) {

    printf("\n--Sharpee orani hesapla--\n");


    printf("Alinacak hissenin degerini girin:");
    scanf("%d",&hss_deger);

    printf("Hissenin yillik ortalama getirisini girin (%% deger girin): ");
    scanf("%d",&yillk_getiri);

    printf("Risksiz faiz orani girin (%% deger girin): ");
    scanf("%d",&faiz_oran);

    printf("Standart sapma girin (%% deger): ");
    scanf("%d",&stndrt_sapma);

    printf("\n----------------------------------\n");

    printf("hisse deger        = %d TL\n",hss_deger);
    printf("Yillik getiri      = %%%d\n", yillk_getiri);
    printf("Risksiz Faiz orani = %%%d\n", faiz_oran);
    printf("Standart sapma     = %%%d\n", stndrt_sapma);

    sharpee_orani = yillk_getiri - faiz_oran;
    sharpee_orani = sharpee_orani / stndrt_sapma;

    printf("----------------------------------");

    printf("\n (%d%% - %d%%) / %d%% = %lf\n", yillk_getiri, faiz_oran, stndrt_sapma, sharpee_orani);

    printf("Sharpe orani = %lf\n", sharpee_orani);

    if (sharpee_orani < 1) {
        printf("\n--> Deger kotu\n");
    }

    else if (sharpee_orani >= 1&& sharpee_orani < 2 ) {
        printf("\n--> Deger iyi\n");
    }

    else if (sharpee_orani >= 2 && sharpee_orani < 3 ) {
        printf("\n--> Deger cok iyi\n");
    }

    else {
        printf("--> Deger mukemmel");
    }


    return 0;
}
