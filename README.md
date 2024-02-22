OpenLeetCode - An open source version of LeetCode
--------------------------------------------------------

## Windows Terminal

### Build
```cmd
cmake -B build -DCMAKE_BUILD_TYPE=Debug -DPROBLEM_BUILDS_NAME=problem_builds
cmake --build build
cmake --install build --config Debug
```

### Run
```cmd
./problem_builds/openleetcode --problem_builds_dir ./problem_builds --language cpp --problem TwoSum
```

## How To Use
The above example runs **TwoSum** problem using **C++**.
After the build succeeds the following directory structure will be generated in the folder specified by ``--problem_builds_dir`` flag. In this example it's a folder called ``problem_builds`` as follows:.

- problem_builds
  - problems
    - TwoSum
      - cpp
        - solution.cpp
        - ...
      - testcases
        - TestCase1.test
        - TestCase2.test
        - ...
      - description.md
    - launguage
      - cpp

Just like for LeetCode you have one file where you solve the problem. For example, for the problem called TwoSum there is **problem_builds/problems/TwoSum/cpp/solution.cpp**. To add new test cases you can create a file in **problem_builds/problems/TwoSum/testcases/** directory with the extension **.test** and your solution will be automatically tested against it.

The problem is a LeetCode problem description in the ***description.md*** file location in the directory for each problem. For example ***problem_builds/problems/TwoSum/description.md***.

The format of the .test files are as follows

```text
arg1
arg2
expected results
```

Each line is either an integral type (1, 4.6 etc.), or an array of integral types. For example:

```text
[1, 2, 4]
8.0
[0, 0]
```

For C++ the supported types are: integral types, strings, vector of integral types.

## List of LeetCode Problems
* TwoSum
* LongestSubstringWithoutRepeatingCharacters
* NumberOfIslands

The problem names are automatically extracted from the folder names inside **data/problems/**.

## Usage
```text
$ python main.py --help
OpenLeetCode problem builder

options:
  -h, --help            show this help message and exit
  --problem_builds_dir dir, -d dir
                        Path to a directory with the problems. Usually ./problem_builds/ directory
  --language {cpp}, -l {cpp}
                        The programming language
  --problem problem_name, -p problem_name
                        Name of the problem to build and test. Example: TwoSum
  --verbose, -v         Print verbose output
  --list-problems       List problems
```

## Note
Curently only C++ is supported but the framework is setup such that other languages can be added. Also, the question description and the solution is yet to be worked on.

## Requirements
This project requires the following to run:

- Python
- CMake 3.12

## Contributing
Feel free to contribute with code, test cases, or even code reviews.