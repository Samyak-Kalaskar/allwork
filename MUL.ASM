.model small
.stack 100h
.data
a db 05h
b db 09h
.code
mov ax,@data
mov ds,ax
mov al,a
mov bl,b
mul bl
mov ah,4ch
int 3h
int 21
end
