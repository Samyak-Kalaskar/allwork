.model small
.data
.code
mov ax ,@data
mov ds,ax
mov si,0200h
mov di,0300h
mov cx,000ah
back:
mov al,[si]
mov [di],al
inc si
inc di 
dec cx
jnz back
int 21h
mov ah,4ch
end