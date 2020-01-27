 int tongtrenduongcheochinh(int a[][100],int n) {
    int sum=0;
    for(int i=0;i<n;i++) {
        if (a[i][i]%2!=0) {
        sum=sum+a[i][i];
        }
    }
    return sum;
}
int tongtrenduongcheophu(int a[][100],int n) {
    int sum=0;
     for(int i=0;i<n;i++) {
        if (a[i][n-1-i]%2!=0) {
        sum=sum+a[i][n-1-i];
        }
    }
    return sum;
}
