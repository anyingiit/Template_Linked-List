<!-- Source: Best-README-Template BLANK_README (Unlicense) — https://github.com/othneildrew/Best-README-Template -->
<a id="readme-top"></a>

# Template Linked List

A header-only C++ template class implementing a singly linked list with a dummy head node, demonstrated by a small console program that adds, inspects and removes elements.

**English** · [简体中文](README.zh-CN.md)

[![CI](https://github.com/anyingiit/Template_Linked-List/actions/workflows/ci.yml/badge.svg)](https://github.com/anyingiit/Template_Linked-List/actions/workflows/ci.yml)
[![License](https://img.shields.io/github/license/anyingiit/Template_Linked-List)](LICENSE)

[Report a bug](https://github.com/anyingiit/Template_Linked-List/issues/new?template=bug_report.yml) · [Request a feature](https://github.com/anyingiit/Template_Linked-List/issues/new?template=feature_request.yml)

<details>
  <summary>Table of Contents</summary>
  <ol>
    <li><a href="#about-the-project">About The Project</a></li>
    <li><a href="#getting-started">Getting Started</a></li>
    <li><a href="#usage">Usage</a></li>
    <li><a href="#contributing">Contributing</a></li>
    <li><a href="#license">License</a></li>
    <li><a href="#contact">Contact</a></li>
  </ol>
</details>

## About The Project

`LinkedList.h` is a header-only template class, `LinkedList<T>`, built on a
singly linked list with a dummy head node so that `add`, `get`, `set` and
`remove` all share one traversal instead of special-casing an empty list or
the first element. `main.cpp` demonstrates it end to end: it builds a
`LinkedList<int>`, prints the list (via `toString()`) after every mutation,
and walks through insertion at an index, removal by index, and removing from
both ends.

See the [open issues](https://github.com/anyingiit/Template_Linked-List/issues) for planned features and known issues.

## Getting Started

### Prerequisites

- CMake 3.17 or newer
- A C++20 compiler, per `CMakeLists.txt`'s `set(CMAKE_CXX_STANDARD 20)`

### Installation

```sh
git clone https://github.com/anyingiit/Template_Linked-List.git
cd Template_Linked-List
cmake -S . -B build
cmake --build build
```

This produces the `Linked_List` executable that `CMakeLists.txt`'s
`add_executable(Linked_List main.cpp)` names.

## Usage

Run the built executable; it prints the list's contents after each operation
in a fixed demonstration sequence (no command-line arguments are read):

```sh
./build/Linked_List
```

## Contributing

Contributions are welcome. Read [CONTRIBUTING.md](CONTRIBUTING.md) for how to open an issue or a pull request, and [CODE_OF_CONDUCT.md](CODE_OF_CONDUCT.md) for the standards expected of everyone taking part.

Please do not report security issues in public issues or pull requests. [SECURITY.md](SECURITY.md) explains how to report them privately.

## License

Distributed under the MIT License. See [LICENSE](LICENSE) for details.

## Contact

Project link: [https://github.com/anyingiit/Template_Linked-List](https://github.com/anyingiit/Template_Linked-List)

<p align="right">(<a href="#readme-top">back to top</a>)</p>
