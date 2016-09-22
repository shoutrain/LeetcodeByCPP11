env = Environment()
env.Append(CCFLAGS = '-std=c++11')

objs = env.Object(Glob('src/*.cpp'))
print(objs)
env.Program('Leetcode', list(objs))