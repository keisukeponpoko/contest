# frozen_string_literal: true

class Hashsh
  M = 10

  def initalize
    @array = Array.new(M)
  end

  # 実際はkeyをハッシュ化する。
  def hash(key)
    key % M
  end

  def insert(value, key)
    @array[hash(key)] = value
  end

  def search(key)
    @array[hash(key)]
  end
end
