#pragma once
template <typename T>
static Rank binSearch(T* A, T const& e, Rank lo, Rank hi)
{
	printf("BIN search (B)\n");
	while (1 < hi - lo)
	{
		Rank mi = (lo + hi) >> 1;
		(e < A[mi]) ? hi = mi : lo = mi;

	}
	return (e == A[lo]) ? lo : -1;
}