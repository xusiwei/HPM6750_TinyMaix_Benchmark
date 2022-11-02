# HPM6750 TinyMaix Benchmark

HPM6750上的TinyMaix基准测试 框架程序。



## 背景

TinyMaix本身也是用CMake构建的，而HPM6750的SDK也是用CMake构建的。

移植TinyMaix过程中，为了修改原有的CMakeLists.txt文件，在外层包了一层目录，也就是这个仓存在的原因。



## 下载

```sh
git clone --recursive https://github.com/xusiwei/HPM6750_TinyMaix_Benchmark.git
```

注意：这个项目本身需要下载到hpm_sdk的samples目录下。



## 编译、烧录、运行

```sh
# 1.生成SEGGER Embedded Studio项目
generate_project -b hpm6750evkmini -t flash_xip -f

# 2.使用SEGGER Embedded Studio编译项目

# 3.使用SEGGER Embedded Studio调试项目
```



