;Mehedi Hasan Nirob, Roll(04)

.MODEL SMALL
.CODE
MAIN PROC
    MOV BL,'8'  ;FIRST VALUE IS :8
    MOV BH,'2'  ;SECOND VALUE IS :2
    
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