_DWORD *__fastcall sub_211E70(char *a1, char *a2)
{
  int v2; // r10
  char *v3; // r5
  _DWORD *v5; // r9
  int v6; // r8
  char *v7; // r4
  char *v8; // r6
  bool v9; // zf
  int *v10; // r7
  int v11; // r3
  int v12; // r3
  int v13; // r2
  int v14; // r11
  _DWORD *v15; // r5
  int v16; // r0
  int v17; // r0

  v2 = (a2 - a1) >> 4;
  v3 = a1;
  v5 = sub_211DBC(v2);
  if ( a2 == v3 )
  {
    v6 = 0;
  }
  else
  {
    v7 = v3 + 16;
    v6 = 0;
    v8 = &v3[((a2 - (v3 + 16)) & 0xFFFFFFF0) + 16];
    do
    {
      while ( 1 )
      {
        v10 = (int *)*((_DWORD *)v3 + 2);
        v11 = v10[5] & 3;
        if ( v11 )
          v11 = v2 > v6;
        if ( v11 )
          break;
        v9 = v8 == v7;
        v3 = v7;
        v7 += 16;
        if ( v9 )
          goto LABEL_10;
      }
      v12 = 3 * v6;
      v13 = *(_DWORD *)v3;
      v14 = v10[37];
      ++v6;
      v15 = &v5[v12];
      v16 = *v10;
      v15[1] = v13;
      v15[2] = sub_327254(v16);
      v17 = sub_162FDC(v14, (int)v10);
      v9 = v8 == v7;
      v15[3] = v17;
      v3 = v7;
      v7 += 16;
    }
    while ( !v9 );
  }
LABEL_10:
  *v5 = v6;
  return v5;
}
