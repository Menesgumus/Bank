#include <stdio.h>

int main() {
    int hesap_numarasi, sifre;
    double bakiye = 1000.0;

    printf("Lutfen hesap numaranizi girin: ");
    scanf("%d", &hesap_numarasi);

    printf("Lutfen sifrenizi girin: ");
    scanf("%d", &sifre);

    if (hesap_numarasi == 12345 && sifre == 6789) {
        int islem;
        printf("\n1. Bakiye sorgulama\n2. Para cekme\n3. Para yatirma\n");
        printf("Lutfen yapmak istediginiz islemi secin: ");
        scanf("%d", &islem);

        switch (islem) {
            case 1:
                printf("Bakiyeniz: %.2f TL\n", bakiye);
                break;
            case 2:
                double cekilen_miktar;
                printf("Cekmek istediginiz miktar: ");
                scanf("%lf", &cekilen_miktar);
                if (cekilen_miktar > 0 && cekilen_miktar <= bakiye) {
                    bakiye -= cekilen_miktar;
                    printf("Islem basarili. Kalan bakiye: %.2f TL\n", bakiye);
                } else {
                    printf("Gecersiz islem. Lutfen gecerli bir miktar girin.\n");
                }
                break;
            case 3:
                double yatirilan_miktar;
                printf("Yatirmak istediginiz miktar: ");
                scanf("%lf", &yatirilan_miktar);
                if (yatirilan_miktar > 0) {
                    bakiye += yatirilan_miktar;
                    printf("Islem basarili. Yeni bakiye: %.2f TL\n", bakiye);
                } else {
                    printf("Gecersiz islem. Lutfen gecerli bir miktar girin.\n");
                }
                break;
            default:
                printf("Gecersiz islem secimi.\n");
                break;
        }
    } else {
        printf("Gecersiz hesap numarasi veya sifre.\n");
    }

    return 0;
}
