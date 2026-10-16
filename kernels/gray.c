#include <stdio.h>
#include <stdlib.h>


int main(void){
    int w = 4;
    int h = 3;
    unsigned char *rgb = (unsigned char *)malloc(w * h * 3);
    unsigned char *gray = malloc(w * h);

    for(int i = 0; i < w * h * 3; i++) rgb[i] = (unsigned char)(i*7);

    for (int y = 0; y < h; y++){
        for (int x = 0; x < w; x++) {
            int i = y*2 + x;
            unsigned char r = rgb[3*i], g = rgb[3*i + 1], b = rgb[3*i + 2];
            gray[i] = (unsigned char)((77*r + 150*g + 29*b) >> 8);
            printf("%4d", gray[i]);
        }
        printf("\n");
    }
    if (!rgb || !gray) { free(rgb); free(gray); return 1; }
    free (rgb);
    free (gray);
    return 0;
}  