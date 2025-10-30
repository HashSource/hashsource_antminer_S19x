int __fastcall sub_242010(int result, char *a2, int a3, int (__fastcall *a4)(_DWORD, int))
{
  int v5; // r2
  char *v6; // r6
  char *v8; // r9
  char *v9; // r5
  int v10; // r4
  int v11; // r0
  int v12; // r1
  int v13; // r3
  __int64 v14; // r0
  char *v15; // r11
  char *v16; // r8
  char *v17; // r4
  int v18; // r1
  int v19; // r2
  int v20; // t1
  int v21; // r4
  int v22; // r5
  int *v23; // r9
  int v24; // t1
  int v26; // t1
  int v27; // r0
  char *v28; // [sp+Ch] [bp-8h]

  v5 = (int)&a2[-result];
  if ( (int)&a2[-result] > 64 )
  {
    v6 = (char *)result;
    if ( !a3 )
    {
      v16 = a2;
      goto LABEL_19;
    }
    v8 = a2;
    v9 = a2;
    v28 = (char *)(result + 4);
    while ( 1 )
    {
      --a3;
      v10 = (int)(((v9 - v6) >> 2) + ((unsigned int)(v9 - v6) >> 31)) >> 1;
      v11 = a4(*((_DWORD *)v6 + 1), *(_DWORD *)&v6[4 * v10]);
      v12 = *((_DWORD *)v8 - 1);
      if ( v11 )
      {
        if ( a4(*(_DWORD *)&v6[4 * v10], v12) )
        {
          v13 = *(_DWORD *)v6;
LABEL_26:
          *(_DWORD *)v6 = *(_DWORD *)&v6[4 * v10];
          *(_DWORD *)&v6[4 * v10] = v13;
          LODWORD(v14) = *((_DWORD *)v6 + 1);
          HIDWORD(v14) = *(_DWORD *)v6;
          goto LABEL_10;
        }
        if ( !a4(*((_DWORD *)v6 + 1), *((_DWORD *)v8 - 1)) )
          goto LABEL_27;
        v13 = *(_DWORD *)v6;
      }
      else
      {
        if ( a4(*((_DWORD *)v6 + 1), v12) )
        {
LABEL_27:
          v14 = *(_QWORD *)v6;
          *((_DWORD *)v6 + 1) = *(_DWORD *)v6;
          *(_DWORD *)v6 = HIDWORD(v14);
          goto LABEL_10;
        }
        v27 = a4(*(_DWORD *)&v6[4 * v10], *((_DWORD *)v8 - 1));
        v13 = *(_DWORD *)v6;
        if ( !v27 )
          goto LABEL_26;
      }
      *(_DWORD *)v6 = *((_DWORD *)v8 - 1);
      *((_DWORD *)v8 - 1) = v13;
      LODWORD(v14) = *((_DWORD *)v6 + 1);
      HIDWORD(v14) = *(_DWORD *)v6;
LABEL_10:
      v9 = v28;
      v15 = v8;
      while ( 1 )
      {
        v16 = v9;
        if ( a4(v14, HIDWORD(v14)) )
          goto LABEL_16;
        v17 = v15 - 4;
        do
        {
          v18 = *(_DWORD *)v17;
          v15 = v17;
          v17 -= 4;
        }
        while ( a4(*(_DWORD *)v6, v18) );
        if ( v9 >= v15 )
          break;
        v19 = *(_DWORD *)v9;
        *(_DWORD *)v9 = *(_DWORD *)v15;
        *(_DWORD *)v15 = v19;
LABEL_16:
        v20 = *((_DWORD *)v9 + 1);
        v9 += 4;
        LODWORD(v14) = v20;
        HIDWORD(v14) = *(_DWORD *)v6;
      }
      result = sub_242010(v9, v8, a3, a4);
      v5 = v9 - v6;
      if ( v9 - v6 <= 64 )
        return result;
      v8 = v9;
      if ( !a3 )
      {
LABEL_19:
        v21 = v5 >> 2;
        v22 = ((v5 >> 2) - 2) >> 1;
        v23 = (int *)&v6[4 * v22];
        do
        {
          v24 = *v23--;
          sub_241EC0((int)v6, v22, v21, v24, a4);
        }
        while ( v22-- != 0 );
        do
        {
          v26 = *((_DWORD *)v16 - 1);
          v16 -= 4;
          *(_DWORD *)v16 = *(_DWORD *)v6;
          result = sub_241EC0((int)v6, 0, (v16 - v6) >> 2, v26, a4);
        }
        while ( v16 - v6 > 4 );
        return result;
      }
    }
  }
  return result;
}
