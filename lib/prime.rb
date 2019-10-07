# frozen_string_literal: true

# 素数を取得する方法...すごい
def primes(n)
  is_primes = {}
  primes = []
  2.upto(n) do |i|
    next if is_primes[i] == false

    primes.push(i)
    j = i * i
    while j <= n
      is_primes[j] = false
      j += i
    end
  end

  primes
end

p primes(100)
