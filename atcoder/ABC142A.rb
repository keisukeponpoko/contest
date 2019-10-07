# frozen_string_literal: true

N = gets.to_i

cnt = if (N % 2).zero?
        N / 2
      else
        N / 2 + 1
      end

puts cnt / N.to_f
