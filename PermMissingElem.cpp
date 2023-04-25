int solution (vector<int> &A) {
    long N = A.size() + 1;
    long total = (N * (N + 1)) / 2;
    long sum = 0;
    for (std::size_t i=0; i < A.size(); i++ )
        sum += A[i];
    long res = total - sum;
    return (int) res;
}
