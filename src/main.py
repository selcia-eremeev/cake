#!/usr/bin/env python
# coding: utf-8
import ctypes
from src.app import App

def main() -> None:
    fw = ctypes.cdll.LoadLibrary("../framework.dll")
    app = App(fw)

    app.init()

    while not fw.dx_ScreenFlip() and not fw.dx_ProcessMessage() and not fw.dx_ClearDrawScreen():
        app.update()
        app.render()

    app.terminate()

if __name__ == "__main__": main()
