ds#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()

//Bai 1
{
//1
	int n;
	do
	{
		printf ("Nhap vao mot so nguyen N: ");
		scanf ("%d",&n);
		if (n <= 0)
			printf ("Vui long nhap lai so nguyen duong N \n");
	}
	while (n <= 0);
	printf ("Ban da nhap N = %d \n",n);
//2	
	int i;
	printf ("cac so chan nho hon hoac bang %d la: ",n); 
	for (i = 0; i <= n; i += 2)
	{
		printf ("%d ",i); 
	}
	printf ("\n");
//3
	int tong = 0, m = 0; 
	for (i = 1; i <= n; i += 2)
	{
		tong += i;
		m++; 
	}
	if (m > 0)
	{
		float TB = (float)tong / m;
		printf ("TB cong cac so le nho hon hoac bang %d la: %2.f",n,TB); 
	}
	else
	{
		printf ("Ko co so nao thoa man yeu cau de bai"); 
	}
	printf ("\n");
//4
	printf ("Cac so chan chia het cho 5 nho hon hoac bang %d la: ",n); 
	for (i = 0; i <= n; i += 10)  /* 0 la so chan */ 
	{
		printf ("%d ",i);
	}
	printf ("\n");
//5
	int j, kt; 
	printf ("Cac so nguyen to nho hon hoac bang %d la: ",n);
	for (i = 2; i <= n; i++)
	{
		kt = 0;
		for (j = 2; j <= i/2; j++)
		{
			if (i % j == 0)
			kt = 1;
			break; 
		}
		if (kt == 0)
		{
			printf ("%d ",i); 
		} 
	}	
	 
}

//Bai 2
//1
	int n;
	do
	{
		printf ("Nhap vao mot so nguyen N: ");
		scanf ("%d",&n);
		if (n < 0)
		printf ("Vui long nhap lai so nguyen duong N.");
	}
	while (n < 0);
	printf ("So nguyen duong N vua nhap la: %d\n",n);
//2
	int i;
	printf ("cac so chan nho hon hoac bang %d la: ",n);
	for (i = 0; i <= n; i += 2)
	{
		printf ("%d ",i); 
	}
	printf ("\n");
//3
	int tong = 0, m = 0;
	for (i = 3; i <= n; i += 6)
	{
		tong += i;
		m++; 
	}
	if (m > 0)
	{
		float TB = (float)tong / m;
		printf ("TB cong cac so le chia het cho 3 va nho hon hoac bang %d la: %2.f ",n,TB);
	}
	else
	{
		printf ("Ko co ket qua thoa man yeu cau de bai"); 
	}
	printf ("\n"); 
//4
	printf ("Cac so chan va chia het cho 5 nho hon hoac bang %d la: ",n);
	for (i = 0; i <= n; i += 10)
	{
		printf ("%d ",i); 
	}
	printf ("\n");
//5
	int j, kt;  
	printf ("Cac so nguyen to nho hon hoac bang %d la: ",n);
	for (i = 2; i <= n; i++)
	{
		kt = 0; 
		for (j = 2; j < i/2; j++)
		{
			if (i % j == 0)
			kt = 1;
			break; 
		}
		if (kt == 0)
			printf ("%d ",i); 
	}
	printf ("\n"); 
}

//Bai 3 
{
//1
	int n;
	do
	{
		printf ("Nhap vao mot so nguyen N: ");
		scanf ("%d",&n);
		if (n <= 0)
			printf ("Vui long nhap lai so nguyen duong"); 
	}
	while (n <= 0);
	printf ("So nguyen duong vua nhap vao la: %d\n",n);
//2
	int i;
	printf ("Cac so chan nho hon hoac bang %d la: ",n);
	for (i = 0; i <= n; i += 2)
	{
		printf ("%d ",i);
	}
	printf ("\n");
//3
	long long nhan = 1, m =0;
	for (i=1 ; i <= n; i+=2)
	{
		nhan *= i;
		m++; 
	} 
	if (m > 0)
	{
		float TB = pow((float)nhan , 1.0 / m);                            /* de dang cung dc double */ 
		printf ("TB nhan cac so le nho hon hoac bang %d la: %f ", n, TB);
	} 
	else 
	{
		printf ("Khong co so nao thoa man dieu kien");
	}
	printf ("\n"); 
//4
	printf ("Cac so chan va chia het cho 5 nho hon hoac bang %d la: ",n);
	for (i = 0; i <= n; i += 10)
	{
		printf ("%d ",i); 
	}
	printf ("\n");
//5
	int j, kt;
	printf ("Cac so nguyen to nho hon hoac bang %d la: ",n);
	for (i = 2; i <= n; i++)
	{
		kt = 0; 
		for (j = 2; j <= i/2; j++)
		{
			if (i % j == 0)
			kt = 1;
			break; 
		}
		if (kt == 0)
		{
			printf ("%d ",i); 
		} 
	}
	printf ("\n"); 
}

//Bai 4
//1
	int m;
	do
	{
		printf ("Nhap vao mot so nguyen M: ");
		scanf ("%d",&m);
		if (m < 0)
			printf ("Vui long nhap lai so nguyen duong M."); 
	}
	while (m < 0);
	printf ("So nguyen duong M vua nhap nhap vao la: %d\n",m);
//2
	int i;
	printf ("Cac so le nho hon hoac bang %d la: ",m);
	for (i = 1; i <= m; i += 2)
	{
		printf ("%d ",i);
	}
	printf ("\n");
//3
	int dem = 0;
	for (i = 0; i <= m; i += 6)
	{
		dem++;  
	}
	printf("So luong cac so chan chia het cho 3 nho hon hoac bang %d là: %d\n", m, dem);
//4
	int j;
	printf ("Khung hinh vuong cac dau * voi kich thuoc %d*%d la: \n",m,m);
	for (i = 1; i <= m; i++)
	{
		for (j = 1; j <= m; j++)
		{
			printf ("*"); 
		}
		printf ("\n"); 
	}
	printf ("\n");
//5
	int tong = 0; 
	for (i = 1; i <= m/2; i++)
	{
		if(m % i == 0)
		tong += i;
	}
	if (tong == m)
	{
		printf ("%d la so hoan hao.",m);
	} 
	else
	{
		printf ("%d ko phai la so hoan hao.",m);
	}
	printf ("\n"); 
}

//Bai 5 
{
//1 
	int m;
	do
	{
		printf ("Nhap vao mot so nguyen M: ");
		scanf ("%d",&m);
		if (m <= 0)
			printf ("Vui long nhap lai so nguyen duong M."); 
	}
	while (m < 0);
	printf ("So nguyen duong M vua nhap vao la: %d\n",m);
//2
	int i, j, kt;
	printf ("Cac so le la so nguyen to nho hon hoac bang %d la: ",m);
	for (i = 2; i <= m; i++)
	{
		kt = 0;
		for (j = 2; j <= i / 2; j++)
		{
			if (i % j == 0)
			kt = 1;
			break; 
		}
		if (kt == 0 && i % 3 == 0)
		{
			printf ("%d ",i);
		}
	}
	printf ("\n"); 
//3
	int dem = 0;
	for (i = 0; i <= m; i += 6)
	{
		dem++; 
	}
	printf ("So luong so chan chia het cho 3 nho hon hoac bang %d la: %d",m,dem);
	printf ("\n"); 
//4	
	printf ("Khung hinh vuong voi cac dau * voi kich thuoc %d*%d la: ",m,m); 
	for (i = 1; i <= m; i++)
	{
		for (j = 1; j <= m; j++)
		{
			printf ("*"); 
		}
		printf ("\n");
	}
	printf ("\n");
//5
	int tong = 0;
	for (i = 1; i <= m/2; i++)
	{ 
		if (m % i == 0);
		tong += i; 
	}
	if (tong == m)
	{
		printf ("%d la so hoan hao",m); 
	}
	else
	{
		printf ("%d ko phia so hoan hao",m); 
	} 
}

//Bai 6
{
//1
	int m;
	do
	{
		printf ("Nhap vao mot so nguyen M: ");
		scanf ("%d",&m);
		if (m <= 0)
			printf ("Vui long nhap lai so nguyen duong M: "); 
	}
	while (m <= 0);
	printf ("So nguyen duong M vua nhap bao la: %d\n",m);
//2
	int i;
	printf ("Cac so le nho hon hoac bang %d la: ",m);
	for (i = 1; i <= m; i += 2);
	{
		printf ("%d ",i);
	}
	printf ("\n");
//3
	int dem = 0; 
	for (i = 1; i*i <= m; i++)
	{
		if (i*i % 2 != 0)
		{
			dem++;
		} 
	}
	printf ("So luong cac so le la so ch?nh phuong nho hon hoac bang %d la: %d\n",m,dem);
//4
	int j; 
	printf ("khung hinh vuong cac dau * voi kich thuoc %d*%d la: ",m,m);
	for (i = 1; i <= m; i++)
	{
		for (j = 1; j <= m; j++)
		{
			printf ("*"); 
		}
		printf ("\n"); 
	} 
	printf ("\n");
//5
	int tong = 0; 
	for (i = 1; i <= m/2; i++)
	{
		if (m % i == 0)
		tong += i; 
	}
	if (tong == m)
	{
		printf ("%d la so hoan hao.",m);
	}
	else
	{
		printf ("%d ko phai la so hoan hao.",m); 
	}
	printf ("\n");
}

//Bai 7
{
//1
	int m,n;
	do
	{
		printf ("Nhap vao mot so nguyen M: ",m);
		scanf ("%d",&m);
		printf ("Nhap vao mot so nguyen N: ",n);
		scanf ("%d",&n);
		if (m <= 0 || n <= 0)
			printf ("Ca M va N phai la so nguyen duong. Vui long nhap lai.\n"); 
	}
	while (m <= 0 || n <= 0);
	printf ("So nguyen duong M vua nhap la: %d va so nguyen duong N vua nhap vao la: %d \n",m,n);
//2
	printf ("Cac uoc so chung cua hai so %d va %d la: ",m,n); 
	int min = m;
	if (n < m)
	{
		min = n; 
	}
	for (int i = 1; i <= min; i++)
	{
		if (m % i == 0 && n % i == 0)
		{
			printf ("%d ",i); 
		} 
	}
	printf ("\n");
//3
	int a, b, t, ucln,bcnn;
	a = m;
	b = n;
	while (b != 0)
	{
		t = b;
		b = a % b;
		a = t; 
	}
	ucln = a;
	printf ("Uoc chung lon nhat cua %d va %d la: %d \n",m,n,ucln);
//4 
	bcnn = (m*n)/ucln;
	printf ("Boi chung nho nhat cua %d va %d la: %d \n",m,n,bcnn);
//5
	printf ("Ta co ma tran la: \n");
	int i, j;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
		{
			printf ("%d ",i*j);			/* N(chi so hang) * M(chi so cot) */ 
		}
		printf ("\n"); 
	} 
	printf ("\n"); 	
}

//Bai 8
{
//1
	int m, n;
	do
	{
		printf ("Nhap vao mot so nguyen M: ",m);
		scanf ("%d",&m);
		printf ("Nhap vao mot so nguyen N: ",n);
		scanf ("%d",&n);
		if (m <= 0 || n <= 0)
			printf ("Ca M va N phai la so nguyen duong. Vui long nhap lai."); 
	}
	while (m <= 0 || n <= 0);
	printf ("So nguyen duong M vua nhap vao la: %d va so nguyen duong N vua nhap vao la: %d\n",m,n);
//2
	printf ("Cac uoc so chung cua hai so %d va %d la: ",m,n); 
	int min = m;
	if (n < m)
	{
		n = min; 
	}
	for (int i = 1; i <= min; i++)
	{
		if (m % i == 0 && n % i == 0)
		{
			printf ("%d ",i);
		} 
	}
	printf ("\n");
//3
	int a, b, t, ucln, bcnn;
	a = m;
	b = n;
	while (b != 0)
	{
		t = b;
		b = a % b;
		a = t; 
	}
	ucln = a;
	printf ("Uoc chung lon nhat cua hai so %d va %d la: %d ",m,n,ucln);
//4
	bcnn = (m*n) / ucln;
	printf ("Boi chung nho nhat cua hai so %d va %d la: %d ",m,n,bcnn);
//5
	printf ("Ta co ma tran la: \n");
	int i, j;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
		{
			printf ("%d ",i+j); 
		}
		printf ("\n"); 
	}
	printf ("\n"); 
} 

//Bai 9
{
//1
	int m,n;
	do
	{
		printf ("Nhap vao mot so nguyen M: ");
		scanf ("%d",&m);
		printf ("Nhap vao mot so nguyen N: ");
		scanf ("%d",&n);
		if (m <= 0 || n <= 0)
			printf ("Ca M va N phai la so nguyen duong. Vui long nhap lai.");
	}
	while (m <= 0 || n <= 0);
	printf ("So nguyen duong M vua nha vao la: %d va so nguyen duong N vua nhap vao la: %d\n",m,n);
//2
	printf ("Cac uoc chung cua hai so %d va %d la: ",m,n);
	int min = m;
	if (n < m)
	{
		min = n; 
	}
	for (int i = 1; i <= min; i++)
	{
		if (m % i == 0 && n % i == 0)
		{
			printf ("%d ",i);
		}
	}
	printf ("\n");
//3
	int a, b, t, ucln, bcnn;
	a = m;
	b = n;
	while (b != 0)
	{
		t = b;
		b = a % b;
		a = t; 
	}
	ucln = a;
	printf ("Uoc so chung lon nhat cua hai so %d va %d la: %d\n",m,n,ucln);
//4
	bcnn = b;
	printf ("Boi so chung nho nhat cua hai so %d va %d la: %d\n",m,n,bcnn);
//5
	printf ("Ta co ma tran la: \n"); 
	int i,j;
	for(i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
		{
			printf ("%d ",i+(j-1)*n);
		}
		printf ("\n"); 
	}
	printf ("\n");
}

//Bai 10
{
//1 
	int m,n;
	do
	{
		printf ("Nhap vao mot so nguyen M: ");
		scanf ("%d",&m);
		printf ("Nhap vao mot so nguyen N: ");
		scanf ("%d",&n);
		if (m <= 0 || n <= 0)
			printf ("Ca M va N phai la so nguyen duong. Vui long nhap lai.\n");
	}
	while (m <= 0 || n <= 0);
	printf ("So nguyen duong M vua nhap vao la: %d va so nguyen duong N vua nhap vao la: %d\n",m,n);
//2
	int i; 
	if (m < n)
	{
		printf ("Cac so nguyen thuoc khoang [%d, %d] la: ",m,n);
		for (i = m; i <= n; i++)
		{
			printf ("%d ",i); 
		} 
	}
	else
	{
		printf ("Cac so nguyen thuoc khoang [%d, %d] la: ",n,m);
		for (i = n; i <= m; i++) 
		{
			printf ("%d ",i);
		} 
	}
	printf ("\n");
//3
	int tong = 0; 
	if (m < n)
	{
		printf ("Tong cac so chan thuoc khoang [%d, %d] la: ",m,n);
		for (i = m; i <= n; i++)
		{
			if (i % 2 == 0) 
			tong += i;
		}
		printf ("%d",tong);  
	}
	else
	{
		printf ("Tong cac so chan thuoc khoang [%d, %d] la: ",n,m);
		for (i = n; i <= m; i++)
		{
			if (i % 2 == 0) 
			tong += i;
		}
		printf ("%d",tong);
	}
	printf ("\n");
//4
	float x, B;
	printf ("Nhap vao tu ban phim so thuc X: ");
	scanf ("%f",&x);  
	B = pow(x,m) + exp(n);
	printf ("Gia tri cua bieu thuc B = x^M + e^N = %2.3f",B);
	printf ("\n");
//5
	printf ("Ta co ma tran la: \n"); 
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			printf ("%d ",i*i + j*j); 
		}
		printf ("\n"); 
	}
	printf ("\n "); 
}

//Bai 11
{
//1
	int m,n;
	do
	{
		printf ("Nhap vao mot so nguyen M: ");
		scanf ("%d",&m);
		printf ("Nhap vao mot so nguyen N: ");
		scanf ("%d",&n);
		if (m <= 0 || n <= 0)
			printf ("Ca M va N deu phai la so nguyen duong. Vui long nhap lai."); 
	}
	while (m <= 0 || n <= 0);
	printf ("So nguyen duong M vua nhap vao la: %d va so nguyen duong N vua nhap vao la: %d\n",m,n);
//2
	int i, j, kt;
	if (m < n)
	{
		printf ("Cac so nguyen to thuoc khoang [%d, %d] la: ",m,n);
		for (i = m; i <= n; i++)
		{
			kt = 0; 
			for (j = 2; j <= i/2; j++)
			{
				if (i % j == 0)
				{
					kt = 1;
					break; 
				}
			}
			if (kt == 0)
			{
				printf ("%d ",i);
			} 
		} 
	}
	else
	{
		printf ("Cac so nguyen to thuoc khoang [%d, %d] la: ",n,m);
		for (i = n; i <= m; i++)
		{
			kt = 0; 
			for (j = 2; j <= i/2; j++)
			{
				if (i % j == 0)
				{
					kt = 1;
					break; 
				}
			}
			if (kt == 0)
			{
				printf ("%d ",i); 
			} 
		} 
	}
	printf ("\n");
//3
	int tong = 0;
	if (m < n)
	{
		for (i = m; i <= n; i++)
		{
			if (i % 2 != 0)
			tong += i;
		}
		printf ("Tong cac so le nam trong khoang [%d, %d] la: %d ",m,n,tong);
	}
	else
	{
		for (i = n; i <= m; i++)
		{
			if (i % 2 != 0)
			tong += i;
		}
		printf ("Tong cac so le nam trong khoang [%d, %d] la: %d ",n,m,tong);
	}
	printf ("\n");
//4
	float x, B;
	printf ("Nhap vao so thuc X: ");
	scanf ("%f",&x);
	B = pow(x, m) + exp (n);
	printf ("Gia tri cua bieu thuc B = x^M + e^N la: %2.3f ",B);
	printf ("\n");
//5
	printf ("Ta co ma tran la: \n");
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
		{
			printf ("%d ",i*i + j*j);
		}
		printf ("\n"); 
	}
	printf ("\n"); 
}

//Bai 12
{
//1
	int m,n;
	do
	{
		printf ("Nhap vao mot so nguyen M: ");
		scanf ("%d",&m);
		printf ("Nhap vao mot so nguyen N: ");
		scanf ("%d",&n);
		if (m <= 0 || n <= 0)
			printf ("Ca M va N deu can phai la so nguyen duong. Vui long nhap lai."); 
	}
	while (m <= 0 || n <= 0);
	printf ("So nguyen duong M vua nhap vao la: %d va so nguyen duong N vua nham vao la: %d\n",m,n);
//2 
	if (m < n)
	{
		printf ("Cac so nguyen thuoc khoang [%d, %d] la: ",m,n);
		for (int i = m; i <= n; i++)
		{
			printf ("%d ",i);
		} 
	}
	else
	{
		printf ("Cac so nguyen duong thuoc khoang [%d, %d] la: ",n,m);
		for (int i = n; i <= m; i++)
		{
			printf ("%d ",i); 
		} 
	}
	printf ("\n");
//3
	int  nhan = 1, t = 0; 
	if (m < n)
	{
		for (int i = m; i <= n; i++)
		{
			if (i % 2 == 0)
			{
				nhan *= i;
				t++; 
			}
		}
		if (t > 0)
		{
			float TB = pow((float)nhan, 1.0 / t);
			printf ("TB nhan cac so chan trong khoang [%d, %d] la: %2.3f ",m,n,TB); 
		}
		else
		{
			printf ("Ko co gia tri nao thoa man yeu cau de bai."); 
		} 
	}
	else
	{
		for (int i = n; i <= m; i++)
		{
			if (i % 2 == 0)
			{
			nhan *= i;
			t++; 
			}
		}
		if (t > 0)
		{
			float TB = pow((float)nhan, 1.0 / t);
			printf ("TB nhan cac so chan trong khoang [%d, %d] la: %2.3f ",n,m,TB);
		}
		else
		{
			printf ("Ko co gia tri nao thoa man yeu cau de bai.");
		} 
	}
	printf ("\n");
//4
	float x, B;
	printf ("Nhap vao so thuc X: ");
	scanf ("%f",&x);
	B = pow(x,m) + exp(n);
	printf ("Gia tri cua bieu thuc B = x^M + e^N la: %2.3f\n",B);
//5
	printf ("Ta co ma tran la: \n"); 
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			printf ("%d ",i*i + j*j);
		}
		printf ("\n"); 
	}
	printf ("\n"); 
}

//Bai 13
{
//1
	int n;
	do
	{
		printf ("Nhap vao mot so nguyen N: ");
		scanf ("%d",&n);
		if (n <= 0)
			printf ("Vui long nhap lai so nguyen duong N.\n");
	}
	while (n <= 0);
	printf ("So nguyen duong N vua nhap vao la: %d\n",n);
//2 
	float A = 1, x;
	printf ("Nhap vao mot so thuc X: ");
	scanf ("%f",&x);
	for (int i = 1; i <= n; i++)
	{
		A = A + pow(x,i);
	}
	printf ("Gia tri cua bieu thuc A = 1 + x + x^2 + ... + x^N la: %2.1f\n",A);
//3
	printf ("cac so duong chia het cho 5 va nho hon %d la: ",n);
	for (int i = 5; i < n; i += 5) 
	{
		printf ("%d ",i);
	}
	printf ("\n");
//4
	if (sqrt(n)*sqrt(n) == n)
	{
		printf ("%d la so chinh phuong.",n); 
	}
	else
	{
		printf ("%d ko phai la so chuinh phuong.",n); 
	}
	printf ("\n");
//5
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf ("%d ",j);
		}
		printf ("\n"); 
	}
	printf ("\n"); 
}

//Bai 14
{
//1
	int n; 
	do
	{
		printf ("Nhap vao mot so nguyen N: ");
		scanf ("%d",&n);
		if (n <= 0)
			printf ("Vui long nhap lai so nguyen duong N."); 
	}
	while (n <= 0);
	printf ("So nguyen duong N vua nhap vao la: %d\n",n);
//2
	float x, A = 1;
	printf ("Nhap vao mot so thuc X: ");
	scanf ("%f",&x);
	for (int i = 1; i <= n; i++)
	{
		A = A + pow(x,i);
	}
	printf ("Gia tri cua bieu thuc A = 1 + x + x^2 + ... + x^N la: %2.3f\n",A);
//3
	int tong = 0; 
	for (int i = 5; i <= n; i += 5)
	{
		tong += i; 
	}
	printf ("Tong cac so duong chia het cho 5 va nho hon %d la: %d\n",n,tong);
//4
	if (sqrt(n)*sqrt(n) == n)
	{
		printf ("%d la so chinh phuong.",n); 
	}
	else
	{
		printf ("%d ko phai la so chinh phuong.",n);
	}
	printf ("\n");
//5
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf ("%d",j);
		}
		printf ("\n"); 
	}
	printf ("\n"); 
}

//Bai 15
{
//1
	int n;
	do
	{
		printf ("Nhap vao mot so nguyen N: ");
		scanf ("%d",&n);
		if (n <= 0)
			printf ("Vui long nhap lai so nguyen duong N."); 
	}
	while (n <= 0);
	printf ("So nguyen duong N vua nhap vao la: %d\n",n);
//2
	float x, A = 1;
	printf ("Nhap vao so thuc X: ");
	scanf ("%f",&x);
	for (int i = 1; i <= n; i++)
	{
		 A = A + pow(x, i);
	} 
	printf ("Gia tri cua bieu thuc A = 1 + x + x^2 + ... + x^N la: %2.3f\n5",A); 
//3
	int tong = 0, m = 0;
	for (int i = 3; i <= n; i += 6)
	{ 
		tong += i;
		m++; 
	}
	if (m > 0)	
	{
		float TB = (float)tong / m; 
		printf ("TB cong cac so le chia het cho 3 va nho hon hoac bang %d la: %f",n,TB);
	}
	else
	{
		printf ("Ko co so nao thoa man yeu cau de bai."); 
	}
	printf ("\n");
//4
	int i; 
	for (int i = 1; i <= n/2; i++)
	{
		if (i % n == 0)
		break; 
	}
	if (n > i/2)
	{
		printf ("%d la so nguyen to",n); 
	}
	else
	{
		printf ("%d ko phai la so nguyen to"); 
	}
	printf ("\n");
//5
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf ("%d ",i);
		}
		printf ("\n"); 
	}
	printf ("\n"); 
}

//Bai 16
//1
	int n;
	do
	{
		printf ("Nhap vao mot so nguyen N: ");
		scanf ("%d",&n);
		if (n <= 0)
			printf ("Vui long nhap lai sp nguyen duong N."); 
	}
	while (n <= 0);
	printf ("So nguyen duong N vua nhap vao la: %d\n",n);
//2
	int i,tong = 0, m = 0;
	printf ("Tong cac so tu nhien nho hon hoac %d la: ",n);
	for (i = 1; i <= n; i++) 
	{
		tong += i; 
	}
	printf ("%d ",tong);
	printf ("\n");
//3
	int gt = 1;
	for (int i = 1; i <= n; i++)
	{
		gt = gt*i; 
	}
	printf ("Giai thua cua %d la: %d\n",n,gt);
//4
	float x, B = 0;
	printf ("Nhap vao so thuc X: ");
	scanf ("%f",&x); 
	for (int i = 1; i <= n; i++)
	{
		B = B + (exp(i*x) / pow(x,i));
	}
	printf ("Gia tri cua bieu thuc B la: %2.3f\n",B);
//5
	printf ("cac so chinh phuong nho hon hoac bang %d la: ",n); 
	for (int i = 1; i*i <= n; i++)
	{
		printf ("%d ",i*i); 
	}
	printf ("\n"); 
}

//Bai 17
{
//1
	int n;
	do
	{
		printf ("Nhap vao mot so nguyen N: ");
		scanf ("%d",&n);
		if (n <= 0)
			printf ("Vui long nhap lai so nguyen duong N."); 
	}
	while (n <= 0);
	printf ("So nguyen duong N vua nhap vao la: %d\n",n);
//2
	int i, tong = 0, m = 0;
	for (i = 1; i <= n; i++)
	{
		tong += i;
		m++; 
	}
	if (m > 0)
	{
		float TB = (float)tong / m;
		printf ("TB cac so tu nhien nho hon hoac bang %d la: %2.1f",n,TB); 
	}
	else
	{
		printf ("ko co so nao thoa man yeu cau de bai."); 
	}
	printf ("\n"); 
//3
	int gt = 1; 
	for (int i = 1; i <= n; i++)
	{
		gt = gt * i; 
	} 
	printf ("Giai thua cua %d la: %d\n",n,gt);
//4
	float x, B = 1;
	printf ("Nhap vao mot so thuc X: ");
	scanf ("%f",&x);
	for (int i = 1; i <= n; i++)
	{
		B = B + (exp(i*x) / pow(x, i));
	}
	printf ("Gia tri cua bieu thuc B la: %2.3f\n",B);
//5
	printf ("Cac so chinh phuong nho hon hoac bang %d la: ",n); 
	for (int i = 1; i*i <= n; i++ )
	{
		printf ("%d ",i*i);
	}
	printf ("\n");
}

//Bai 18
{
//1
	int n;
	do
	{
		printf ("Nhap vao mot so nguyen duong N: ");
		scanf ("%d",&n);
		if (n <= 0)
			printf ("Vui long nhap lai so nguyen duong N.");
	}
	while (n <= 0);
	printf ("So nguyen duong N vua nhap vao la: %d\n",n);
//2
	int i, tong = 0; 
	for (i = 1; i <= n; i++)
	{
		tong += i; 
	}
	printf ("Tong cac so tu nhien nho hon hoac bang %d la: %d ",n,tong);
//3
	int gt = 1;
	for (int i = 1; i <= n; i++)
	{
		gt = gt*i; 
	}
	printf ("Giai thua cua %d la: %d\n",n,gt);
//4
	float x, B = 1;
	printf ("Nhap vao mot so thuc X: ");
	scanf ("%f",&x);
	for (i = 1; i <= n; i++)
	{
		B = B + (exp(i*x) / pow(x,i)); 
	}
	printf ("Gia tri cua bieu thuc %d la: %2.3f\n",n,B);
//5
	int sum = 0, m = 0; 
	for (int i = 1; i*i <= n; i++)
	{
		sum += (i*i);
		m++; 
	}
	if (m > 0)
	{
		float TB = (float)sum / m;
		printf ("TB cong cac so chinh phuong nho hon hoac bang %d la: %.2f", n, TB); 
	}
	else
	{
		printf ("Ko co so nao thoa man dieu kien de bai."); 
	}
	printf ("\n"); 	
}

//Bai 19
{
//1
	int n;
	do
	{
		printf ("Nhap vao mot so nguyen duong N: ");
		scanf ("%d",&n);
		if (n <= 0)
			printf ("Vui long nhap lai so nguyen duong N.");
	}
	while (n <= 0);
	printf ("So nguyen duong N vua nhap vao la: %d\n",n);
//2
	int i;
	printf ("Cac uoc so cua %d la: ",n);
	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
			printf ("%d ",i); 
	}
	printf ("\n");
//3
	printf ("Cac so le chia het cho 3 va nho hon hoac bang %d la: ",n);
	for (i = 3; i <= n; i += 6)
	{
		printf ("%d ",i);
	}
	printf ("\n"); 
//4
	float A = 0;
	for (i = 1; i <= n; i++)
	{
		A = A + 1 / pow(2, i);
	}
	printf ("Gia tri cua bieu thuc A la: %.3f\n",A);
//5
	int a = 1, b = 1, next = 0;
	printf ("Day fibonaci gom %d phan tu la: ",n); 
	if (n >= a)
		printf ("%d ",a);
	if (n >= b)
		printf ("%d ",b);
	for (i = 3; i <= n; i++) 
	{
		next = a + b;
		printf ("%d ",next);
		a = b;
		b = next; 
	}
	printf ("\n"); 
}

//Bai 20
{
//1
	int n;
	do
	{
		printf ("Nhap vao mot so nguyen duong N: ");
		scanf ("%d",&n);
		if (n <= 0)
			printf ("Vui long nhap lai so nguyen duong N.");
	}
	while (n <= 0);
	printf ("So nguyen duong N vua nhap vao la: %d\n",n);
//2
	int i;
	printf ("Cac uoc so chung cua N la: ");
	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
			printf ("%d ",i);
	}
	printf ("\n");
//3
	printf ("Cac so le chia het cho 3 nho hon hoac bang %d la: ",n);
	for (int i = 3; i <= n; i += 6)
	{
		printf ("%d ",i); 
	}
	printf ("\n");
//4
	float A = 0;
	for (int i = 1; i <= n; i++)
	{
		A = A + (1 / pow(2, i)); 
	}
	printf ("Gia tri cua bieu thuc A la: %.3f\n",A);
//5
	int a = 1, b = 1, next = 0;
	printf ("Day so fibonaci gom %d phan tu la: ",n);
	if (n >= a)
		printf ("%d ",a);
	if (n >= b)
		printf ("%d ",b); 
	for (i = 3; i <= n; i++)
	{
		next = a + b;
		printf ("%d ",next);
		a = b;
		b = next;
	}
	printf ("\n"); 
}

//Bai 21
{
//1
	int n;
	do {
		printf ("Nhap vao mot so nguyen duong N: ");
		scanf ("%d",&n);
		if (n <= 0)
			printf ("Vui long nhap lai so nguyen duong N.\n");
	} while (n <= 0);
	printf ("So nguyen duong N vua nhap vao la: %d\n",n);
//2
	int i, tong = 0, m = 0;
	for (i = 1; i <= n; i++) {
		if (n % i == 0) {
			tong += i;
			m++;
		}
	}
	if (m > 0) {
		float TB = (float)tong / m;
		printf ("TB cong cac uoc so cua %d la: %2.3f ",n,TB);
	} else {
		printf ("Ko co so nao thoa man yeu cau de bai");
	}
	printf ("\n");
//3
	printf ("Cac so le chia het cho 3 va nho hon hoac bang %d la: ",n);
	for (i = 3; i <= n; i += 6) {
		printf ("%d ",i);
	}
	printf ("\n");
//4
	float A = 0;
	for (i = 1; i <= n; i++) {
		A = A + (1 / pow (2, i));
	}
	printf ("Gia tri cua bieu thuc A la: %2.3f\n",A);
//5
	int sum = 2, a = 1, b = 1, next = 0;
	for (int i = 3; i <= n; i++)
	{
		next = a + b;
		sum += next; 
		a = b;
		b = next;
	}
	float TB = (float)sum / n;
	printf ("TB cong cua day so fibonaci gom %d phan tu la: %.2f\n",n,TB);
}

//Bai 22 
{
//1
	int n;
	do
	{
		printf ("Nhap vao mot so nguyen duong N: ");
		scanf ("%d",&n);
		if (n <= 0)
			printf ("Vui long nhap lai so nguyen duong N.\n"); 
	}
	while (n <= 0);
	printf ("So nguyen duong N vua nhap vao la: %d\n",n);
//2
	int i, a[i];
	printf ("Nhap cac phan tu cua mang: \n");
	for (i = 0; i < n; i++)
	{
		printf ("Phan tu thu %d la: ",i + 1);
		scanf ("%d",&a[i]);
	}
//3 
	printf ("Cac phan tu cua mang la: ");
	for (i = 0; i < n; i++)
	{
		printf ("%d ",a[i]); 
	}
	printf ("\n");
//4
	printf ("Cac phan tu le trong mang la: ");
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0)
		{
			printf ("%d ",a[i]); 
		}  
	}
	printf ("\n");
//5
	int min = a[0];
	for (i = 1; i < n; i++)
	{
		if (a[i] % 2 == 0 && a[i] < min)
		{
			min = a[i]; 
		}
	}
	if (a[i] % 2 == 0 && a[i] < min)
	{
		printf ("so chan nho nhat trong mang la: %d",min);
	}
	else
	{
		printf ("mang da nhap ko co phan tu chan."); 
	}
	printf ("\n"); 
}

//Bai 23
{
//1
	int n;
	do
	{
		printf ("Nhap vao mot so nguyen duong N: ");
		scanf ("%d",&n);
		if (n <= 0)
			printf ("Vui long nhap lai so nguyen duong N.\n"); 
	}
	while (n <= 0);
	printf ("So nguyen duong N vua nhap vao la: %d\n",n);
//2
	int i, a[i];
	printf ("Nhap cac phan tu cua mang: \n");
	for (i = 0; i < n; i++)
	{
		printf ("Phan tu thu %d la: ",i + 1);
		scanf ("%d",&a[i]); 
	}
//3 
	printf ("Cac phan tu trong mang la: ");
	for (i = 0; i < n; i++)
	{
		printf ("%d ",a[i]); 
	}
	printf ("\n");
//4
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0 && sqrt(a[i])*sqrt(a[i]) == a[i])
		{
			k = 1;
			break;
		}
	}
	if (k == 0)
	{
		printf ("Ko co phan tu le va la so chinh phuong co trong mang.");
	}
	else
	{
		printf ("Cac phan tu le va la so chinh phuong co trong mang la: ");
		for (int i = 0; i < n; i++)
		{
		if (a[i] % 2 != 0 && sqrt(a[i])*sqrt(a[i]) == a[i])
			{
			printf ("%d ",a[i]); 
			} 
		}
	}
	printf ("\n");
//5
	int min = a[0], kt = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			kt = 1; 
			min = a[i];
			break; 
		} 
	}
	if (kt == 0)
	{
		printf ("mang da nhap ko co phan tu chan");
		
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			if (a[i] % 2 == 0 && a[i] < min)
			{
				min = a[i]; 
			} 
		}
		printf ("Phan tu chan nho nhat co trong mang la: %d",min);
	}
	printf ("\n"); 
}

//Bai 24
{
//1
	int n;
	do
	{
		printf ("Nhap vao mot so nguyen duong N: ");
		scanf ("%d",&n);
		if (n <= 0)
			printf ("Vui long nhap lai so nguyen duong N.\n"); 
	}
	while (n <= 0);
	printf ("So nguyen duong N vua nhap vao la: %d\n",n);
//2
	int i, a[i];
	printf ("Nhap cac phan tu cua mang: \n");
	for (i = 0; i < n; i++)
	{
		printf ("Phan tu thu %d la: ",i + 1);
		scanf ("%d",&a[i]); 
	}
//3
	printf ("Cac phan tu trong mang la: ");
	for (i = 0; i < n; i++) 
	{
		printf ("%d ",a[i]);
	}
	printf ("\n");
//4
	int k = 0; 
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0 && a[i] % 3 == 0)
		{
			k= 1;
			break; 
		}
	}
	if (k == 0)
	{
		printf ("ko co phan tu nao chan va chia het cho 3."); 
	}
	else
	{
		printf ("Cac phan tu chan chia va chia het cho 3 la: ");
		for (i = 0; i < n; i++)
		{
			if (a[i] % 2 == 0 && a[i] % 3 == 0)
			{
				printf ("%d ",a[i]);
			} 
		} 
	} 
	printf ("\n");
//5
	int max = a[0], kt = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0)
		{
			kt = 1; 
			max = a[i];
			break; 
		} 
	}
	if (kt == 0)
	{
		printf ("mang da nhap khong co phan tu le"); 
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			if (a[i] % 2 != 0 && max < a[i])
			{
				max = a[i];
			}
		}
		printf ("Phan tu le lon nhat co trong mang la: %d",max);
	}
	printf ("\n");
}

//Bai 25
{
//1
	int n;
	do
	{
		printf ("Nhap vao mot so nguyen duong N: ");
		scanf ("%d",&n);
		if (n <= 0)
			printf ("Vui long nhap lai so nguyen duong N.\n"); 
	}
	while (n <= 0);
	printf ("So nguyen duong N vua nhap vao la: %d\n",n);
//2
	int i, a[i];
	printf ("Nhap cac phan tu cua mang: \n");
	for (i = 0; i < n; i++)
	{
		printf ("Phan tu thu %d la: ",i + 1);
		scanf ("%d",&a[i]);
	}
//3
	printf ("Cac phan tu trong mang la: ");
	for (int i = 0; i < n; i++)
	{
		printf ("\n%d ",a[i]);
	}
	printf ("\n");
//4
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			k = 1;
			break; 
		}
	}
	if (k == 0)
	{
		printf ("ko co phan tu chan nao co trong mang.");
	}
	else
	{
		printf ("Cac phan tu chan co trong mang la: ");
		for (i = 0; i < n; i++)
		{
			if (a[i] % 2 == 0)
			{
				printf ("%d ",a[i]); 
			} 
		} 
	}
	printf ("\n");
//5
	int max = a[0], kt = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0)
		{
			kt = 1; 
			max = a[i];
			break; 
		}
	}
	if (kt == 0)
	{
		printf ("mang da nhap khong co phan tu le.");
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			if (a[i] % 2 != 0 && max < a[i])
			{
				max = a[i];
			}
		} 
		printf ("Phan tu le lon nhat co trong mang la: %d",max);
	}
	printf ("\n"); 
}
 
//Bai 26
{
//1
	int n;
	do
	{
		printf ("Nhap vao mot so nguyen duong N: ");
		scanf ("%d",&n);
		if (n <= 0)
			printf ("Vui long nhap lai so nguyen duong N.\n"); 
	}
	while (n <= 0);
	printf ("So nguyen duong N vua nhap vao la: %d\n",n);
//2
	int i, a[i];
	printf ("Nhap cac phan tu trong mang la: \n");
	for (i = 0; i < n; i++)
	{
		printf ("Phan tu thu %d la: ",i + 1);
		scanf ("%d",&a[i]);
	}
//3
	printf ("Cac phan tu trong mang la: "); 
	for (int i = 0; i < n; i++)
	{
		printf ("\n%d ",a[i]); 
	}
	printf ("\n");
//4 
	int k = 0; 
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0 && a[i] % 5 == 0)
		{
			k = 1;
			break; 
		}
	}
	if (k == 0) 
	{
		printf ("ko co phan tu nao chan va chia het cho 5."); 
	}
	else
	{
		printf ("Cac phan tu chan va chia het cho 5 la: "); 
		for (int i = 0; i < n; i++)
		{
			if (a[i] % 2 == 0 && a[i] % 5 == 0)
			{ 
				printf ("%d ",a[i]);
			}
		}
	}
	printf ("\n"); 

//5
	int max = a[0], kt = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0)
		{
			kt = 1;
			max = a[i];
			break;
		}
	}
	if (kt == 0)
	{
		printf ("\nmang da nhap ko co phan tu le."); 
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			if (a[i] % 2 != 0 && a[i] > max)
				max = a[i];
		}
		printf ("phan tu le lon nhat trong mang la: %d",max);
	}
	printf ("\n"); 
}

//Bai 27
{
//1
	int n;
	do
	{
		printf ("Nhap vao mot so nguyen duong N: ");
		scanf ("%d",&n);
		if (n <= 0)
			printf ("Vui long nhap lai so nguyen duong N.\n"); 
	}
	while (n <= 0);
	printf ("So nguyen duong N vua nhap vao la: %d\n",n);
//2
	int i, a[i];
	printf ("Nhap cac phan tu trong mang la: \n"); 
	for (i = 0; i < n; i++)
	{
		printf ("Phan tu thu %d la: ",i + 1);
		scanf ("%d",&a[i]); 
	}
//3
	printf ("Cac phan tu co trong mang la: ");
	for (i = 0; i < n; i++)
	{
		printf ("%d; ",a[i]); 
	}
	printf ("\n");
//4
	int k = 0;
	for (i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0 && a[i] % 5 == 0)
		{
			k = 1;
			break; 
		}
	}
	if (k == 0)
	{
		printf ("ko co phan tu nao chan va chia het cho 5"); 
	}
	else
	{
		printf ("Cac phan tu chan va chia het cho 5 la: ");
		for (i = 0; i < n; i++)
		{
			if (a[i] % 2 == 0 && a[i] % 5 == 0)
				printf ("%d ",a[i]); 
		}
	}
	printf ("\n");
//5
	int max = a[0], kt = 0;
	for (i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0 && a[i] > max)
		{
			kt = 1;
			max = a[i];
			break; 
		} 
	}
	if (kt == 0)
	{
		printf ("Mang da nhap ko co phan tu le"); 
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			if (a[i] % 2 != 0 && a[i] > max)
			{
				max = a[i];
			}
		}
		printf ("Phan tu le lon nhat trong mang la: %d",max);
	}
	printf ("\n"); 
}

//Bai 28
{
//1
	int n;
	do
	{
		printf ("Nhap vao mot so nguyen duong N: ");
		scanf ("%d",&n);
		if (n <= 0)
			printf ("Vui long nhap lai so nguyen duong N.\n"); 
	}
	while (n <= 0);
	printf ("So nguyen duong N vua nhap vao la: %d\n",n);
//2
	int i;
	float a[i];
	printf ("Nhap vao cac phan tu thuc vao mang: \n");
	for (i = 0; i < n; i++)
	{
		printf ("Phan tu thu %d la: ",i + 1);
		scanf ("%f",&a[i]); 
	}
//3
	printf ("Cac phan tu co trong mang la: ");
	for (i = 0; i < n; i++)
	{
		printf ("%2.2f ",a[i]); 
	}
	printf ("\n");
//4
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			k = 1;
			break; 
		} 
	}
	if (k == 0)
	{
		printf ("ko co phan tu am nao co trong mang."); 
	}
	else
	{
		printf ("Cac phan tu am co trong mang la: "); 
		for (int i = 0; i < n; i++)
		{
			if (a[i] < 0)
			{
				printf ("%2.2f ",a[i]); 
			} 
		} 
	}
	printf ("\n");
//5
	float min = a[0];
	int kt = 0; 
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
		{
			kt = 1; 
			min = a[i];
			break; 
		}
	}
	if (kt == 0)
	{
		printf ("Mang da nhap ko co phan tu duong"); 
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			if (a[i] > 0 && a[i] < min)
			{
				min = a[i];
			}
		}
		printf ("Phan tu duong nho nhat co trong mang la: %2.2f",min);
	} 
	printf ("\n"); 
}

//Bai 29
{
//1
	int n;
	do
	{
		printf ("Nhap vao mot so nguyen duong N: ");
		scanf ("%d",&n);
		if (n <= 0)
			printf ("Vui long nhap lai so nguyen duong N.\n"); 
	}
	while (n <= 0);
	printf ("So nguyen duong N vua nhap vao la: %d\n",n);
//2
	int i;
	float a[i];
	printf ("Nhap cac phan tu thuc vao trong mang: \n");
	for (i = 0; i < n; i++)
	{
		printf ("Phan tu thu %d la: ",i + 1);
		scanf ("%f",&a[i]); 
	}
//3
	printf ("Cac phan tu co trong mang la: ");
	for (i = 0; i < n; i++)
	{
		printf ("%2.2f ",a[i]); 
	}
	printf ("\n");
//4 
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
		{
			k = 1;
			break; 
		} 
	}
	if (k == 0)
	{
		printf ("Ko co phan tu nao duong trong mang.");
	}
	else
	{
		float tong = 0;
		int m = 0;
		for (int i = 0; i < n; i++)
		{
			if (a[i] > 0)
			{
				tong += a[i];
				m++; 
			} 
		}
		if (m > 0)
		{
			float TB = tong / m;
			printf ("TB cong cac phan tu duong co trong mang la: %2.3f",TB); 
		} 
	}
	printf ("\n");
//5
	float min = a[0];
	int kt = 0;
	for (i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			kt = 1;
			min = a[0];
			break; 
		} 
	}
	if (kt == 0)
	{
		printf ("mang da nhap ko co phan tu am.");
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			if (a[i] < 0 && a[i] < min)
			{
				min = a[i]; 
			}
		}
		printf ("Phan tu am nho nhat co trong mang la: %2.3f",min);
	}
	printf ("\n"); 
}

//Bai 30
{
//1
	int n;
	do
	{
		printf ("Nhap vao mot so nguyen duong N: ");
		scanf ("%d",&n);
		if (n <= 0)
			printf ("Vui long nhap lai so nguyen duong N.\n"); 
	}
	while (n <= 0);
	printf ("So nguyen duong N vua nhap vao la: %d\n",n);
//2
	int i;
	float a[i];
	printf ("Nhap cac phan tu thuc vao trong mang la: \n"); 
	for (i = 0; i < n; i++)
	{
		printf ("Phan tu thu %d la: ",i + 1);
		scanf ("%f",&a[i]); 
	}
//3
	printf ("Cac phann tu o trong mang la: ");
	for (int i = 0; i < n; i++)
	{
		printf ("%2.2f ",a[i]);
	}
	printf ("\n");
//4
	int k = 0;
	for (int i = 0; i < n; i++ )
	{
		if (a[i] < 0)
		{
			k = 1;
			break; 
		} 
	}
	if (k == 0)
	{
		printf ("Ko co phan tu am co trong mang."); 
	}
	else
	{
		float tong = 0;
		for (i = 0; i < n; i++)
		{
			if (a[i] < 0)
			{
				tong += a[i];
			}
		}
		printf ("Tong tat ca cac phan tu am co trong mang la: %2.2f",tong);
	}
	printf ("\n");
//5
	float max = a[i];
	int kt = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
		{
			kt = 1;
			max = a[i];
			break; 
		}
	}
	if (kt == 0)
	{
		printf ("mang da nhap khong co phan tu duong"); 
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			if (a[i] > 0 && a[i] > max)
			{
				max = a[i];
			} 
		}
		printf ("Phan tu duong lon nhat trong mang la:  %2.2f ",max); 
	}
	printf ("\n"); 
}

//Bai 31
{
//1
	int n;
	do
	{
		printf ("Nhap vao mot so nguyen duong N: ");
		scanf ("%d",&n);
		if (n <= 0)
			printf ("Vui long nhap lai so nguyen duong N.\n"); 
	}
	while (n <= 0);
	printf ("So nguyen duong N vua nhap vao la: %d\n",n);
//2
	int i;
	float a[i];
	printf ("Nhap cac phan tu thuc vao trong mang la: \n");
	for (i = 0; i < n; i++)
	{
		printf ("Phan tu thu %d la: ",i + 1);
		scanf ("%f",&a[i]); 
	}
//3
	printf ("Cac phan tu co o trong mang la: ");
	for (i = 0; i < n; i++)
	{
		printf ("\n%2.2f  ",a[i]); 
	}
	printf ("\n");
//4
	int k = 0;
	for (i = 0; i < n; i++)
	{
		if (a[i] > 0)
		{
			k = 1;
			break; 
		}
	}
	if (k == 0)
	{
		printf ("ko co phan tu duong trong mang."); 
	}
	else
	{
		printf ("Cac phan tu duong co trong mang la: "); 
		for (i = 0; i < n; i++)
		{
			if (a[i] > 0)
			{
				printf ("%2.2f ",a[i]); 
			}
		} 
	}
	printf ("\n");
//5
	float max = a[0];
	int kt = 0;
	for (i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			kt = 1;
			max = a[i];
			break; 
		} 
	}
	if (kt == 0)
	{
		printf ("mang da nhap khong co phan tu am"); 
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			if (a[i] < 0 && a[i] > max)
			{
				max = a[i]; 
			} 
		}
		printf ("Phan tu am lon nhat co trong mang la: %2.2f",max);
	}
	printf ("\n"); 
}

//Bai 32
{
//1
	int n;
	do
	{
		printf ("Nhap vao mot so nguyen duong N: ");
		scanf ("%d",&n);
		if (n <= 0)
			printf ("Vui long nhap lai so nguyen duong N.\n"); 
	}
	while (n <= 0);
	printf ("So nguyen duong N vua nhap vao la: %d\n",n);
//2
	int i;
	float a[i];
	printf ("Nhap vao trong mang cac phan tu la: \n");
	for (i = 0; i < n; i++)
	{
		printf ("Phan tu thu %d la: ",i + 1);
		scanf ("%f",&a[i]); 
	}
//3
	printf ("Cac so co o trong mang la: ");
	for (i = 0; i < n; i++)
	{
		printf ("%2.2f ",a[i]); 
	}
	printf ("\n");
//4
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0) 
		k = 1;
		break; 
	}
	if (k == 0)
	{
		printf ("Ko co phan tu am nao trong mang.");
	}
	else
	{
		float tong = 0;
		int m = 0; 
		for (int i = 0; i < n; i++)
		{
			if (a[i] < 0)
			{
				tong += a[i];
				m++; 
			} 
		}
		if (m > 0)
		{
			float TB = tong / m;
			printf ("TB cong cac phan tu am co trong mang la: %2.2f",TB);
		} 
	}
	printf ("\n");
//5
	float max = a[0];
	int kt = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			kt = 1;
			max = a[i];
			break; 
		} 
	}
	if (kt == 0)
	{
		printf ("mang da nhap ko co phan tu am."); 
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			if (a[i] < 0 && a[i] > max)
			{
				max = a[i];
			}
		}
		printf ("Phan tu am lon nhat co trong mang la: %2.2f",max);
	}
	printf ("\n");  
}

//Bai 33
{
//1
	int n;
	do
	{
		printf ("Nhap vao mot so nguyen duong N: ");
		scanf ("%d",&n);
		if (n <= 0)
			printf ("Vui long nhap lai so nguyen duong N.\n"); 
	}
	while (n <= 0);
	printf ("So nguyen duong N vua nhap vao la: %d\n",n);
//2
	int i;
	float a[i];
	printf ("Nhap vao trong mang cac phan tu la: \n");
	for (int i = 0; i < n; i++)
	{
		printf ("Phan tu thu %d la: ",i + 1);
		scanf ("%f",&a[i]); 
	}
//3
	printf ("Cac phan tu co o trong mang la: ");
	for (int i = 0; i < n; i++)
	{
		printf ("%2.2f  ",a[i]); 
	}
	printf ("\n");
//4
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0) 
		k = 1;
		break; 
	}
	if (k == 0)
	{
		printf ("Ko co phan tu nao duong trong mang.");
	}
	else
	{
		float nhan = 1;
		int m = 0;  
		for (int i = 0; i < n; i++)
		{
			if (a[i] > 0)
			{
				nhan *= a[i];
				m++; 
			} 
		}
		if (m > 0)
		{
			float TB = pow(nhan, 1.0 / m);
			printf ("TB nhan tat ca cac phan tu duong co trong mang la: %2.3f",TB); 
		} 
	}
	printf ("\n"); 
//5
	float min = a[0];
	int kt = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
		{
			kt = 1;
			min = a[i];
			break; 
		}
	} 
	if (kt == 0)
	{
		printf ("mang da nhap khong co phan tu duong"); 
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			if (a[i] > 0 && a[i] < min)
			{
				min = a[i];
			} 
		}
		printf ("Phan tu duong nho nhat trong mang la:  %2.2f ",min); 
	}
	printf ("\n"); 
}

//Bai 34
{
//1
	int n;
	do
	{
		printf ("Nhap vao mot so nguyen duong N: ");
		scanf ("%d",&n);
		if (n <= 0)
			printf ("Vui long nhap lai so nguyen duong N.\n"); 
	}
	while (n <= 0);
	printf ("So nguyen duong N vua nhap vao la: %d\n",n);
//2
	int i;
	int a[i];
	printf ("Nhap vao trong mang cac phan tu la: \n");
	for (int i = 0; i < n; i++)
	{
		printf ("Phan tu thu %d la: ",i + 1);
		scanf ("%d",&a[i]); 
	}
//3
	printf ("Cac phan tu co o trong mang la: ");
	for (int i = 0; i < n; i++)
	{
		printf ("%d ",a[i]); 
	}
	printf ("\n");
//4
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0 && a[i] % 3 == 0) 
		{
			k = 1;
			break; 
		}
	}
	if (k == 0)
	{
		printf ("Ko co phan tu le chia het cho 3 trong mang."); 
	}
	else
	{
		float tong = 0; 
		for (i = 0; i < n; i++)
		{
			if (a[i] % 2 != 0 && a[i] % 3 == 0)
			{
				tong += a[i];
			}
		}
		printf ("Cac phan tu le chia het cho 3 co trong mang la: %2.2f",tong);
	}
	printf ("\n");
//5
	int csc = 0;
	if (n >= 2)
	{
		int cs = a[1] - a[0];
		for (int i = 2; i < n; i++)
		{
			if (a[i] - a[i - 1] != cs)
			{
				csc = 1;
				break; 
			} 
		} 
	}
	if (csc == 0) 
	{
		printf ("Day so da nhap la mot day cap so cong.");
	}
	else
	{
		printf ("Day so da nhap ko phai la mot day cap so cong.");
	}
	printf ("\n"); 
}

//Bai 35
{
//1
	int n;
	do
	{
		printf ("Nhap vao mot so nguyen duong N: ");
		scanf ("%d",&n);
		if (n <= 0)
			printf ("Vui long nhap lai so nguyen duong N.\n"); 
	}
	while (n <= 0);
	printf ("So nguyen duong N vua nhap vao la: %d\n",n);
//2
	int i, a[i];
	printf ("Nhap vao mang cac phan tu la: \n");
	for (i = 0; i < n; i++)
	{
		printf ("Phan tu thu %d la: ",i + 1);
		scanf ("%d",&a[i]); 
	}
//3
	printf ("Cac phan tu co o trong mang la: ");
	for (i = 0; i < n; i++)
	{
		printf("%d ",a[i]); 
	}
	printf ("\n");
//4
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0 && a[i] % 3 == 0)
		{
			k = 1;
			break; 
		} 
	}
	if (k == 0)
	{
		printf ("Ko co phan tu nao chan chia het cho 3.");
	}
	else
	{
		int tong = 0, m = 0;
		for (int i = 0; i < n; i++)
		{
			if (a[i] % 2 == 0 && a[i] % 3 == 0)
			{
				tong += a[i];
				m++; 
			}
		}
		if (m > 0)
		{
			float TB = (float)tong / m;
			printf ("TB cong cac phan tu chan chia het cho 3 la: %2.2f",TB);
		} 
	}
	printf ("\n");
//5
	int csc = 0;
	if (n >= 2)
	{
		int cs = a[1] - a[0];
		for (i = 2; i < n; i++)
		{
			if (a[i] - a[i - 1] != cs)
			{
				csc = 1;
				break; 
			} 
		} 
	}
	if (csc == 0)
	{
		printf ("Day so da nhap la mot day cap so cong."); 
	}
	else
	{
		printf ("Day so da nhap khong phai la mot day cap so cong."); 
	} 
}

//Bai 36
{
//1
	int n;
	do
	{
		printf ("Nhap vao mot so nguyen duong N: ");
		scanf ("%d",&n);
		if (n <= 0)
			printf ("Vui long nhap lai so nguyen duong N.\n"); 
	}
	while (n <= 0);
	printf ("So nguyen duong N vua nhap vao la: %d\n",n);
//2
	int i, a[i];
	printf ("Nhap vao mang cac phan tu la: \n");
	for (i = 0; i < n; i++)
	{
		printf ("Phan tu thu %d la: ",i + 1);
		scanf ("%d",&a[i]); 
	}
//3
	printf ("Cac phan tu co o trong mang la: ");
	for (i = 0; i < n; i++)
	{
		printf ("%d ",a[i]); 
	}
	printf ("\n");
//4
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0 )
		{
			k = 1;
			break; 
		} 
	}
	if (k == 0)
	{
		printf ("Ko co phan tu nao chan chia het cho 2 trong mang."); 
	}
	else
	{
		int tong = 0, m = 0;
		for (int i = 0; i < n; i++)
		{
			if (a[i] % 2 == 0)
			{
				tong += a[i];
				m++; 
			} 
		}
		if (m > 0)
		{
			float TB = (float)tong / m; 
			printf ("TB cong cac phan tu chan chia het cho 2 co trong mang la: %2.2f",TB); 
		} 
	}
	printf ("\n");
//5
	int kt = 0;
	for (int i = 1; i < n; i++)
	{
		if (a[i] > a[i - 1])
		{
			kt = 1;
			break; 
		} 
	}
	if (kt == 0)
	{
		printf ("Day so da nhap la mot day so giam dan."); 
	} 
	else
	{
		printf ("Day so da nhap ko phai la mot day so giam dan."); 
	}
	printf ("\n"); 
}

//Bai 37
{
//1
	int n;
	do
	{
		printf ("Nhap vao mot so nguyen duong N: ");
		scanf ("%d",&n);
		if (n <= 0)
			printf ("Vui long nhap lai so nguyen duong N.\n"); 
	}
	while (n <= 0);
	printf ("So nguyen duong N vua nhap vao la: %d\n",n);
//2
	int i, a[i];
	printf ("Nhap vao mang cac phan tu la: \n");
	for (i = 0; i < n; i++)
	{
		printf ("Phan tu thu %d la: ",i + 1);
		scanf ("%d",&a[i]); 
	}
//3
	printf ("Cac phan tu co o trong mang la: ");
	for (i = 0; i < n; i++)
	{
		printf ("%d ",a[i]); 
	}
	printf ("\n");
//4
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0 && a[i] % 5 == 0)
		{
			k = 1;
			break; 
		} 
	}
	if (k == 0)
	{
		printf ("Ko co phan tu chan nao chia het cho 5."); 
	}
	else
	{
		int tong = 0, m = 0;
		for (int i = 0; i < n; i++)
		{
			if (a[i] % 2 == 0 && a[i] % 5 == 0)
			{
				tong += a[i];
				m++;
			} 
		}
		if (m > 0)
		{
			float TB = (float)tong / m; 
			printf ("TB cong cac phan tu chan chia het cho 5 trong mang la: %2.2f",TB);
		} 
	}
	printf ("\n");
//5
	int csn = 0;
	if (n >= 2)
	{
		float cb = (float)a[1] / a[0];
		for (i = 2; i < n; i++)
		{
			if ((float)a[i] / a[i - 1] != cb )
			{
				csn = 1;
				break; 
			}
		} 
	}
	if (csn == 0)
	{
		printf ("Day so da nhap la mot day so cap so nhan."); 
	}
	else
	{
		printf ("Day so da nhap ko phai la mot day cap so nhan."); 
	} 
}

//Bai 39
{
//1
	int n;
	do
	{
		printf ("Nhap vao mot so nguyen duong N: ");
		scanf ("%d",&n);
		if (n <= 0)
			printf ("Vui long nhap lai so nguyen duong N.\n"); 
	}
	while (n <= 0);
	printf ("So nguyen duong N vua nhap vao la: %d\n",n);
//2
	int i, a[i];
	printf ("Nhap vao mang cac phan tu la: \n");
	for (i = 0; i < n; i++)
	{
		printf ("Phan tu thu %d la: ",i + 1);
		scanf ("%d",&a[i]); 
	}
//3
	printf ("Cac phan tu co o trong mang la: ");
	for (i = 0; i < n; i++)
	{
		printf ("%d ",a[i]); 
	}
	printf ("\n");
//4
	int tong = 0, m = 0;
	int k,j;
	for (i = 0; i < n; i++)
	{
		k = 0;
		for (int j = 2; j <a[i] / 2; j++)
		{
			if (a[i] % j == 0)
			{
				k = 1;
				break; 
			} 
		}
		if (k == 0 && a[1] != 1)
		{
			tong += a[i];
			m++; 
		} 
	}
	if (m > 0)
	{
		float TB = (float)tong / m;
		printf ("TB cong cac so nguyen to co trong mang la: %2.3f",TB);
	}
	else
	{
		printf ("Day so vua nhap khong co so nguyen to."); 
	}
	printf ("\n"); 

//5
	int csn = 0;
	if (n >= 2)
	{
		float cb = (float)a[1] / a[0];
		for (int i = 2; i < n; i++)
		{
			if ((float)a[i] / a[i - 1] != cb )
			{
				csn = 1;
				break; 
			} 
		} 
	}
	if (csn == 0)
	{
		printf ("Day so da nhap la mot day cap so nhan."); 
	}
	else
	{
		printf ("Day so da nhap ko phai la mot day cap so nhan."); 
	} 
	printf ("\n");

//Bai 40
{
//1
	int n;
	do
	{
		printf ("Nhap vao mot so nguyen duong N: ");
		scanf ("%d",&n);
		if (n <= 0)
			printf ("Vui long nhap lai so nguyen duong N.\n"); 
	}
	while (n <= 0);
	printf ("So nguyen duong N vua nhap vao la: %d\n",n);
//2
	int i, a[i];
	printf ("Nhap cac phan tu vao mang la: \n");
	for (i = 0; i < n; i++)
	{
		printf ("Phan tu thu %d la: ",i + 1);
		scanf ("%d",&a[i]);
	}
//3
	printf ("Cac phan tu co o trong mang la: ");
	for (i = 0; i < n; i++)
	{
		printf ("%d ",a[i]); 
	}
	printf ("\n"); 
//4
	int k = 0;
	for (i = 0; i < n; i++) 
	{
		if (a[i] < 0)
		{
			k = 1;
			break; 
		}
	}
	if (k == 0)
	{
		printf ("Ko co phan tu am nao trong mang.");
	}
	else
	{
		int tong = 0; 
		for (i = 0; i < n; i++)
		{
			if (a[i] < 0)
			{
				tong += a[i];
			}
		}
		printf ("Tong cac phan tu am co trong mang la: %d",tong);
	}
	printf ("\n"); 

//5
	int kt = 0;
	for (i = 1; i < n; i++)
	{
		if (a[i - 1] > a[i])
		{
			kt = 1;
			break; 
		} 
	}
	if (kt == 0)
	{
		printf ("Day so da nhap la mot day so tang dan."); 
	}
	else
	{
		printf ("Day so da nhap ko phai la mot day day so tang dan.");
	}
	printf ("\n"); 
}

//Bai 41 
{
//1
	int n;
	do
	{
		printf ("Nhap vao mot so nguyen duong N: ");
		scanf ("%d",&n);
		if (n <= 0)
			printf ("Vui long nhap lai so nguyen duong N.\n"); 
	}
	while (n <= 0);
	printf ("So nguyen duong N vua nhap vao la: %d\n",n);
//2
	int i, a[i];
	printf ("Nhap cac phan tu vao mang la: \n");
	for (i = 0; i < n; i++)
	{
		printf ("Phan tu thu %d la: ",i + 1);
		scanf ("%d",&a[i]);
	}
//3
	printf ("Cac phan tu co o trong mang la: ");
	for (i = 0; i < n; i++)
	{
		printf ("%d ",a[i]); 
	}
	printf ("\n"); 
//4
	int tong = 0, m = 0;
	for (int i = 0; i < n; i += 2) 
	{
		tong += a[i];
		m++; 
	}
	if (m > 0)
	{
		float TB = (float)tong / m;
		printf ("TB cong cac phan tu co chi so chan la: %2.2f\n",TB); 
	}
	else
	{
		printf ("Ko co phan nao co chi so chan trong mang."); 
	} 
	printf ("\n"); 

//5
	int kt = 0;
	for (i = 1; i < n; i++)
	{
		if (a[i] > a[i - 1])
		{
			kt = 1;
			break; 
		} 
	}
	if (kt == 0)
	{
		printf ("Day so da nhap la mot day so giam dan."); 
	}
	else
	{
		printf ("Day so da nhap ko phai la mot day day so giam dan.");
	}
	printf ("\n"); 
}

//Bai 42
{
//1
	int m,n;
	do
	{
		printf ("Nhap vao mot so nguyen M: ");
		scanf ("%d",&m);
		printf ("Nhap vao mot so nguyen N: ");
		scanf ("%d",&n);
		if (m <= 0 && n <= 0)
		{
			printf ("Ca M va N deu phai la so nguyen duong. Vui long nhap lai."); 
		} 
	}
	while (m <= 0 && n <= 0);
	printf ("So nguyen M vua nhap vao la: %d\n",m);
	printf ("So nguyen N vua nhap vao la: %d\n",n); 
//2
	int i,j,a[m][n];
	printf ("Nhap cac gia tri cho cac phan tu trong ma tran la: \n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf ("Phan tu o hang %d, cot %d la: ",i + 1, j + 1);
			scanf ("%d",&a[i][j]); 
		} 
	}
	printf ("\n");
//3
	printf ("Ma tran vua nhap la: \n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf ("%6d ",a[i][j]); 
		}
		printf ("\n"); 
	}
	printf ("\n"); 
//4 
	printf ("Thong tin cac phan tu chan co trong ma tran la: \n");
	int k = 0;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (a[i][j] % 2 == 0)
			{
				printf ("Gia tri %d hang %d cot %d\n",a[i][j],m,n);
				k = 1; 
			}
		} 
	}
	if (k == 0)
	{
		printf ("Ma tran vua nhap ko co so chan.\n"); 
	}
	printf ("\n");
//5
	for (int i = 0; i < m; i++)
	{
		int tong = 0; 
		for (int j = 0; j < n; j++)
		{
			tong += a[i][j];
		}
		printf ("Tong cac phan tu tren hang %d cua ma tran la: %d\n",i+1,tong);
	}
	printf ("\n");  
}

//bai 43
{
//1
	int m,n;
	do
	{
		printf ("Nhap vao mot so nguyen M: ");
		scanf ("%d",&m);
		printf ("Nhap vao mot so nguyen N: ");
		scanf ("%d",&n);
		if (m <= 0 && n <= 0)
		{
			printf ("Ca M va N deu phai la so nguyen duong. Vui long nhap lai."); 
		} 
	}
	while (m <= 0 && n <= 0);
	printf ("So nguyen M vua nhap vao la: %d\n",m);
	printf ("So nguyen N vua nhap vao la: %d\n",n);
	printf ("\n"); 
//2
	int i, j, a[m][n];
	printf ("Nhap cac gia tri vao trong ma tran la: \n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf ("Phan tu o hang %d, cot %d la: ",i + 1, j + 1);
			scanf("%d",&a[i][j]); 
		} 
	}
	printf ("\n");
//3
	printf ("Ma tran vua nhap vao la: \n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf ("%6d ",a[i][j]); 
		}
		printf ("\n");
	}
	printf ("\n");
//4
	printf ("Thong tin cac phan tu la so chan va la so chinh phuong la: \n"); 
	int k = 0;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (a[i][j] % 2 == 0 && sqrt(a[i][j])*sqrt(a[i][j]) == a[i][j])
			{
				printf ("Gia tri %d hang %d cot %d.\n", a[i][j], i + 1, j + 1);
				k = 1; 
			} 
		} 
	}
	if (k == 0)
	{
		printf ("Ma tran ko co phan tu nao chan va la so chinh phuong."); 
	}
	printf ("\n"); 
//5
	for (int i = 0; i < m; i++)
	{
		int tong = 0;
		for (int j = 0; j < n; j++)
		{
			tong += a[i][j]; 
		}
		printf ("Tong cac phan tu tren hang %d cua ma tran la: %d\n",i+1,tong);
	}
	printf ("\n");	 
}

//Bai 44
{
//1
	int m,n;
	do
	{
		printf ("Nhap vao mot so nguyen M: ");
		scanf ("%d",&m);
		printf ("Nhap vao mot so nguyen N: ");
		scanf ("%d",&n);
		if (m <= 0 && n <= 0)
		{
			printf ("Ca M va N deu phai la so nguyen duong. Vui long nhap lai."); 
		} 
	}
	while (m <= 0 && n <= 0);
	printf ("So nguyen M vua nhap vao la: %d\n",m);
	printf ("So nguyen N vua nhap vao la: %d\n",n);
	printf ("\n"); 
//2
	int i, j, a[m][n];
	printf ("Nhap cac gia tri vao ma tran la: \n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf ("Phan tu o hang %d, cot %d: ",i + 1, j + 1);
			scanf ("%d",&a[i][j]); 
		} 
	}
	printf ("\n"); 
//3
	printf ("Ma tran vua nhap vao la: \n");
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf ("%6d ",a[i][j]); 
		}
		printf ("\n"); 
	}
	printf ("\n");
//4
	printf ("Thong tin cac phan tu la so le la: \n");
	int k = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] % 2 != 0)
			{
				printf ("Gia tri %d hang %d cot %d.\n", a[i][j], i + 1, j + 1); 
				k = 1; 
			} 
		}
	}
	if (k == 0)
	{
		printf ("Ma tran khong co phan tu nao le.");
	}
	printf ("\n");
//5
	for (int i = 0; i < m; i += 2)
	{
		int tong = 0; 
		for (int j = 0; j < n; j++)
		{
			tong += a[i][j];
		}
		printf ("Tong cac phan tu tren hang %d cua ma tran la: %d\n", i + 1, tong);
	}
	printf ("\n"); 
}

//Bai 45
{
//1
	int m,n;
	do
	{
		printf ("Nhap vao mot so nguyen M: ");
		scanf ("%d",&m);
		printf ("Nhap vao mot so nguyen N: ");
		scanf ("%d",&n);
		if (m <= 0 && n <= 0)
		{
			printf ("Ca M va N deu phai la so nguyen duong. Vui long nhap lai."); 
		} 
	}
	while (m <= 0 && n <= 0);
	printf ("So nguyen M vua nhap vao la: %d\n",m);
	printf ("So nguyen N vua nhap vao la: %d\n",n);
	printf ("\n"); 
//2
	int i, j, a[m][n];
	printf ("Nhap cac gia tri vao ma tran la: \n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf ("Phan tu o hang %d, cot %d la: ", i + 1, j + 1);
			scanf ("%d",&a[i][j]); 
		} 
	}
	printf ("\n");
//3
	printf ("Ma tran vua nhap vao la: \n");
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf ("%6d ",a[i][j]); 
		}
		printf ("\n"); 
	}
	printf ("\n");
//4
	printf ("Thong tin cua cac phan tu la so le la: \n");
	int k = 0;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (a[i][j] % 2 != 0)
			{
				printf ("Gia tri %d hang %d cot %d\n", a[i][j], i + 1, j + 1);
				k = 1; 
			} 
		} 
	}
	if (k == 0)
	{
		printf ("Ma tran khong co phan tu nao le.");
	}
	printf ("\n");
//5
	for (i = 0; i < m; i++)
	{
		int min = a[0][j];
		for (j = 0; j < n; j++)
		{
			if (a[i][j] < min)
			{
				min = a[i][j];
			}
		}
		printf ("Gia tri nho nhat tren cot %d la: %d\n", j + 1, min);
	}
	printf ("\n"); 
}

//Bai 46
{
//1
	int m,n;
	do
	{
		printf ("Nhap vao mot so nguyen M: ");
		scanf ("%d",&m);
		printf ("Nhap vao mot so nguyen N: ");
		scanf ("%d",&n);
		if (m <= 0 && n <= 0)
		{
			printf ("Ca M va N deu phai la so nguyen duong. Vui long nhap lai."); 
		} 
	}
	while (m <= 0 && n <= 0);
	printf ("So nguyen M vua nhap vao la: %d\n",m);
	printf ("So nguyen N vua nhap vao la: %d\n",n);
	printf ("\n"); 
//2
	int i, j, a[m][n];
	printf ("Nhap cac gia tri vao ma tran: \n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf ("Phan tu o hang %d, cot %d la: ", i + 1, j + 1);
			scanf ("%d",&a[i][j]); 
		} 
	}
	printf ("\n");
//3
	printf ("Ma tran vua nhap vao la: \n");
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf ("%6d ",a[i][j]); 
		}
		printf ("\n"); 
	}
	printf ("\n");
//4 
	printf ("Thong tin cua cac phan tu chan va chia het cho 3 trong ma tran la: \n"); 
	int k = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] % 2 == 0 && a[i][j] % 3 == 0)
			{
				printf ("Gia tri %d hang %d cot %d", a[i][j], i + 1, j + 1);
				k = 1; 
			} 
		}		 
	}
	if (k == 0)
	{
		printf ("Ma tran ko co phan tu nao chan va chia het cho 3."); 
	}
	printf ("\n");
//5
	for (int j = 1; j < n; j += 2)
	{
		int min = a[0][j];
		for (int i = 1; i < m; i++)
		{
			if (a[i][j] < min)
			{
				min = a[i][j];
			} 
		}
		printf ("Gia tri nho nhat tren cot %d la: %d\n", j + 1, min);
	}
	printf ("\n"); 
}

//Bai 47
{
//1
	int m, n;
	do
	{
		printf ("Nhap vao mot so nguyen M: ");
		scanf ("%d",&m);
		printf ("Nhap vao mot so nguyen N: ");
		scanf ("%d",&n);
		if (m <= 0 || n <= 0)
		{
			printf ("Ca M va N deu phai la so nguyen duong. Vui long nhap lai."); 
		}
	}
	while (m <= 0 || n <= 0);
	printf ("So nguyen duong M vua nhap vao la: %d\n",m);
	printf ("So nguyen duong N vua nhap vao la: %d\n",n);
	printf ("\n");
//2
	int i, j, a[m][n];
	printf ("Nhap cac gia tri vao ma tran: \n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf ("Phan tu o hang %d, cot %d la: ", i + 1, j + 1);
			scanf ("%d",&a[i][j]); 
		} 
	}
	printf ("\n");
//3
	printf ("Ma tran vua nhap vao la: \n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf ("%6d ",a[i][j]); 
		}
		printf ("\n"); 
	}
	printf ("\n");
//4
	printf ("Thong tin cua cac phan tu le va chia het cho 3 la: \n");
	int k = 0; 
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (a[i][j] % 2 == 0 && a[i][j] % 3 == 0)
			{
				printf ("Gia tri %d hang %d cot %d.",a[i][j], i + 1, j + 1);
				k = 1; 
			} 
		} 
	}
	if (k == 0)
	{
		printf ("Ma tran tren khong co phan tu nao chan va chia het cho 3."); 
	}
	printf ("\n"); 
//5
	for (int j = 0; j < n; j += 2)
	{
		int max = a[0][j];
		for (int i = 1; i < m; i++)
		{
			if (a[i][j] > max)
			{
				max = a[i][j];
			}
		}
		printf ("Gia tri lon nhat tren cot %d la: %d\n", j + 1, max);
	}
	printf ("\n"); 
}

//Bai 48
{
//1
	int m;
	do
	{
		printf ("Nhap vao mot so nguyen M: ");
		scanf ("%d",&m);

		if (m <= 0 )
		{
			printf ("M phai la so nguyen duong. Vui long nhap lai.\n");
		}
	}
	while (m <= 0);
	printf ("So nguyen duong M vua nhap la: %d\n",m);
	printf ("\n");
//2
	int i, j; 
	float a[m][m];
	printf ("Nhap cac gia tri vao ma tran: \n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf ("Phan tu o hang %d, cot %d la: ", i + 1, j + 1);
			scanf ("%f",&a[i][j]);
		} 
	}
	printf ("\n");
//3
	printf ("Ma tran vua nhap vao la: \n");
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf ("%8.2f ",a[i][j]); 
		}
		printf ("\n"); 
	}
	printf ("\n");
//4
	float tong = 0;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
		{
			tong += a[i][j]; 
		} 
	}
	printf ("Tong cac phan tu co trong ma tran la: %2.2f\n",tong);
//5
	int kt = 0;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
		{
			if ((i == j && a[i][j] != 1 ) || (i != j && a[i][j] != 0))
			{
				kt = 1;
				break; 
			}
		} 
	}
	if (kt == 0)
	{
		printf ("Ma tran da nhap la ma tran don vi."); 
	}
	else
	{
		printf ("ma tran da nhap khong phai la ma tran don vi."); 
	}
	printf ("\n"); 
}

//Bai 49
{
//1
	int m;
	do
	{
		printf ("Nhap vao mot so nguyen M: ");
		scanf ("%d",&m);
		if (m <= 0)
		{
			printf ("M khong phai la so nguyen duong. Vui long nhap lai."); 
		}
	}
	while (m <= 0);
	printf ("So nguyen duong M vua nhap vao la: %d\n",m);
	printf ("\n");
//2
	int i, j;
	float a[m][m];
	printf ("Nhap cac gia tri vao ma tran: \n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf ("Phan tu o hang %d, cot %d la: ", i + 1, j + 1);
			scanf ("%f",&a[i][j]); 
		} 
	}
	printf ("\n");
//3
	printf ("Ma tran vua nhap vao la: \n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf ("%8.2f ",a[i][j]);
		}
		printf ("\n"); 
	}
	printf ("\n");
//4
	int tong = 0, t = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			tong += a[i][j];
			t++; 
		} 
	}
	if (t > 0)
	{
		printf ("TB cong cac phan tu co trong ma tran la: %2.3f",(float)tong / t); 
	}
	printf ("\n");
//5
	int kt = 0;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
		{
			if ((i == j && a[i][j] != 1) || (i != j && a[i][j] != 0))
			{
				kt = 1;
				break; 
			} 
		} 
	}
	if (kt == 0)
	{
		printf ("Ma tran da nhap la ma tran don vi.");
	}
	else
	{
		printf ("Ma tran da nhap khong phia la ma tran don vi."); 
	}
	printf ("\n"); 
}

//Bai 50
{
//1
	int m;
	do
	{
		printf ("Nhap vao mot so nguyen M: ");
		scanf ("%d",&m);
		if (m <= 0)
		{
			printf ("M khong phai la so nguyen duong. Vui long nhap lai."); 
		}
	}
	while (m <= 0);
	printf ("So nguyen duong M vua nhap vao la: %d\n",m);
	printf ("\n");
//2
	int i, j;
	float a[m][m]; 
	printf ("Nhap cac gia tri vao ma tran: \n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf ("Phan tu o hang %d, cot %d la: ", i + 1, j + 1);
			scanf ("%f",&a[i][j]); 
		} 
	}
	printf ("\n");
//3
	printf ("Ma tran da nhap vao la: \n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf ("%8.2f ",a[i][j]); 
		}
		printf ("\n"); 
	}
	printf ("\n");
//4
	int tong = 0, t = 0;
	for (i = 0; i < m; i += 2)
	{
		for (j = 1; j < m; j += 2)
		{
			tong += a[i][j];
			t++; 
		} 
	}
	if (t > 0)
	{
		float TB =  ((float)tong / t);
		printf ("TB cong cac phan tu trong hang le cot chan la: %2.2f",TB);
	}
	else
	{
		printf ("Khong co phan tu nao trong hang le cot chan."); 
	}
	printf ("\n"); 
//5
	int kt = 0;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
		{
			if ((i = j && a[i][j] != 1) || (i != j && a[i][j] != 0))
			{
				kt = 1; 
				break; 
			} 
		} 
	}
	if (kt == 0)
	{
		printf ("Ma tran da nhap la ma tran don vi"); 
	}
	else
	{
		printf ("Ma tran da nhap khong phia la ma tran don vi."); 
	}
	printf ("\n"); 
}

//Bai 51
{
//1
	int m;
	do
	{
		printf ("Nhap vao mot so nguyen M: ");
		scanf ("%d",&m);
		if (m <= 0)
		{
			printf ("M khong phai la so nguyen duong. Vui long nhap lai."); 
		}
	}
	while (m <= 0);
	printf ("So nguyen duong M vua nhap vao la: %d\n",m);
	printf ("\n");
//2
	int i, j;
	float a[m][m];
	printf ("Nhap cac gia tri vao ma tran: \n");
	for (i = 0 ; i < m; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf ("Phan tu o hang %d, cot %d: ", i + 1, j + 1);
			scanf ("%f",&a[i][j]); 
		} 
	}
	printf ("\n");
//3
	printf ("Ma tran vua nhap vao la: \n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf ("%8.2f ",a[i][j]); 
		}
		printf ("\n"); 
	}
	printf ("\n");
//4
	int tong = 0, t = 0;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (i == j)
			{
				tong += a[i][j];
				t++; 
			} 
		} 
	}
	if (t > 0)
	{
		float TB = (float)tong / t;
		printf ("TB cong cac phan tu thuoc duong cheo chinh cua ma tran la: %2.3f\n",TB); 
	}
	else
	{
		printf ("Khong co phan tu nao thuoc duong cheo chinh cua ma tran.\n"); 
	}
	printf ("\n");
//5
	int kt = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i != j && a[i][j] != a[j][i])
			{
				kt = 1;
				break; 
			} 
		} 
	}
	if (kt == 0)
	{
		printf ("Ma tran tren da nhap la ma tran doi xung."); 
	}
	else
	{
		printf ("Ma tran tren da nhap khong phai la ma tran doi xung."); 
	}
	printf ("\n"); 
}

//Bai 52
int main() 
{
//1
	int m;
	do
	{
		printf ("Nhap vao mot so nguyen M: ");
		scanf ("%d",&m);
		if (m <= 0)
		{
			printf ("M khong phai la so nguyen duong. Vui long nhap lai."); 
		}
	}
	while (m <= 0);
	printf ("So nguyen duong M vua nhap vao la: %d\n",m);
	printf ("\n");
//2
	int i, j; 
	float a[m][m];
	printf ("Nhap cac gia tri vao ma tran: \n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf ("Phan tu o hang %d, cot %d la: ", i + 1, j + 1);
			scanf ("%f",&a[i][j]); 
		} 
	}
	printf ("\n");
//3 
	printf ("Ma tran da nhap vao la: \n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf ("%8.2f ",a[i][j]); 
		}
		printf ("\n"); 
	}
	printf ("\n");
//4
	int tong = 0, t = 0;
	for (i = 0; i < m; i++)
	{
		tong += a[i][m - i - 1];
		t++; 
	}
	if (t > 0)
	{
		float TB = (float)tong / t; 
		printf ("TB cong cac phan tu duong cheo phu la: %2.3f\n",TB); 
	}
	else
	{
		printf ("Khong co phan tu nao tren duong cheo phu.\n"); 
	}
	printf ("\n");
//5
	int kt = 0;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (i != j && a[i][j] != a[j][i])
			{
				kt = 1;
				break; 
			} 
		} 
	}
	if (kt == 0)
	{
		printf ("Ma tran da nhap la ma tran doi xung."); 
	}
	else
	{
		printf ("Ma tran da nhap khong phai la ma tran doi xung."); 
	} 
}

//Bai 53
{
//1
	int m;
	do
	{
		printf ("Nhap vao mot so nguyen M: ");
		scanf ("%d",&m);
		if (m <= 0)
		{
			printf ("M khong phai la so nguyen duong. Vui long nhap lai."); 
		}
	}
	while (m <= 0);
	printf ("So nguyen duong M vua nhap vao la: %d\n",m);
	printf ("\n");
//2
	int i, j; 
	float a[m][m];
	printf ("Nhap cac gia tri vao ma tran: \n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf ("Phan tu o hang %d, cot %d la: ", i + 1, j + 1);
			scanf ("%f",&a[i][j]); 
		} 
	}
	printf ("\n");
//3 
	printf ("Ma tran da nhap vao la: \n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf ("%8.2f ",a[i][j]); 
		}
		printf ("\n"); 
	}
	printf ("\n");
//4
	int tong = 0, t = 0; 
	for (i = 0; i < m; i += 2)
	{
		for (j = 1; j < m; j += 2)
		{
			tong += a[i][j];
			t++; 
		} 
	}
	if (t > 0)
	{
		float TB = (float)tong / t;
		printf ("TB cong cac phan tu thuoc hang le cot chan la: %2.2f\n",TB);
	}
	else
	{
		printf ("Khong co phan tu nao thuoc hang le cot chan.\n");
	}
	printf ("\n");
//5
	int kt = 0;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (i != j && a[i][j] != a[j][i])
			{
				kt = 1;
				break; 
			}
		} 
	}
	if (kt == 0)
	{
		printf ("Ma tran da nhap la ma tran doi xung."); 
	}
	else
	{
		printf ("Ma tran da nhap khong phia la ma tran doi xung.");
	}
	printf ("\n"); 
}

//Bai 54
{
//1
	int m, n;
	do
	{
		printf ("Nhap vao mot so nguyen M: ");
		scanf ("%d",&m);
		printf ("Nhap vao mot so nguyen N: ");
		scanf ("%d",&n);
		if (m <= 0 || n <= 0)
		{
			printf ("Ca M va N deu phai la so nguyen duong. Vui long nhap lai."); 
		} 
	}
	while (m <= 0 || n <= 0);
	printf ("So nguyen duong M vua nhap vao la: %d\n",m);
	printf ("So nguyen duong N vua nhap vao la: %d\n",n);
	printf ("\n");
//2
	int i, j, a[m][n];
	printf ("Nhap cac gia tri vao ma tran: \n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf ("Phan tu o hang %d, cot %d la: ", i + 1, j + 1);
			scanf ("%d",&a[i][j]); 
		} 
	}
	printf ("\n");
//3
	printf ("Ma tran da nhap vao la: \n");
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf ("%6d ",a[i][j]); 
		}
		printf ("\n"); 
	}
	printf ("\n");
//4
	printf ("Cac phan tu thuoc hang dau tien cua ma tran la: ");
	for (int j = 0; j < n; j++)
	{
		printf ("%d ",a[0][j]); 
	} 
	printf ("\n\n");
//5
	printf ("cac phan tu la so nguyen to trong ma tran la: ");
	int k = 0; 
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			int kt = 0;
			for (int q = 2; q <= a[i][j] / 2; q++)
			{
				if (a[i][j] % q == 0 )
				{
					kt = 1;
					break; 
				} 
			}
			if (kt == 0 && a[i][j] != 1)
			{
				printf ("%d ",a[i][j]);
				k = 1; 
			}
		}
	}
	if (k == 0)
	{
		printf ("\nKhong co so nguyen to nao trong ma tran."); 
	} 
	printf ("\n"); 
}

//Bai 55
{
//1
	int m, n;
	do
	{
		printf ("Nhap vao mot so nguyen M: ");
		scanf ("%d",&m);
		printf ("Nhap vao mot so nguyen N: ");
		scanf ("%d",&n);
		if (m <= 0 || n <= 0)
		{
			printf ("Ca M va N deu phai la so nguyen duong. Vui long nhap lai."); 
		} 
	}
	while (m <= 0 || n <= 0);
	printf ("So nguyen duong M vua nhap vao la: %d\n",m);
	printf ("So nguyen duong N vua nhap vao la: %d\n",n);
	printf ("\n");
//2
	int i, j, a[m][n];
	printf ("Nhap cac gia tri vao ma tran: \n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf ("Phan tu o hang %d, cot %d la: ", i + 1, j + 1);
			scanf ("%d",&a[i][j]); 
		} 
	}
	printf ("\n");
//3
	printf ("Ma tran da nhap vao la: \n");
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf ("%6d ",a[i][j]); 
		}
		printf ("\n"); 
	}
	printf ("\n");
//4
	int nhan = 1, t = n; 
	for (j = 0; j < n; j++)
	{
		nhan *= a[0][j];
	}
	float TB = pow((float)nhan, 1.0 / t);
	printf ("TB nhan cac phan tu thuoc hang dau tien la: %2.2f\n",TB);
	printf ("\n");
//5
	printf ("Cac phan tu la so nguyen to co trong ma tran la: ");
	int k = 0; 
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			int kt = 0;
			for (int q = 2; q <= a[i][j] / 2; q++)
			{
				if (a[i][j] % q == 0)
				{
					kt = 1;
					break; 
				} 
			}
			if (kt == 0 && a[i][j] != 1)
			{
				printf ("%d ",a[i][j]);
				k = 1; 
			}
		} 
	}
	if (k == 0)
	{
		printf ("\nKhong co so nguyen to nao trong ma tran."); 
	} 
	printf ("\n"); 
}

//Bai 56
{
//1
	int m, n;
	do
	{
		printf ("Nhap vao mot so nguyen M: ");
		scanf ("%d",&m);
		printf ("Nhap vao mot so nguyen N: ");
		scanf ("%d",&n);
		if (m <= 0 || n <= 0)
		{
			printf ("Ca M va N deu phai la so nguyen duong. Vui long nhap lai."); 
		} 
	}
	while (m <= 0 || n <= 0);
	printf ("So nguyen duong M vua nhap vao la: %d\n",m);
	printf ("So nguyen duong N vua nhap vao la: %d\n",n);
	printf ("\n");
//2
	int i, j, a[m][n];
	printf ("Nhap cac gia tri vao ma tran: \n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf ("Phan tu o hang %d, cot %d la: ", i + 1, j + 1);
			scanf ("%d",&a[i][j]); 
		} 
	}
	printf ("\n");
//3
	printf ("Ma tran da nhap vao la: \n");
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf ("%6d ",a[i][j]); 
		}
		printf ("\n"); 
	}
	printf ("\n");
//4
	int tong = 0, t = 0;
	for (i = 0; i < m; i += 2)
	{
		for (j = 0; j < n; j++)
		{
			if (a[i][j] % 2 == 0)
			{
				tong += a[i][j];
				t++; 
			} 
		} 
	}
	if (t > 0)
	{
		float TB = (float)tong / t;
		printf ("TB cong cac phan tu thuoc hang le va chia het cho 2 la: %2.2f\n",TB);
	}
	else
	{
		printf ("Trong ma tran khong co phan tu nao thuoc hang le va chia het cho 2.\n"); 
	}
	printf ("\n");
//5
	printf ("Cac phan tu la so nguyen to co trong ma tran la: ");
	int k = 0;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			int kt = 0;
			for (int q = 2; q <= a[i][j] / 2; q++)
			{
				if (a[i][j] % q == 0)
				{
					kt = 1;
					break; 
				} 
			}
			if (kt == 0 && a[i][j] != 1)
			{
				printf ("%d ",a[i][j]);
				k = 1; 
			} 
		}
	}
	if (k == 0)
	{
		printf ("\nKhong co so nguyen to nao trong ma tran."); 
	}
	printf ("\n"); 
}

//Bai 57
{
//1
	int m, n;
	do
	{
		printf ("Nhap vao mot so nguyen M: ");
		scanf ("%d",&m);
		printf ("Nhap vao mot so nguyen N: ");
		scanf ("%d",&n);
		if (m <= 0 || n <= 0)
		{
			printf ("Ca M va N deu phai la so nguyen duong. Vui long nhap lai."); 
		} 
	}
	while (m <= 0 || n <= 0);
	printf ("So nguyen duong M vua nhap vao la: %d\n",m);
	printf ("So nguyen duong N vua nhap vao la: %d\n",n);
	printf ("\n");
//2
	int i, j, a[m][n];
	printf ("Nhap cac gia tri vao ma tran: \n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf ("Phan tu o hang %d, cot %d la: ", i + 1, j + 1);
			scanf ("%d",&a[i][j]); 
		} 
	}
	printf ("\n");
//3
	printf ("Ma tran da nhap vao la: \n");
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf ("%6d ",a[i][j]); 
		}
		printf ("\n"); 
	}
	printf ("\n");
//4
	printf ("Cac phan tu thuoc cot cuoi cung la: "); 
	for (int i = 0; i < n; i++)
	{
		printf ("%d ",a[i][n - 1]);
	}
	printf ("\n\n");
//5
	printf ("Cac phan tu la so hoan hao co trong ma tran la: ");
	int k = 0; 
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int tong = 0;
			for (int q = 1; q <= a[i][j] / 2; q++)
			{
				if (a[i][j] % q == 0)
				{
					tong += q; 
				} 
			}
			if (tong == a[i][j] && a[i][j] != 0)
			{
				printf ("%d ",a[i][j]);
				k = 1; 
			} 
		} 
	}
	if (k == 0)
	{
		printf ("\nKhong co so hoan hao nao trong ma tran."); 
	}
	printf ("\n"); 
}

//Bai 58 
{
//1
	int m, n;
	do
	{
		printf ("Nhap vao mot so nguyen M: ");
		scanf ("%d",&m);
		printf ("Nhap vao mot so nguyen N: ");
		scanf ("%d",&n);
		if (m <= 0 || n <= 0)
		{
			printf ("Ca M va N deu phai la so nguyen duong. Vui long nhap lai."); 
		} 
	}
	while (m <= 0 || n <= 0);
	printf ("So nguyen duong M vua nhap vao la: %d\n",m);
	printf ("So nguyen duong N vua nhap vao la: %d\n",n);
	printf ("\n");
//2
	int i, j, a[m][n];
	printf ("Nhap cac gia tri vao ma tran: \n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf ("Phan tu o hang %d, cot %d la: ", i + 1, j + 1);
			scanf ("%d",&a[i][j]); 
		} 
	}
	printf ("\n");
//3
	printf ("Ma tran da nhap vao la: \n");
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf ("%6d ",a[i][j]); 
		}
		printf ("\n"); 
	}
	printf ("\n");
//4
	printf ("Cac phan tu la so nguyen to thuoc cot cuoi cung cua ma tran la: ");
	for (i = 0; i < m; i++)
	{
		int kt = 0;
		for (int q = 2; q <= a[i][n - 1] / 2; q ++)
		{
			if (a[i][n - 1] % q == 0)
			{
				kt = 1;
				break; 
			} 
		}
		if (kt == 0)
		{
			printf ("%d ",a[i][n - 1]); 
		} 
	}
	printf ("\n\n"); 
//5
	printf ("Cac so hoan hao co trong ma tran la: ");
	int k = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int tong = 0;
			for (int q = 1; q <= a[i][j] / 2; q++)
			{
				if (a[i][j] % q == 0)
				{
					tong += q; 
				} 
			}
			if (tong == a[i][j] && a[i][j] != 0)
			{
				printf ("%d ",a[i][j]);
				k = 1; 
			} 
		} 
	} 
	if (k == 0)
	{
		printf ("\nKhong co so hoan hao nao trong ma tran.");
	}
	printf ("\n"); 
}

//Bai 59
{
//1
	int m, n;
	do
	{
		printf ("Nhap vao mot so nguyen M: ");
		scanf ("%d",&m);
		printf ("Nhap vao mot so nguyen N: ");
		scanf ("%d",&n);
		if (m <= 0 || n <= 0)
		{
			printf ("Ca M va N deu phai la so nguyen duong. Vui long nhap lai."); 
		} 
	}
	while (m <= 0 || n <= 0);
	printf ("So nguyen duong M vua nhap vao la: %d\n",m);
	printf ("So nguyen duong N vua nhap vao la: %d\n",n);
	printf ("\n");
//2
	int i, j, a[m][n];
	printf ("Nhap cac gia tri vao ma tran: \n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf ("Phan tu o hang %d, cot %d la: ", i + 1, j + 1);
			scanf ("%d",&a[i][j]); 
		} 
	}
	printf ("\n");
//3
	printf ("Ma tran da nhap vao la: \n");
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf ("%6d ",a[i][j]); 
		}
		printf ("\n"); 
	}
	printf ("\n");
//4
	printf ("Cac phan tu la so chinh phuong thuoc hang cuoi cua ma tran la: "); 
	for (i = 0; i < m; i++)
	{
		if (sqrt(a[i][n - 1])*sqrt(a[i][n -1]) == a[i][n - 1])
		{
			printf ("%d ",a[i][n - 1]);
		} 
	}
	printf ("\n\n");
//5
	printf ("Cac phan tu la so hoan hao co trong ma tran la: "); 
	int k = 0;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			int tong = 0;
			for (int q = 1; q <= a[i][j] / 2; q++)
			{
				if (a[i][j] % q == 0)
				{
					tong += q; 
				} 
			}
			if (tong == a[i][j] && a[i][j] != 0)
			{
				printf ("%2d ",a[i][j]);
				k = 1; 
			} 
		} 
	}
	if (k == 0)
	{
		printf ("\nkhong co phan tu la so hoan hoa trong ma tran."); 
	}
	printf ("\n"); 
}

//Bai 60
{
//1
	int m, n, k;
	do
	{
		printf ("Nhap vao mot so nguyen M: ");
		scanf ("%d",&m);
		printf ("Nhap vao mot so nguyen N: ");
		scanf ("%d",&n);
		if (m <= 0 || n <= 0)
		{
			printf ("Ca M va N deu phai la so nguyen duong. Vui long nhap lai."); 
		} 
	}
	while (m <= 0 || n <= 0);
	printf ("So nguyen duong M vua nhap vao la: %d\n",m);
	printf ("So nguyen duong N vua nhap vao la: %d\n",n);
	printf ("\n");
//2
	int i, j, a[m][n];
	printf ("Nhap cac gia tri vao ma tran: \n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf ("Phan tu o hang %d, cot %d la: ", i + 1, j + 1);
			scanf ("%d",&a[i][j]); 
		} 
	}
	printf ("\n");
//3
	printf ("Ma tran da nhap vao la: \n");
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf ("%6d ",a[i][j]); 
		}
		printf ("\n"); 
	}
	printf ("\n");
//4
	do
	{
		printf ("Nhap vao mot so K (0 <= K < %d): ",m);
		scanf ("%d",&k);
		if (k < 0 || k >= m)
		{
			printf ("K phai nam trong pham vi tu 0 den %d. Vui long nhap lai.\n",m - 1);
		} 
	}
	while (k < 0 || k >= m);
	float max = a[k][0];
	for (int j = 1; j < n; j++)
	{
		if (a[k][j] > max)
		{
			max = a[k][j];
		} 
	}
	printf ("Gia tri lon nhat tren hang %d: %2.2f\n", k, max);
	printf ("\n");
//5
	printf ("Ma tran chuyen vi la: \n");
	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < m; i++)
		{
			printf ("%6d ",a[i][j]); 
		}
		printf ("\n"); 
	}
	printf ("\n"); 
}  

 
 
 
 

 
 
 
 
 
 
 

 


 
 
 
 

 
 
