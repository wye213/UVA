#include <stdio.h>
#include <math.h>

int main(){
    int coun=1,i;
    double x,y,z;
    while((scanf("%d", &i) != EOF) && i){
        scanf("%lf %lf %lf", &x, &y, &z);
        if(i == 1)printf("Case %d: %.3lf %.3lf\n", coun++, z*(x+y)/2,  (y-x)/z);
        else if(i == 2)printf("Case %d: %.3lf %.3lf\n", coun++, 0.5*(y*y-x*x)/z, (y-x)/z);
        else if(i == 3){
            double v = sqrt(x*x+2*y*z);
            printf("Case %d: %.3lf %.3lf\n", coun++, v, (v-x)/y);
        }
        else{
            double u = sqrt(x*x-(2*y*z));
            printf("Case %d: %.3lf %.3lf\n", coun++, u, (x-u)/y);
        }
    }
    return 0;
}
