.model small 
.data 
m db "hi $"
positive db "Number is Positive $"
negative db "Number is Negative $"
.code
start:
mov ax ,@data
mov ds,ax
mov al,0feh
And al,80h
jz post
lea dx, negative
jmp ans
post: lea dx,positive 
ans: mov ah,09h
int 21h
mov ah,4ch
end start
end 