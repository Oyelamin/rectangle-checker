#include <stdio.h>

char *rightAngledChecker(int fAngleDegree, int sAngleDegree)
{
    int angleSum = fAngleDegree + sAngleDegree;
    int rightAngledDegree = 90;
    int triangleDegree = 180;

    if(angleSum > triangleDegree) return "This is not a triangle";

    return angleSum != rightAngledDegree ? "This cannot be a right angled triangle" : "This is definitely a right angled triangle";
}

int main()
{
    int f_angle_degree;
    int s_angle_degree;

    printf("Enter first degree: ");
    scanf("%d", &f_angle_degree); // NOLINT(*-err34-c)

    printf("Enter second degree: ");
    scanf("%d", &s_angle_degree); // NOLINT(*-err34-c)

    char *isRightAngled = rightAngledChecker(f_angle_degree, s_angle_degree);
    printf("%s", isRightAngled);

    return 0;
}
