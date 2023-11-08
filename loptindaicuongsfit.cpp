//#include <bits/stdc++.h>
//
//using namespace std;
//
//int check(int n){
//	if(n%2==0) return 1;
//	return 0;
//}
//
//int main (){
//	int n;
//	scanf("%d",&n);
//	if(check){
//		printf("%d",n);
//		printf("la so chan");
//	}else {
//		printf("%d",n);
//		printf(" la so le");
//	}
//	
//	return 0;
//} 

//fabs() tri tyuet doi float
//abs() tri tuyet doi int
//ceil() lam tron xuong
//exp(x) tinh e^x
//strlen(s) do dai 


#include <stdio.h>

using namespace std;

int main(){
	int n, t, nm ;
	printf("nhap ngay thang nam : ");
	scanf("%d %d %d" , &n, &t, &nm);
	
	if(n>0 && n<32 && t>0 && t<13 && nm==2020){
	switch(t){
		case 1:
		printf(" %d ngay" , n); 
		break;
		case 2:
			if(n<30) 
		printf( " %d ngay" , n+31); else printf(" khong hop le ");
		break;
		case 3:
		printf( " %d ngay" , n+60);
		break;
		case 4:
			if (n<31)
		printf(" %d ngay", n+91); 
		break;
		case 5:
		printf(" %d ngay", n+121);
		break;
		case 6:
		printf(" %d ngay", n+152);
		break;
		case 7:
		printf(" %d ngay", n+183);
		break;
		case 8:
			if (n<31)
		printf(" %d ngay", n+214); else printf(" khong hop le ");
		break;
		case 9:
		printf(" %d ngay", n+244);
		break;
		case 10:
		printf(" %d ngay", n+275);
		break;
		case 11:
			if (n<31)
		printf(" %d ngay", n+306);else printf(" khong hop le ");
		break;
	default :
		printf(" %d ngay", n+336);
  }
  
}else printf(" khong hop le ");

	return 0;
}
 








































