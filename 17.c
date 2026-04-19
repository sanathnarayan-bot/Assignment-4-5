#include <stdio.h>

int main() {
    FILE *f1, *f2, *f3, *res;
    int p, c, m;

    f1 = fopen("Physics.txt", "r");
    f2 = fopen("Chemistry.txt", "r");
    f3 = fopen("Maths.txt", "r");
    res = fopen("Result.txt", "w");

    while(fscanf(f1,"%d",&p)!=EOF &&
          fscanf(f2,"%d",&c)!=EOF &&
          fscanf(f3,"%d",&m)!=EOF) {

        float percent = (p+c+m)/3.0;
        fprintf(res,"%.2f\n", percent);
    }

    fclose(f1); fclose(f2); fclose(f3); fclose(res);
    return 0;
}
