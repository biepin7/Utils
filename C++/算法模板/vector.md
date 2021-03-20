``` #include<vector>```

## 创建 vector 数组
```
vector<int> a;
vector<int> mp(100001,0)
```

## 最大最小值 和其下标
```
int minnum = *min_element(a.begin(),a.end());
int minpos = min_element(a.begin(),a.end())-a.begin();
```

## 添加到末尾 v.push_back()
```
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        a.push_back(temp);
    }
```
## 添加到首项 v.insert(v.begin(),s); 

## 反向
```
return vector<int>(res.rbegin(), res.rend());

reverse(res.begin(), res.end();
```