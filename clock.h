C
C CLOCK INTERRUPTS
C
	LOGICAL CFLAG
	COMMON /CEVENT/ CLNT,CTICK(25),CACTIO(25),CFLAG(25)
C
	COMMON /CINDEX/ CEVCUR,CEVMNT,CEVLNT,CEVMAT,CEVCND,
     &	CEVBAL,CEVBRN,CEVFUS,CEVLED,CEVSAF,CEVVLG,
     &	CEVGNO,CEVBUC,CEVSPH,CEVEGH,
     &	CEVFOR,CEVSCL,CEVZGI,CEVZGO,CEVSTE,
     &	CEVMRS,CEVPIN,CEVINQ,CEVFOL
	INTEGER EQC(25,2)
	EQUIVALENCE (CTICK, EQC)