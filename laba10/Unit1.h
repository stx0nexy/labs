#ifndef Unit1H
#define Unit1H
#define n 10
#define A 1
#define B 5
#define min(a,d,nd){d = a[0];\
for (int i = 0; i < n; i++)\
{if (fabs(a[i]) < d)\
	{d = a[i];\
	nd=i;}}\
std::cout << "\nMinimum element modulo=" << d\
 << "\t Modulo minimum element number=" << nd+1 << std::endl;\
 }
#define summa(a,b,s){for (int i = 0; i < n; i++)\
	{if (a[i] < 0)\
	{b = i;break;}}\
	for (int i = b; i < n; i++)\
		s += abs(a[i]);\
	std::cout << "Sum after first negative=" << s << std::endl;\
 }
#define sgatie(a,k){std::cout<<"Compressed array:\n" ;\
for (int i = 0; i < n; i++)\
	{if (not(A <= a[i] && a[i] <= B))\
	{if (i != k) a[k] = a[i];\
		++k;}}\
	for (int i = k; i < n; i++) a[i] = 0;\
	for (int i = 0; i < n; i++) std::cout << a[i] << ' ';\
	std::cout << std::endl;\
 }
#define outmatr(a){for (int i = 0; i < n; i++)std::cout << a[i] << " ";}
#endif
