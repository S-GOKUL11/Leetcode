int cmpfunc(const void* a, const void* b) { return (*(int*)a - *(int*)b); }

bool asteroidsDestroyed(long int mass, int* asteroids, int asteroidsSize) {
    qsort(asteroids, asteroidsSize, sizeof(int), cmpfunc);
    for (int i = 0; i < asteroidsSize; i++) {
        if (mass < asteroids[i])
            return false;
        mass += asteroids[i];
    }
    return true;
}
