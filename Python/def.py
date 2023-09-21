def cold(a):
    print("Its' cold outside.")
    def hot(b):
        print("So, I came Inside.")
        return b+a
    return hot

func=cold(6)
print("??")
print(func(9)) # but func stores a value, na?

