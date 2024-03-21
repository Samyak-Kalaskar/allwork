.model small 
.data 
a db 44h
b db 02h
.code
start:
mov ax ,@data
mov ds,ax
mov bl,a
mov cl,b
ror bl,cl
rol bl,cl
rcr bl,cl
rcl bl,cl
int 21h
mov ah,4ch
end start
end 
