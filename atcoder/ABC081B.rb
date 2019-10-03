# frozen_string_literal: true

N = gets.to_i
a = gets.split.map(&:to_i)

cnt = 0
catch(:break) do
  loop do
    a.each_with_index do |v, i|
      throw :break if v.odd?
      a[i] = v / 2
    end

    cnt += 1
  end
end

puts cnt
