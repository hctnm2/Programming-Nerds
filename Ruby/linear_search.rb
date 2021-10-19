def search(arr, n)
  (0..arr.count-1).step(1) do |i|
      return i if arr[i] == n
  end
  false
end

arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
n = 10

result = search(arr, n)
unless result
  puts "this element is not in the arrey"
else
  puts "#{n} is in position #{result}"
end