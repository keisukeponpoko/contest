# frozen_string_literal: true

# use array
class ByArray
  MAX = 10

  def initialize
    @top = 0
    @list = []
  end

  def empty?
    @top.zero?
  end

  def full?
    @top >= MAX - 1
  end

  def push(val)
    raise Error if full?

    @top += 1
    @list[@top] = val
  end

  def pop
    raise Error if empty?

    @top -= 1
    @list[@top + 1]
  end
end
