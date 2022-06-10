.MODEL SMALL 
.DATA
A DB 4
B DB 2
.CODE 
MAIN PROC
    
    MOV AX,@DATA
    MOV DS,AX
    MOV BL,A
    MOV CL,B
    SUB BL,CL
    
    ADD BL,48
    
    MOV DL,BL
    MOV AH,2
    INT 21H

MAIN ENDP
END