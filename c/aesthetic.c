#include <stdio.h>

#define N (int) (sizeof(a) / sizeof(a[0]))

int main() {
    int i = 1, n;
    char chr, a[20] = {0};

    while (1) {
        printf("\nEscribe algo (20 caracteres minimo): ");
        for (n = 0, chr = getchar(); chr != '\n'; i++, n++, chr = getchar())
            a[n] = chr;
        if (i > N) {
            printf("Maximo 20 caracteres. Ingreso %d caracteres.\n", i);
            printf("Intentelo de nuevo.\n");
            for (n = 0; n < N; n++)
                a[n] = 0;
            i = 1;
            continue;
        }
        break;
    }

    printf("AESTHETIC:");
    for (n = 0; n < N; n++)
            printf(" %c", a[n]);
    printf("\n");

    return 0;
}