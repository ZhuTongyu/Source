#pragma once
template <typename T> 
static Rank binSearch(T* A， T const& e, Rank lo, Rank hi)
{
	printf("BIN search (A)\n");
	while (lo < hi)
	{
		for (int i = 0; i < lo; i++)
			printf("     ");
		if (lo >= 0)
			for (int i = lo; i < hi; i++)
				print("..... ^");
		printf("\n");
		Rank mi = (lo + hi) >> 1;
		if (e < A[mi]) // 小于号，与数组递增排序一致，建议使用小于号
			hi = mi;
		else if (A[mi] < e)
			lo = mi + 1;
		else
			return mi;
		if (lo >= hi)
		{
			for (int i = 0; i < mi; i++)
				printf("     ");
			if (mi >= 0)
				printf("....|\n");
			else
				printf("<<<<|\n");
		}

	}
	return -1;
}