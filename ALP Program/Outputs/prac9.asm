.model small
.data 
.code
mov ax,@data
mov ds,ax
mov ax,007h
mov bx,ax
back:
dec bx
mul bx
mov cx,bx
cmp cx,01h
jnz back
int 21h
mov ah,4ch
end