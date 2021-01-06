[TOC]

### 指定初始化大小
List<String> languages = new ArrayList<>(4);
PS：
1. 默认的构造大小为10
2. List的大小变化规则是：((旧容量 * 3) / 2) + 1

> https://www.cnblogs.com/ShanHeDiao/p/4402030.html