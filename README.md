# A C++ High Performance JSON Generator

[![Build Status](https://travis-ci.org/linyacool/WebServer.svg?branch=master)](https://travis-ci.org/linyacool/WebServer)
[![license](https://img.shields.io/github/license/mashape/apistatus.svg)](https://opensource.org/licenses/MIT)

  
## Introduction  

本项目为C++11编写的Json生成器,只需把头文件复制至你的项目中即可使用，



## Envoirment  
* OS: Ubuntu 16.04
* Complier: g++ 5.4

## Build

	make

## Usage

	./xxx 


## Technical points
* 使用 stack 来存储 json 对象的深度，这个深度被用来控制打印输出 json 时的格式：比如标点符号、缩进对齐、换行
* Key - Value 各种数据类型基于泛型与重载实现
* 使用模版及内联函数去降低函数调用开销。




