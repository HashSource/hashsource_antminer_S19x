int __fastcall sub_32845C(char *a1, int a2, int a3)
{
  int v3; // r4
  char *v4; // lr
  int v5; // r3
  int v6; // r1
  char *v7; // r3
  int v8; // r2
  int v9; // r7
  int v10; // r2
  char *v11; // lr
  char *v12; // r2
  __int16 v13; // t1
  int v14; // r12
  int v16; // r5
  char *v17; // r5
  int v18; // r9
  int v19; // r8
  int v20; // r10
  char *v21; // r6
  char *v22; // lr
  unsigned int v23; // t1
  bool v24; // cf
  unsigned int v25; // r1
  unsigned int v26; // r12
  unsigned int v27; // r2

  v3 = a3 + a2;
  if ( a3 + a2 <= 3 )
  {
    *(_WORD *)a1 *= (unsigned __int16)dword_438D00[a3];
    return a3 + a2;
  }
  if ( a2 <= 49 )
  {
    v4 = &a1[2 * *((unsigned __int8 *)&dword_438B18[5] + a2) - 2];
    if ( a3 <= 49 )
    {
LABEL_4:
      v5 = *((unsigned __int8 *)&dword_438B18[5] + a3);
      v6 = 3 * (v5 - 1);
      v7 = &v4[2 * v5];
      v8 = a3 - v6;
      v9 = 3 - v8;
      if ( v8 == 3 )
        goto LABEL_5;
      goto LABEL_14;
    }
  }
  else
  {
    v4 = &a1[(((2863311531u * (unsigned __int64)(unsigned int)(a2 + 2)) >> 32) & 0xFFFFFFFE) - 2];
    if ( a3 <= 49 )
      goto LABEL_4;
  }
  v7 = &v4[2 * ((a3 + 2) / 3u)];
  v8 = a3 - 3 * ((a3 + 2) / 3u - 1);
  v9 = 3 - v8;
  if ( v8 == 3 )
  {
LABEL_5:
    if ( a1 <= v4 )
    {
      v10 = v4 - a1;
      v11 = v4 + 2;
      v12 = &v7[~v10 & 0xFFFFFFFE];
      do
      {
        v13 = *((_WORD *)v11 - 1);
        v11 -= 2;
        *(_WORD *)v7 = v13;
        v7 -= 2;
      }
      while ( v7 != v12 );
    }
    goto LABEL_8;
  }
LABEL_14:
  if ( v3 <= 49 )
    v16 = 2 * (*((unsigned __int8 *)&dword_438B18[5] + v3) + 0x7FFFFFFF);
  else
    v16 = (((2863311531u * (unsigned __int64)(unsigned int)(v3 + 2)) >> 32) & 0xFFFFFFFE) - 2;
  v17 = &a1[v16];
  if ( a1 <= v4 )
  {
    v18 = dword_438D00[v8];
    v19 = dword_438D00[v9];
    v20 = dword_438B18[v9];
    v21 = &v7[~(v4 - a1) & 0xFFFFFFFE];
    v22 = v4 + 2;
    v14 = 0;
    do
    {
      v23 = *((unsigned __int16 *)v22 - 1);
      v22 -= 2;
      v24 = v17 >= v7;
      v7 -= 2;
      v25 = v20 * (v23 >> v9);
      v26 = (v25 >> 17) + v14;
      v27 = v23 - v19 * (v25 >> 17);
      if ( v24 )
        *((_WORD *)v7 + 1) = v26;
      v14 = v18 * v27;
    }
    while ( v7 != v21 );
    goto LABEL_9;
  }
LABEL_8:
  LOWORD(v14) = 0;
LABEL_9:
  while ( a1 <= v7 )
  {
    *(_WORD *)v7 = v14;
    v7 -= 2;
    LOWORD(v14) = 0;
  }
  return v3;
}
