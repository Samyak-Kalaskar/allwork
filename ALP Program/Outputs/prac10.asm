.model small
.data
.code
cube macro 
mov bl,al
mul bl
mul bl
endm
start:
mov ax ,@data 
mov al,07h
cube
int 21h
mov ah,4ch
end start
