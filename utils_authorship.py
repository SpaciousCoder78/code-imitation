#importing stuff
import numpy as np
import scipy.sparse
import typing
import os

def boolstr_to_floatstr(v: str)->str:
    if v.lower()=='':
        print
