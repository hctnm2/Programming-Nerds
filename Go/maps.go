package main

import . "fmt"


type Any interface {}


func main() {
  ages: = map[string]int {
    "Dave": 24,
    "Mary": 42,
    "John": 58
  }

  Println(ages["Dave"])
  Println(ages["Mary"], "\n")

  primary: = map[string][3]int {
    "red": [3]int {
      255,
      0,
      0
    },
    "green": [3]int {
      0,
      255,
      0
    },
    "blue": [3]int {
      0,
      0,
      255
    },
  }

  Println(primary["red"])
  Println(primary["yellow"], "\n")

  squares: = map[int]Any {
    1: 1,
    2: 4,
    3: "error",
    4: 16
  }

  squares[8] = 64
  squares[3] = 9

  Println(squares, "\n")

  nums: = map[int]string {
    1: "one",
    2: "two",
    3: "three",
  }
  //checking for a key in the map:
  Println(nums[1] != "")
  Println(nums[3] != "")
  Println(nums[4] == "", "\n")

  pairs: = map[Any]Any {
    1: "apple",
    "orange": [3]int {
      2,
      3,
      4
    },
    true: false,
    nil: "Nothing",
  }
  //another method for checking a key:
  value,
  ok: = pairs["orange"]
  if ok {
    Println(value)
  }

  value,
  ok = pairs[7]
  if ok {
    Println(value)
  }

  value,
  ok = pairs[12345]
  if ok {
    Println(value)
  } else {
    Println("not in the map.\n")
  }

  Println("len(ages) =", len(ages))

  //Iterating over a map:
  for key,
  value: = range primary {
    Println(key, "->", value)
  }

  delete(squares, 3)

  Println(squares[3] == nil)
}