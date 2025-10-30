int __fastcall sub_4A65C(__int16 *a1, int a2, int a3)
{
  _WORD *v3; // r2
  int v6; // r3
  int v7; // r0
  int v8; // r8
  size_t v9; // r2
  char *v10; // r7
  int v12; // r3
  int v13; // r12
  int v14; // r3
  char v15[48]; // [sp+Ch] [bp-34h] BYREF
  int v16; // [sp+3Ch] [bp-4h]

  v3 = (_WORD *)(a3 + 516);
  v6 = (unsigned __int16)(*v3 + 1);
  v7 = _stack_chk_guard;
  *v3 = v6;
  v16 = v7;
  switch ( v6 )
  {
    case 1:
      v8 = 10;
      v9 = 10;
      v10 = "ATE0Q0V1\r\n";
      goto LABEL_3;
    case 2:
      v10 = v15;
      if ( (*(_BYTE *)(a2 + 768) & 4) != 0 )
        v12 = 2;
      else
        v12 = 0;
      if ( (*(_BYTE *)(a2 + 768) & 8) != 0 )
        v13 = 2;
      else
        v13 = 1;
      sub_6C054(v15, 46, "ATM%dL%d\r\n", v12, v13);
      v9 = strlen(v15);
      v8 = v9;
      goto LABEL_3;
    case 3:
      v8 = 7;
      v9 = 7;
      v10 = "AT&K4\r\n";
      goto LABEL_3;
    case 4:
      v8 = 12;
      v9 = 12;
      v10 = "AT+MS=V22B\r\n";
      goto LABEL_3;
    case 5:
      v8 = 7;
      v9 = 7;
      v10 = "AT%C0\r\n";
      goto LABEL_3;
    case 6:
      v10 = v15;
      if ( (*(_BYTE *)(a2 + 768) & 2) != 0 )
        v14 = 3;
      else
        v14 = 0;
      sub_6C054(v15, 46, "AT\\N%d\r\n", v14);
      v9 = strlen(v15);
      v8 = v9;
      goto LABEL_3;
    case 7:
      v8 = 6;
      v9 = 6;
      v10 = "ATH1\r\n";
LABEL_3:
      if ( write(*(_DWORD *)(a2 + 28), v10, v9) != v8 )
        sub_394A0(a1, 3);
      sub_4A084((int)a1, 2, v10);
      return 0;
    case 8:
      return 1;
    default:
      return 0;
  }
}
