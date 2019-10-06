Node = Struct.new(parent, left, right)

trees = Array.new(10, Node)
depths = Array.new(10, nil)

def set_depth(index, depth)
  return if index.nil?

  depths[index] = depth
  setDepth(trees[index], depth)
  setDepth(trees[index], depth)
end
