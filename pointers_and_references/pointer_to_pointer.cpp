// https://stackoverflow.com/questions/2893129/what-does-mean-in-c

int main(){
    int x = 1;
    int *y = &x;  // declare y as a pointer to x
    int **z = &y;  // declare z as a pointer to y
    **z = 2;  // sets the thing pointed to (the thing pointed to by z) to 2
          // i.e., sets x to 2
    return 0;
}