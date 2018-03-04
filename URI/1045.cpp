#include <bits/stdc++.h>
using namespace std;

int main(){
	double v[3];
	scanf("%lf %lf %lf",&v[0],&v[1],&v[2]);
	sort(v,v+3,greater<double>());
	if(v[0] >= v[1] + v[2]) printf("NAO FORMA TRIANGULO\n");
	else{	
		if(v[0]*v[0] == v[1]*v[1] + v[2]*v[2]) printf("TRIANGULO RETANGULO\n");
		if(v[0]*v[0] > v[1]*v[1] + v[2]*v[2]) printf("TRIANGULO OBTUSANGULO\n");
		if(v[0]*v[0] < v[1]*v[1] + v[2]*v[2]) printf("TRIANGULO ACUTANGULO\n");
		if(v[0] == v[1] && v[0] == v[2]) printf("TRIANGULO EQUILATERO\n");
		if((v[0] == v[1] && v[0] != v[2] ) || (v[0] == v[2] && v[0] != v[1] ) || (v[2] == v[1] && v[0] != v[2] )) printf("TRIANGULO ISOSCELES\n");
	return 0;
	}
	
}
