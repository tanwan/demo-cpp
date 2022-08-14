# demo-cpp
## compiler kit
使用clang++(/usr/bin/clang++或者/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++)
### CLion
配置: Preferences > Build, Execution, Deployment > Toolchains

### VS Code
可选的kit在`~/.local/share/CMakeTools/cmake-tools-kits.json`, 也可以在.vscode下单独配置  
使用`CMake: Select a Kit`(⇧+⌘+P)可以进行配置,或者底部状态栏也可以进行修改kit

## 编译
### VS Code
先使用CMake > Build All Projects, 或者点击底部状态栏的build即可进行build
## 执行
这边使用googletest

### VS Code
代码如果有进行修改, 在运行之前,需要进行build(点击底部状态栏的build即可进行build)
直接运行没有cout没有输出, 这边都使用debug来执行

## LSP(Language Server Protocol)
使用clangd