#!/usr/bin/env python
# coding: utf-8
import ctypes

class App:

    def __init__(self, fw: ctypes.CDLL) -> None:
        self.fw = fw

    def init(self) -> None:
        self.fw.dx_ChangeWindowMode(True)
        self.fw.dx_DxLib_Init()
        self.fw.dx_SetDrawScreen(-2)

    def update(self) -> None:
        pass

    def render(self) -> None:
        pass

    def terminate(self) -> None:
        self.fw.dx_DxLib_End()
