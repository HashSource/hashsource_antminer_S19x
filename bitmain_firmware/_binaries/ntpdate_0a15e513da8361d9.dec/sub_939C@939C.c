char *__fastcall sub_939C(unsigned int a1, int a2, int a3, int a4)
{
  int v8; // r7
  char *v9; // r6
  char *v10; // r0
  char *v11; // r1
  unsigned int v12; // r3
  unsigned int v13; // r12
  char *v14; // r12
  char *v15; // r2
  char *v16; // r5
  char *v17; // r0
  char v18; // t1
  _BYTE *v20; // r0
  bool v21; // zf
  char v22; // r3
  char v23; // t1
  _BYTE *v24; // r12
  int v26; // [sp+8h] [bp-14h]
  int v27; // [sp+Ch] [bp-10h] BYREF
  int v28; // [sp+10h] [bp-Ch] BYREF

  v8 = lib_nextbuf;
  v9 = (char *)&lib_stringbuf + 128 * lib_nextbuf;
  v10 = (char *)memset(v9, 0, 0x80u);
  LOBYTE(v12) = 0;
  HIBYTE(v26) = 0;
  lib_nextbuf = ((_BYTE)v8 + 1) & 0xF;
  if ( !HIWORD(a1) )
    v11 = (char *)&v27;
  v27 = 0;
  if ( !HIWORD(a1) )
    v10 = (char *)&v27 + 1;
  v28 = 0;
  if ( HIWORD(a1) )
  {
    v10 = (char *)&v27 + 1;
    v13 = HIWORD(a1);
    v11 = (char *)&v27 + 1;
    do
    {
      LOBYTE(v12) = v13 % 0xA;
      v13 = (unsigned __int16)(v13 / 0xA);
      *--v11 = v12;
    }
    while ( v13 );
  }
  if ( a4 )
  {
    a3 = (__int16)(a3 + 3);
    if ( a3 > 2 )
    {
      v14 = (char *)&v27 + 3;
      v15 = (char *)&v28;
      if ( a3 >= 6 )
        LOWORD(a3) = 6;
    }
    else
    {
      v14 = (char *)&v27 + 3;
      v15 = (char *)&v28;
      LOWORD(a3) = 3;
    }
  }
  else
  {
    v14 = (char *)&v27;
    v15 = v10;
    if ( a3 <= 6 )
    {
      if ( a3 <= 0 )
      {
        v16 = v10;
        goto LABEL_16;
      }
    }
    else
    {
      LOWORD(a3) = 6;
    }
  }
  v16 = (char *)&v27 + (unsigned __int16)(a3 - 1) + 2;
  do
  {
    a1 = 10 * (unsigned __int16)a1;
    v12 = HIWORD(a1);
    *v10++ = BYTE2(a1);
  }
  while ( v10 != v16 );
LABEL_16:
  if ( (a1 & 0x8000) != 0 )
  {
    v17 = v16 - 1;
    v12 = (unsigned __int8)(*(v16 - 1) + 1);
    for ( *(v16 - 1) = v12; v12 > 9; *v17 = v12 )
    {
      *v17 = 0;
      v18 = *--v17;
      v12 = (unsigned __int8)(v18 + 1);
    }
  }
  if ( v11 < v14 )
  {
    LOBYTE(v12) = *v11;
    if ( !*v11 )
    {
      v12 = (unsigned int)(v11 + 1);
      do
      {
        v11 = (char *)v12;
        if ( (char *)v12 == v14 )
          break;
      }
      while ( !*(unsigned __int8 *)v12++ );
    }
  }
  if ( a2 )
  {
    v20 = &lib_stringbuf;
    LOBYTE(v12) = 45;
  }
  else
  {
    v20 = v9;
  }
  if ( a2 )
  {
    v20[128 * v8] = v12;
    v20 = v9 + 1;
  }
  if ( v16 <= v11 )
  {
    v24 = v20;
  }
  else
  {
    while ( 1 )
    {
      v21 = v11 == v15;
      v23 = *v11++;
      v22 = v23;
      if ( v21 )
        *v20++ = 46;
      v24 = v20 + 1;
      *v20 = v22 + 48;
      if ( v11 == v16 )
        break;
      ++v20;
    }
  }
  *v24 = 0;
  return v9;
}
