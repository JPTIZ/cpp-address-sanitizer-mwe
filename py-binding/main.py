from leaker_py import (
    leak_cpp_only,
    leak_return_value,
    nothing,
)

def leak(name, f):
    print(f'[Python] Leaking with: {name}...')
    f()
    print('[Python] Leaked.')

leak('nothing', nothing)
leak('leak_cpp_only', leak_cpp_only)
leak('leak_return_value', leak_return_value)
