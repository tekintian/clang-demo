# mac vscode clang development and demo



##VSCode extenssion install

- C/C++

https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools



- Code Runner

https://marketplace.visualstudio.com/items?itemName=formulahendry.code-runner



- C/C++ Snippets

https://marketplace.visualstudio.com/items?itemName=hars.CppSnippets



## mac c/c++ development config

需要先安装xcode

2中方式获取includePath,  第一种 直接使用xcode中的include;  第二种 执行 xcode-select --install 安装命令行工具环境



- 直接使用xcode中的include

~~~json
"/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/lib/clang/12.0.0/include",
"/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/include/c++/v1",
"/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/include",
"/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include"
~~~



- instal xcode and exec xcode-select --install

~~~shell
xcode-select --install
~~~

~~~json
"/Library/Developer/CommandLineTools/usr/include/c++/v1",
"/Library/Developer/CommandLineTools/usr/lib/clang/12.0.0/include",
"/Library/Developer/CommandLineTools/usr/include",
"/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include"
~~~





- VSCode 配置文件 ( 没有则自己手动创建,否则头文件会无法找到)

.vscode/c_cpp_properties.json

```json
{
  "configurations": [
    {
      "name": "Mac",
      "includePath": [
        "${workspaceFolder}/**",
        "/usr/local/include",
        "/Library/Developer/CommandLineTools/usr/include/c++/v1",
        "/Library/Developer/CommandLineTools/usr/lib/clang/12.0.0/include",
        "/Library/Developer/CommandLineTools/usr/include",
        "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include"
      ],
      "defines": [],
      "macFrameworkPath": ["/System/Library/Frameworks", "/Library/Frameworks"],
      "compilerPath": "/usr/bin/gcc",
      "cStandard": "c11",
      "cppStandard": "gnu++17",
      "intelliSenseMode": "clang-x64"
    }
  ],
  "version": 4
}
```

## vcpkg 



- for install vcpkg

~~~shell
brew install vcpkg
~~~



- config
.vscode/settings.json

```json
{
  "cmake.configureSettings": {
    "CMAKE_TOOLCHAIN_FILE": "/usr/local/Cellar/vcpkg/2020.11-1/libexec/scripts/buildsystems/vcpkg.cmake"
  },
  "files.associations": {
    "数的阶乘.C": "cpp",
    "num_ppluse.C": "cpp"
  }
}
```



## c compile 

- C源码编译的4个步骤

~~~shell
gcc -E hello.c -o hello.i  // 预处理  
gcc -S hello.i -o hello.s // 编译 将 C编译为汇编语言
gcc -c hello.s -o hello.o  // 汇编 将汇编语言编译为机器语言
gcc hello.o -o hello.exe  // 连接
~~~















