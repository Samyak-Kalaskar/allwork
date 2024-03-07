.model small
.stack 100h
.data
a dw 5555h
b dw 1234h
.code
mov ax,@data
mov ds,ax
mov ax,a
mov bx,b
sub ax,bx
sbb ax,bx
dec bx
mov ah,4ch
int 3h
int 21h
end

