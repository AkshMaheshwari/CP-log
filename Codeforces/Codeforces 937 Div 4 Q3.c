#include <stdio.h>

void convertTime(int hh, int mm) {
    char period[3];
    
    
    if (hh >= 12) {
        if (hh > 12) hh -= 12;  
        snprintf(period, sizeof(period), "PM");
    } else {
        if (hh == 0) hh = 12;   
        snprintf(period, sizeof(period), "AM");
    }

    
    printf("%02d:%02d %s\n", hh, mm, period);
}

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int hh, mm;
        scanf("%d:%d", &hh, &mm);  
        convertTime(hh, mm);
    }

    return 0;
}
