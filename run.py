from ctypes import *
lib = cdll.LoadLibrary('./libfoo.so')


class Foo(object):
    def __init__(self):
        self.obj = lib.Foo_new()

    def bar(self):
        lib.Foo_bar(self.obj)

    def __del__(self):
        lib.Foo_del(self.obj)

lib.out()

f = Foo()
f.bar()
del f