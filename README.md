# templated-singleton
Header only templated-singleton implementation with C++11.

## Usage

```cpp
class Foo {
public:
  void bar() {
    // snip.
  }
};

// Declare the singleton class.
class FooSingleton : public Singleton<Foo> {
};

// Call the singleton-instance's `bar()` method.
FooSingleton::bar();
```


## License
Licensed under [MIT License](https://izumin.mit-license.org/2016).
