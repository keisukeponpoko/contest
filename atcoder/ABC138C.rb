# frozen_string_literal: true

N = gets.to_i
vs = gets.chomp.split(' ').map(&:to_i)
vs.sort!

merged = vs[0].to_f
N.times do |i|
  next if N - 1 == i

  merged = (merged + vs[i + 1]) / 2.to_f
end
puts merged
