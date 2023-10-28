int findXOR(int L, int R) {
    int result = 0;
    for (int i = L; i <= R; i++) {
        result ^= i;
    }
    return result;
}
