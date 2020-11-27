#!/usr/bin/env python
# coding: utf-8
import sys
import ctypes

def main() -> None:
    fw = ctypes.cdll.LoadLibrary("../framework.dll")
    fw.dx_ChangeWindowMode(1)
    if fw.dx_DxLib_Init() == -1:
        sys.exit()


if __name__ == "__main__": main()
