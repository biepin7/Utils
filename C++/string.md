[TOC]



## 读取一行
```
    string s;
    getline(cin,s);
```
如果使用`cin` 遇到空格/换行符会


## s.size() : 忽略空格


## 字符串中的数字  ( s[i] - '0')
```
for (int i = 0,j=1; i + 1 < s.size(); i++)
    {
        if (s[i] != '-'){
            sum += (s[i] - '0') * j;
            j++;
    }

    // 注意是 ( s[i] - '0')
```

## 字符串的最后一位 s.back()
```



 if (s.back() == c) puts("Right");
    else
    {
        s.back() = c;
        cout << s << endl;
    }

```