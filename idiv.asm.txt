.model small
.stack 100h
.data
a dw 0045h
b db 07h
.code
mov ax,@data
mov ds,ax
mov ax,a
mov bl,b
idiv bl
int 21h
mov ah,4CH
int 3h
end
