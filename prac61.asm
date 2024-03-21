.model small 
.data 
a db 44h
b db 03h
.code
start:
mov ax ,@data
mov ds,ax
mov bl,a
mov cl,b
sal bl,cl
shr bl,cl
sar bl,cl
int 21h
mov ah,4ch
end start
end 