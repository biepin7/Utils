# IO

## 输入

### 1. 输入判断 : 直到n=0
```
while (cin>>n && n!=0)
while(cin>>n,n) //这个更快
```
### 2. 输入判断 : 直到n>0
```
    while(cin>>n,n<=0)
```

## 输出

### 1. 保留3位小数
```
printf("%.3lf",d);
```