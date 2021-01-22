# mac vscode clang development and demo



##VSCode extenssion install

- C/C++

https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools



- Code Runner

https://marketplace.visualstudio.com/items?itemName=formulahendry.code-runner



- C/C++ Snippets

https://marketplace.visualstudio.com/items?itemName=hars.CppSnippets



## mac c/c++ development config

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











