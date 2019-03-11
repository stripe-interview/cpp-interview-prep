# Interview preparation
Thanks for interviewing at Stripe. To make sure that we can use our time best in the interview, we'd like to have you do some setup in advance.

We've noticed that more often than not, we've had to spend a significant portion of the interview helping candidates setup a Cmake-based C++ environment on their personal laptops.

We've created a (rather ad-hoc) Cmake project to help candidates determine if their laptops were setup to write C++, so interviews can be about evaluating the candidate, and not the way their environment is setup.

# Getting ready
First, clone this repository to your computer (creating a fork of the repository is not necessary). Next, ensure that you have `cmake` and a C++ compiler installed.

- If you're using Debian or Ubuntu, you likely want to run `sudo apt-get install cmake build-essential`.
- If you're using macOS with HomeBrew installed, you might want to run `brew install cmake`.
- Otherwise, you can find installation instructions for `cmake` [here](https://cmake.org/install/).

If you can run these commands, your development environment is probably ready for Stripe's C++ interview questions:

```
# On all platforms:
$ cmake --version
$ git clone [the project's URL]
$ cd [into the project]
$ mkdir build
$ cd build
$ cmake ..

# On Linux or macOS:
$ make
$ ./hello

# On Windows with Visual Studio installed:
# open cpp-interview-prep.sln, build and run
```
