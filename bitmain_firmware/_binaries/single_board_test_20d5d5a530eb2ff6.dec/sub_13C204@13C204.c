char *__fastcall sub_13C204(char *result, _BYTE *a2, int a3, int a4, int *a5, int *a6, int a7)
{
  char *v8; // r7
  int v10; // r4
  int i; // r6
  char v12; // t1
  char v13; // r3
  unsigned int v14; // r3
  __int16 v15; // r3^2
  unsigned int v16; // r2
  int v17; // r6
  char v18; // t1
  char v19; // r3
  unsigned int v20; // r3
  __int16 v21; // r3^2
  unsigned int v22; // r2
  int v23; // [sp+0h] [bp+0h] BYREF
  unsigned int v24; // [sp+4h] [bp+4h]

  v8 = result;
  v10 = *a6;
  if ( a7 )
  {
    if ( a3 )
    {
      v17 = a3;
      if ( !v10 )
        goto LABEL_11;
      while ( 1 )
      {
        --v17;
        v18 = *v8++;
        v19 = *((_BYTE *)a5 + v10) ^ v18;
        *a2++ = v19;
        *((_BYTE *)a5 + v10) = v19;
        v10 = (v10 + 1) & 7;
        if ( !v17 )
          break;
        if ( !v10 )
        {
LABEL_11:
          v20 = a5[1];
          v23 = *a5;
          v24 = v20;
          sub_13C7E0(&v23, a4, 1);
          v21 = HIWORD(v23);
          v22 = v24;
          *(_WORD *)a5 = v23;
          result = (char *)HIWORD(v22);
          *((_WORD *)a5 + 1) = v21;
          a5[1] = v22;
        }
      }
    }
  }
  else
  {
    for ( i = a3; i; ++a2 )
    {
      if ( !v10 )
      {
        v14 = a5[1];
        v23 = *a5;
        v24 = v14;
        sub_13C7E0(&v23, a4, 1);
        v15 = HIWORD(v23);
        v16 = v24;
        *(_WORD *)a5 = v23;
        result = (char *)HIWORD(v16);
        *((_WORD *)a5 + 1) = v15;
        a5[1] = v16;
      }
      --i;
      v12 = *v8++;
      v13 = *((_BYTE *)a5 + v10) ^ v12;
      *((_BYTE *)a5 + v10) = v12;
      v10 = (v10 + 1) & 7;
      *a2 = v13;
    }
  }
  *a6 = v10;
  return result;
}
