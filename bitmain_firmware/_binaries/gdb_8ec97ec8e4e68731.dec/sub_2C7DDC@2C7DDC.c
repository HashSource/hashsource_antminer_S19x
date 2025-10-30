int __fastcall sub_2C7DDC(int result, int a2, _DWORD *a3)
{
  _DWORD *v3; // r6
  const char *v5; // r7
  int v6; // r5
  int v7; // r3
  int v8; // r0
  int v9; // r1
  bool v10; // zf
  int v11; // r2
  int v12; // r3
  int v13; // r1
  int v14; // r2
  int v15; // r3
  int v16; // r3
  int v17; // r2

  v3 = *(_DWORD **)(a2 + 28);
  if ( v3[11] != 4 )
    return result;
  v5 = (const char *)a3[3];
  v6 = result;
  v3[92] = a3[2];
  v7 = *(unsigned __int8 *)v5;
  if ( v7 != 114 )
  {
    if ( v7 == 97 && v5[1] == 98 && v5[2] == 115 && !v5[3] )
    {
      v3[93] = 2;
      goto LABEL_12;
    }
LABEL_10:
    if ( !strcmp(v5, "got-rel") )
      v3[93] = 96;
    else
      sub_2A6A5C("Invalid TARGET2 relocation type '%s'.", v5);
    goto LABEL_12;
  }
  if ( v5[1] != 101 || v5[2] != 108 || v5[3] )
    goto LABEL_10;
  v3[93] = 3;
LABEL_12:
  v8 = a3[4];
  v9 = a3[6];
  v10 = *(_DWORD *)(*(_DWORD *)(v6 + 4) + 4) == 5;
  v11 = a3[7];
  v3[97] |= a3[5];
  v12 = a3[10];
  v3[94] = v8;
  result = a3[11];
  v3[98] = v9;
  v13 = a3[12];
  v3[100] = v11;
  v14 = a3[14];
  v3[102] = v12;
  v15 = a3[15];
  v3[95] = result;
  v3[96] = v13;
  v3[109] = v14;
  v3[110] = v15;
  if ( !v10 || (v16 = *(_DWORD *)(v6 + 160)) == 0 || (*(_BYTE *)(v16 + 2340) & 0x3F) != 4 )
  {
    result = sub_2A6BBC("elf32-arm.c", 8729);
    v16 = *(_DWORD *)(v6 + 160);
  }
  v17 = a3[9];
  *(_DWORD *)(v16 + 2364) = a3[8];
  *(_DWORD *)(v16 + 2368) = v17;
  return result;
}
