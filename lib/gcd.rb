# frozen_string_literal: true

# ユーグリッドの互除法
# 最大公約数が算出される。すごい...
def gcd(x, y)
  return x if y.zero?

  gcd(y, x % y)
end

puts gcd(34, 85)
