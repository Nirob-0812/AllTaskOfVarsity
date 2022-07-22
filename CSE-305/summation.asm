.MODEL SMALL
 
.STACK 

.DATA
I DB 1            ;ININITIAL VALUE OF I IS 1
RESULT DB ?

.CODE
    MAIN PROC
        MOV AX,@DATA
        MOV DS,AX
    
        MOV CX,9  ;LOOP WILL BE TILL 9
        MOV BX,0
    
        SUM:
        ADD BH,I
        INC I         ;INCREMENT I UNTILL LOOP STOP
        LOOP SUM
    
        MOV RESULT,BH     ;FOR STORE IN RESULT TOTAL VALUE  
    
    
    MAIN ENDP
END MAIN
