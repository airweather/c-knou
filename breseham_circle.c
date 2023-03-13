void breseham_circle(int xc, int yc, int radius)
{
    void circlePoints(int, int, int, int);
    int F = 1 - radius, x = 0, y = radius;
    circlePoint(xc, yc, x, y);
    while(y>x) {
        if(F < 0) {
            F += x * 2 + 3;
        }
        else {
            F += (x-y) * 2 + 5;
            y--;
        }
        x++;
        circlePoint(xc, yc, x, y);
    }
}
