char *__fastcall sub_8FB4(unsigned int a1, int a2, int a3, int a4)
{
  int v8; // r7
  char *v9; // r6
  char *v10; // r1
  char *v11; // lr
  unsigned int v12; // r2
  unsigned int v13; // r3
  unsigned int v14; // r0
  char *v15; // r2
  int v16; // r5
  char *v17; // r0
  char v18; // t1
  char *v19; // r12
  _BYTE *v21; // r0
  _BYTE *v22; // r12
  _BYTE *v23; // r3
  char v24; // t1
  int v26; // [sp+8h] [bp-14h] BYREF
  int v27; // [sp+Ch] [bp-10h] BYREF
  int v28; // [sp+10h] [bp-Ch] BYREF

  v8 = lib_nextbuf;
  v9 = (char *)&lib_stringbuf + 128 * lib_nextbuf;
  memset(v9, 0, 0x80u);
  v12 = HIWORD(a1) << 16;
  lib_nextbuf = ((_BYTE)v8 + 1) & 0xF;
  LOBYTE(v13) = 0;
  v27 = 0;
  if ( !v12 )
    v10 = (char *)&v27;
  v26 = 0;
  if ( !v12 )
    v11 = (char *)&v27 + 1;
  v28 = 0;
  if ( v12 )
  {
    v11 = (char *)&v27 + 1;
    v14 = HIWORD(a1);
    v10 = (char *)&v27 + 1;
    do
    {
      LOBYTE(v13) = v14 % 0xA;
      v14 = (unsigned __int16)(v14 / 0xA);
      *--v10 = v13;
    }
    while ( v14 );
  }
  if ( a4 )
  {
    v15 = (char *)&v28;
    a3 = (__int16)(a3 + 3);
    if ( a3 <= 2 )
    {
      LOWORD(a3) = 3;
      goto LABEL_14;
    }
  }
  else
  {
    v15 = v11;
  }
  if ( a3 <= 6 )
  {
    if ( a3 <= 0 )
      goto LABEL_17;
  }
  else
  {
    LOWORD(a3) = 6;
  }
LABEL_14:
  v13 = (unsigned int)v11;
  v16 = (unsigned __int16)(a3 - 1);
  do
  {
    a1 = 10 * (unsigned __int16)a1;
    *(_BYTE *)v13++ = BYTE2(a1);
  }
  while ( (int *)v13 != (int *)((char *)&v26 + v16 + 6) );
  v11 += v16 + 1;
LABEL_17:
  if ( (a1 & 0x8000) != 0 )
  {
    v17 = v11 - 1;
    v13 = (unsigned __int8)(*(v11 - 1) + 1);
    for ( *(v11 - 1) = v13; v13 > 9; *v17 = v13 )
    {
      *v17 = 0;
      v18 = *--v17;
      v13 = (unsigned __int8)(v18 + 1);
    }
  }
  v19 = v15 - 1;
  if ( v10 < v15 - 1 )
  {
    LOBYTE(v13) = *v10;
    if ( !*v10 )
    {
      v13 = (unsigned int)(v10 + 1);
      do
      {
        v10 = (char *)v13;
        if ( v19 == (char *)v13 )
          break;
      }
      while ( !*(unsigned __int8 *)v13++ );
    }
  }
  if ( a2 )
  {
    v19 = (char *)&lib_stringbuf;
    LOBYTE(v13) = 45;
    v21 = v9 + 1;
  }
  else
  {
    v21 = v9;
  }
  if ( a2 )
    v19[128 * v8] = v13;
  if ( v11 <= v10 )
  {
    v22 = v21;
  }
  else
  {
    do
    {
      v22 = v21 + 1;
      if ( v15 == v10 )
      {
        v23 = v21++;
        *v23 = 46;
        v22 = v23 + 2;
      }
      v24 = *v10++;
      *v21 = v24 + 48;
      v21 = v22;
    }
    while ( v11 != v10 );
  }
  *v22 = 0;
  return v9;
}
