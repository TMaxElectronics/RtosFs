# RtosFs

A FatFs implementation adapted for use with FreeRTOS. This is kind of work in progress and won't be immediately usable if anybody needs it. 

# Modifications over the base FatFs

- Changed f_open to reflect standard C library convention and return a file pointer instead of a FRESULT
- Added f_readFast, which allows for the longest possible sequential reads from storage for speed. This requires my DLL (doubly linked list) library and a readList command in the diskIO (see my implementation of that for ideas)
  
