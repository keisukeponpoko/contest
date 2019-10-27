A, B = gets.chomp.split(' ').map(&:to_i)

if A >= 10 || B >= 10
  p -1
else
  p A * B
end
