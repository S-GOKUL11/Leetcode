bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {
    if (n == 0)
        return true;
    if (flowerbedSize < 3) {
        if (flowerbedSize == 1)
            return ((n == 0) || (n == 1 && flowerbed[0] == 0)) ? true : false;
        if (flowerbedSize == 2)
            return ((n == 0) ||
                    (n == 1 && flowerbed[0] == 0 && flowerbed[1] == 0)) ? true: false;
    }
    if (flowerbed[0] == 0 && flowerbed[1] == 0) {
        flowerbed[0] = 1;
        n--;
    }
    for (int i = 1; i < flowerbedSize; i++) {
        if (i == flowerbedSize - 1) {
            if (flowerbed[i - 1] == 0 && flowerbed[i] == 0) {
                flowerbed[i] = 1;
                n--;
            }
        } else if (flowerbed[i - 1] == 0 && flowerbed[i] == 0 &&
                   flowerbed[i + 1] == 0) {
            flowerbed[i] = 1;
            n--;
        }
        if (n == 0)
            return true;
    }
    if (n == 0)
        return true;
    return false;
}
