#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle{
	int a;
	int b;
	int c;
};
typedef struct triangle triangle;

void sort_by_area(triangle* tr, int n) {
    int k;
    double area[n], p, temp[3], temp_area;
    for(int i = 0;i < n; i++){
        p = ((tr[i].a) + (tr[i].b) + (tr[i].c))/2.0;
        area[i] = sqrt(p * (p - tr[i].a) * (p - tr[i].b) * (p - tr[i].c));    
    }
    for(int i = 0;i < n; i++){
        for(int j = i + 1; j < n; j++){
		if(area[i] > area[j]){
		    temp[0] = tr[i].a;
		    temp[1] = tr[i].b;
		    temp[2] = tr[i].c;
		    tr[i].a = tr[j].a;
		    tr[i].b = tr[j].b;
		    tr[i].c = tr[j].c;
		    tr[j].a = temp[0];
		    tr[j].b = temp[1];
		    tr[j].c = temp[2];

		    temp_area = area[i];
		    area[i] = area[j];
		    area[j] = temp_area;
        	}
    	}
    }
}



int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
