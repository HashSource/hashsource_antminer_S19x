char *__fastcall sub_13BB38(char *result, _BYTE *a2, int a3, int a4, int a5, int a6, int *a7, int *a8, int a9)
{
  char *v10; // r7
  int v12; // r4
  int i; // r6
  char v14; // t1
  char v15; // r3
  unsigned int v16; // r12
  __int16 v17; // r3^2
  unsigned int v18; // r2
  int v19; // r6
  char v20; // t1
  char v21; // r3
  unsigned int v22; // r12
  __int16 v23; // r3^2
  unsigned int v24; // r2
  int v25; // [sp+0h] [bp+0h] BYREF
  unsigned int v26; // [sp+4h] [bp+4h]

  v10 = result;
  v12 = *a8;
  if ( a9 )
  {
    if ( a3 )
    {
      v19 = a3;
      if ( !v12 )
        goto LABEL_11;
      while ( 1 )
      {
        --v19;
        v20 = *v10++;
        v21 = *((_BYTE *)a7 + v12) ^ v20;
        *a2++ = v21;
        *((_BYTE *)a7 + v12) = v21;
        v12 = (v12 + 1) & 7;
        if ( !v19 )
          break;
        if ( !v12 )
        {
LABEL_11:
          v22 = a7[1];
          v25 = *a7;
          v26 = v22;
          sub_13E794(&v25, a4, a5, a6);
          v23 = HIWORD(v25);
          v24 = v26;
          *(_WORD *)a7 = v25;
          result = (char *)HIWORD(v24);
          *((_WORD *)a7 + 1) = v23;
          a7[1] = v24;
        }
      }
    }
  }
  else
  {
    for ( i = a3; i; ++a2 )
    {
      if ( !v12 )
      {
        v16 = a7[1];
        v25 = *a7;
        v26 = v16;
        sub_13E794(&v25, a4, a5, a6);
        v17 = HIWORD(v25);
        v18 = v26;
        *(_WORD *)a7 = v25;
        result = (char *)HIWORD(v18);
        *((_WORD *)a7 + 1) = v17;
        a7[1] = v18;
      }
      --i;
      v14 = *v10++;
      v15 = *((_BYTE *)a7 + v12) ^ v14;
      *((_BYTE *)a7 + v12) = v14;
      v12 = (v12 + 1) & 7;
      *a2 = v15;
    }
  }
  *a8 = v12;
  return result;
}
