from physics import physics
import ctypes
import pathlib
import os
os.system("python3 -m pip install invoke")
import invoke
os.system("python3 invoke build-Physics")
os.system("python3 invoke all")
if __name__ == "__main__":
	libname = pathlib.Path().absolute() / "Physics.so"
	c_lib = ctypes.CDLL(libname)
	

distance = input("What is the displacement? ")
time = input("What is the time? ")
acceleration = input("What is the acceleration? ")
velocity = input("What is the velocity? ")

questionType = input("Is your particle moving angularly or linearly? ")
