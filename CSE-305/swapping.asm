.MODEL SMALL
.CODE
MAIN PROC
    MOV BL,'1'  ;FIRST VALUE IS :1
    MOV BH,'3'  ;SECOND VALUE IS :3
    
    XCHG BL,BH
    
    MOV AH,2
    MOV DL,BL
    INT 21H    
    
    MOV AH,2
    MOV DL,0DH
    INT 21H        ;FOR NEW LINE
    MOV DL,0AH
    INT 21H
    
    MOV AH,2
    MOV DL,BH
    INT 21H
    
    MOV AH,4CH
    INT 21H
    
    
MAIN ENDP