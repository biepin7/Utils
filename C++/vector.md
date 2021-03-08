``` #include<vector>```

## 创建 vector 数组
```
vector<int> a;
```

## 最大最小值 和其下标
```
int minnum = *min_element(a.begin(),a.end());
int minpos = min_element(a.begin(),a.end())-a.begin();
```

## 输入 v.push_back()
```
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        a.push_back(temp);
    }
```