# DISCLAIMER
# Do this On a Virtual Machine
# Don't Do this on your MAin pc

## Kernal_Hello_World
This program print Hello WOrld In Kernal

## Usage
  you want a linux virtual machine for this
  
  After clonning this repository,
  
  type
  ```bash
    make
  ```
 in your terminal
 
 Then You will have many files and there are a one file called <nameofprogram>.ko

that's the file we want

then type on your terminal
```bash
    insmod example.ko
```
then type 
```bash
  dmesg
```
you shoul see a "Hello World!" line!

To remove Kernal module run this
 ```bash
    rmmod example
 ```
  ## Remember there no .ko extention, only program name
  
  then you will see goodbye massage appear in the kernal buffer
  
