int __fastcall sub_4BD04(int a1, int a2, int a3)
{
  _WORD *v3; // r2
  __int16 v6; // r3
  int v7; // r8
  size_t v8; // r2
  char *v9; // r6
  int v11; // r3
  int v12; // r3
  int v13; // r12
  char v14[48]; // [sp+Ch] [bp-34h] BYREF

  v3 = (_WORD *)(a3 + 516);
  v6 = *v3 + 1;
  *v3 = v6;
  switch ( v6 )
  {
    case 1:
      v7 = 10;
      v8 = 10;
      v9 = "ATE0Q0V1\r\n";
      goto LABEL_3;
    case 2:
      v9 = v14;
      if ( (*(_BYTE *)(a2 + 768) & 4) != 0 )
        v12 = 2;
      else
        v12 = 0;
      if ( (*(_BYTE *)(a2 + 768) & 8) != 0 )
        v13 = 2;
      else
        v13 = 1;
      sub_6D00C(v14, 46, "ATM%dL%d\r\n", v12, v13);
      v8 = strlen(v14);
      v7 = v8;
      goto LABEL_3;
    case 3:
      v7 = 7;
      v8 = 7;
      v9 = "AT&K4\r\n";
      goto LABEL_3;
    case 4:
      v7 = 12;
      v8 = 12;
      v9 = "AT+MS=V22B\r\n";
      goto LABEL_3;
    case 5:
      v7 = 7;
      v8 = 7;
      v9 = "AT%C0\r\n";
      goto LABEL_3;
    case 6:
      v9 = v14;
      if ( (*(_BYTE *)(a2 + 768) & 2) != 0 )
        v11 = 3;
      else
        v11 = 0;
      sub_6D00C(v14, 46, "AT\\N%d\r\n", v11);
      v8 = strlen(v14);
      v7 = v8;
      goto LABEL_3;
    case 7:
      v7 = 6;
      v8 = 6;
      v9 = "ATH1\r\n";
LABEL_3:
      if ( write(*(_DWORD *)(a2 + 28), v9, v8) != v7 )
        sub_39C88(a1, 3);
      sub_4B63C(a1, 2, v9);
      return 0;
    case 8:
      return 1;
    default:
      return 0;
  }
}
