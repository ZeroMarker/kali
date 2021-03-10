#!/usr/bin/ruby -w

arr = ["fred", 10, 3.14, "This is a string", "last element"]
arr.each do |i|
  puts i
end

def add(a, b)
  puts(a + b)
end

add(1, 4)

