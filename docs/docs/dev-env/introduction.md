---
title: 开发环境介绍
---

# 搭建开发环境

<<<<<<< HEAD
MiniOB 当前可以在Linux/MacOS上编译，所以开发环境最好是Linux或者MacOS。Windows上可以使用WSL2，或者使用Docker。这里有几个文档，大家可以参考并选择自己的开发环境。另外，很多同学喜欢使用visual studio code开发，MiniOB 中也将vscode的一些配置文件放在了仓库中，比如 .vscode/tasks.json 和 .vscode/launch.json，可以参考使用。

- [使用 GitPod 开发 MiniOB](dev_by_gitpod.md)
- [开发环境搭建(本地调试, 适用 Linux 和 Mac)](how_to_dev_miniob_by_vscode.md)
- [开发环境搭建(远程调试, 适用于 Window, Linux 和 Mac)](how_to_dev_in_docker_container_by_vscode.md)
- [Windows 使用Docker开发MiniOB](how_to_dev_miniob_by_docker_on_windows.md)
- [手把手教你在windows上用docker和vscode配置环境](how_to_dev_in_docker_container_by_vscode_on_windows.md)
- [使用Docker开发MiniOB](how-to-dev-using-docker.md)
- [MiniOB 调试](miniob-how-to-debug.md)
=======
每个人的开发环境各不相同，这里介绍了 Linux/MacOS/Windows 三类操作系统上搭建 MiniOB 的开发环境，以及推荐使用的IDE（VSCode）的调试方法。
首先，大家需要清楚 MiniOB 当前只能在 Linux/MacOS 操作系统上编译。因此，如果是使用 Windows 操作系统的同学，需要首先准备 Linux 的虚拟环境（例如，WSL2，Docker，虚拟机等）。
下面提供了多种开发环境的搭建方法，请大家根据自己的实际情况选择合适的文档进行学习阅读。
## 在线开发环境
在线开发环境的优点是无需安装任何软件，开箱即用，几乎是一键初始化完成开发环境。但是在网络受限时，可能无法使用，或者体验比较差。如果希望使用在线开发环境的同学可以参考[使用在线开发环境开发 MiniOB](dev_by_online.md)。
## Linux/MacOS 开发环境
对于使用 Linux/MacOS 操作系统的同学，可以参考[使用 VSCode 开发 MiniOB](./how_to_dev_miniob_by_vscode.md)。
## Windows 开发环境
对于使用 Windows 操作系统的同学，需要先准备 Linux 的虚拟环境（例如，WSL2，Docker，虚拟机等），之后才能在 Linux 的虚拟环境上开发 MiniOB。

使用 Docker 容器开发，可以参考[使用 Docker 开发 MiniOB](how-to-dev-using-docker.md)或[Windows 使用Docker开发MiniOB](how_to_dev_miniob_by_docker_on_windows.md)或热心同学的[手把手教你在windows上用docker和vscode配置环境](how_to_dev_in_docker_container_by_vscode_on_windows.md)。

上述三篇文档的详细程度依次递增，可以根据实际情况选择阅读。
## 远程开发环境
对于有远程开发环境（例如云服务器等）的同学不受本地操作系统的限制，可以参考：[开发环境搭建(远程调试)](how_to_dev_in_docker_container_by_vscode.md)
## 调试（Debug）介绍
miniob 的调试（debug）方法可以参考[MiniOB 调试](miniob-how-to-debug.md)。
>>>>>>> 9172074180a6beef223828077dd35ad072f73a10
