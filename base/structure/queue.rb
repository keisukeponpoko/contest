# frozen_string_literal: true

# use array
class ByArray
  MAX = 10

  def initialize
    @head = @tail = 0
    @list = []
  end

  def empty?
    @head == @tail
  end

  def full?
    @head == (@tail + 1) % MAX
  end

  def enqueue(val)
    raise Error if full?

    @list[@tail] = val
    if @tail + 1 == MAX
      @tail = 0
    else
      @tail += 1
    end
  end

  def dequeue
    raise Error if empty?

    x = @list[@head]
    if @head + 1 == MAX
      @head = 0
    else
      @head += 1
    end

    x
  end
end
