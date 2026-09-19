[English](README.md) · **简体中文**

> 英文版是规范版本。本页与 [README.md](README.md) 不一致时，以英文版为准。

<!-- translation-of: README.md sha256:e450524e80d1c92c -->

<!-- Source: Best-README-Template BLANK_README (Unlicense) — https://github.com/othneildrew/Best-README-Template -->
<a id="readme-top"></a>

# Template Linked List（模板链表）

一个头文件形式的 C++ 模板类，实现了带虚拟头节点的单链表，并通过一个小型控制台程序演示增删查改操作。

[![CI](https://github.com/anyingiit/Template_Linked-List/actions/workflows/ci.yml/badge.svg)](https://github.com/anyingiit/Template_Linked-List/actions/workflows/ci.yml)
[![License](https://img.shields.io/github/license/anyingiit/Template_Linked-List)](LICENSE)

[报告问题](https://github.com/anyingiit/Template_Linked-List/issues/new?template=bug_report.yml) · [提出需求](https://github.com/anyingiit/Template_Linked-List/issues/new?template=feature_request.yml)

<details>
  <summary>目录</summary>
  <ol>
    <li><a href="#about-the-project">关于本项目</a></li>
    <li><a href="#getting-started">开始使用</a></li>
    <li><a href="#usage">用法</a></li>
    <li><a href="#contributing">参与贡献</a></li>
    <li><a href="#license">许可证</a></li>
    <li><a href="#contact">联系方式</a></li>
  </ol>
</details>

## 关于本项目

`LinkedList.h` 是一个头文件形式的模板类 `LinkedList<T>`，基于带虚拟头节点的单链表实现，
使得 `add`、`get`、`set`、`remove` 都能共用同一套遍历逻辑，而不必为空链表或首元素单独
处理。`main.cpp` 对它做了完整演示：构造一个 `LinkedList<int>`，在每次修改之后通过
`toString()` 打印链表内容，并依次演示按索引插入、按索引删除，以及从两端删除元素。

计划中的功能与已知问题，见 [open issues](https://github.com/anyingiit/Template_Linked-List/issues)。

## 开始使用

### 环境要求

- CMake 3.17 或更高版本
- 支持 C++20 的编译器（对应 `CMakeLists.txt` 中的 `set(CMAKE_CXX_STANDARD 20)`）

### 安装

```sh
git clone https://github.com/anyingiit/Template_Linked-List.git
cd Template_Linked-List
cmake -S . -B build
cmake --build build
```

这会生成 `CMakeLists.txt` 中 `add_executable(Linked_List main.cpp)` 所声明的
`Linked_List` 可执行文件。

## 用法

运行编译出的可执行文件；它会在固定的演示流程中，每次操作后打印链表内容
（程序不读取任何命令行参数）：

```sh
./build/Linked_List
```

## 参与贡献

欢迎参与。[CONTRIBUTING.md](CONTRIBUTING.md) 说明如何提交 issue 或 pull request，[CODE_OF_CONDUCT.md](CODE_OF_CONDUCT.md) 说明对所有参与者的行为要求。

请不要在公开的 issue 或 pull request 中报告安全问题。[SECURITY.md](SECURITY.md) 说明了私下报告的方式。

## 许可证

以 MIT 许可证分发。详见 [LICENSE](LICENSE)。

## 联系方式

项目地址：[https://github.com/anyingiit/Template_Linked-List](https://github.com/anyingiit/Template_Linked-List)

<p align="right">(<a href="#readme-top">back to top</a>)</p>
