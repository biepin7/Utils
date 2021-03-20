[TOC]

# 规律
1. 不要总是尝试int(c),str 和 str 也能比较
2. 不要用 for :,除非不做处理

## 读取一行
```
    string s;
    getline(cin,s);
```
如果使用`cin` 遇到空格/换行符会停止输入


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

## 插入 insert()


## ACSII
```
    for (char c : s) {
        a[c - 'a']++;
    }

    for (char c : s) {
        if (a[c - 'a'] == 1) {
            cout << c;
            return 0;
        }
    }
```

## 转化char 为小写
```
tolower()
```
## 寻找字串
```
if(a.find(b)>=0 & a.find(b)<a.size()) cout<<"true";
```

## stoi  string转int
```
s.push(stoi(t)); // stoi:string to int 
```