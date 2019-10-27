N = gets.to_i

ans = []
1.upto(N).each do |num|
  ans.push([num, N / num]) if (N % num).zero?

  break if (N / num) < num
end

cnt = 0
ans.last.each do |k|
  cnt += k - 1
end

p cnt
