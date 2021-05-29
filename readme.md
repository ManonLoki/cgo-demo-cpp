# 使用 CGO 提供的动态链接库

这里只是简单的使用，

## 构造项目

```
# 构造项目
gn gen ./out

# 记得将.dylib拷贝到out目录下

# 编译项目
ninja -C ./out

```

## 执行项目

这里由于使用的是动态链接库，因此需要到目录下进行执行，否则会提示无法找到动态链接库

```
# 进入目录
cd ./out
# 执行demo
./demo
```