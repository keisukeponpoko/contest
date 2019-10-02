n,a,b=gets.chomp.split(" ").map(&:to_i);

sum = 0
(1..n).each do |i|
  numbers = i.to_s.chars.map(&:to_i)
  total = numbers.inject(:+)
  sum += i if a <= total && total <= b
end

puts sum
