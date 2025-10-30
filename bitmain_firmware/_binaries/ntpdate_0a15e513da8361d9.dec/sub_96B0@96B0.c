char *__fastcall sub_96B0(unsigned int a1, signed int a2, int a3, int a4, int a5)
{
  int v9; // r9
  char *v10; // r6
  char *v11; // r2
  int v12; // r12
  char *v13; // lr
  bool v14; // cc
  char v15; // r3
  char *v16; // r3
  bool v17; // cc
  char *v18; // r10
  bool v19; // cc
  _BYTE *v21; // r1
  bool v22; // zf
  char v23; // r2
  char v24; // t1
  _BYTE *v25; // r12
  unsigned int v27; // r4
  int v28; // r4
  char *v29; // r1
  char v30; // t1
  _DWORD v31[6]; // [sp+Ch] [bp-20h] BYREF
  int v32; // [sp+24h] [bp-8h] BYREF

  v9 = lib_nextbuf;
  v10 = (char *)&lib_stringbuf + 128 * lib_nextbuf;
  memset(v10, 0, 0x80u);
  memset(v31, 0, sizeof(v31));
  v11 = (char *)&v31[2] + 2;
  lib_nextbuf = ((_BYTE)v9 + 1) & 0xF;
  if ( a1 )
  {
    v12 = 10;
    v13 = (char *)&v31[2] + 2;
    do
    {
      --v12;
      v14 = a1 / 0xA == 0;
      if ( a1 / 0xA )
        v14 = v12 <= 0;
      v15 = a1 % 0xA;
      a1 /= 0xAu;
      *--v13 = v15;
    }
    while ( !v14 );
  }
  else
  {
    v13 = (char *)&v31[2] + 2;
  }
  if ( a4 >= 0 )
  {
    if ( !a5 )
    {
      v16 = (char *)&v31[2] + 2;
      goto LABEL_11;
    }
    a4 += 3;
LABEL_47:
    v16 = (char *)&v31[3] + 1;
LABEL_11:
    if ( a4 > 14 )
    {
      if ( !a2 )
      {
        v18 = (char *)&v32;
        goto LABEL_23;
      }
      a4 = 14;
    }
    else
    {
      v17 = a2 <= 0;
      if ( a2 )
        v17 = a4 <= 0;
      if ( v17 )
      {
        v18 = (char *)&v31[2] + 2;
        goto LABEL_20;
      }
    }
    v18 = (char *)&v31[2] + 2;
    do
    {
      v11 = (char *)((10 * (unsigned __int64)(unsigned int)a2) >> 32);
      a2 *= 10;
      --a4;
      v19 = a2 <= 0;
      if ( a2 )
        v19 = a4 <= 0;
      *v18++ = (char)v11;
    }
    while ( !v19 );
LABEL_20:
    if ( a4 )
    {
      v18 += a4;
      goto LABEL_23;
    }
    goto LABEL_48;
  }
  if ( a5 )
  {
    a4 = 3;
    goto LABEL_47;
  }
  v16 = (char *)&v31[2] + 2;
  v18 = (char *)&v31[2] + 2;
LABEL_48:
  v27 = (unsigned int)a2 >> 31;
  v11 = (char *)(v18 - (char *)v31);
  if ( v18 - (char *)v31 <= 0 )
    v28 = 0;
  else
    v28 = v27 & 1;
  if ( v28 )
  {
    v29 = v18;
    while ( 1 )
    {
      v30 = *--v29;
      v11 = (char *)(unsigned __int8)(v30 + 1);
      if ( v11 != &byte_9[1] )
        break;
      *v29 = 0;
      LOBYTE(v11) = (_BYTE)v29 + -(int)v31;
      if ( v29 - (char *)v31 <= 0 )
        goto LABEL_55;
    }
    *v29 = (char)v11;
  }
  else
  {
    v29 = v18;
  }
LABEL_55:
  if ( v13 >= v29 )
    v13 = v29;
LABEL_23:
  if ( v13 < v16 )
  {
    LOBYTE(v11) = *v13;
    if ( *v13 )
      goto LABEL_29;
    v11 = v13 + 1;
    while ( 1 )
    {
      v13 = v11;
      if ( v11 == v16 )
        break;
      if ( *v11++ )
        goto LABEL_29;
    }
  }
  v13 = v16 - 1;
LABEL_29:
  if ( a3 )
  {
    v21 = &lib_stringbuf;
    LOBYTE(v11) = 45;
  }
  else
  {
    v21 = v10;
  }
  if ( a3 )
  {
    v21[128 * v9] = (_BYTE)v11;
    v21 = v10 + 1;
  }
  if ( v13 >= v18 )
  {
    v25 = v21;
  }
  else
  {
    while ( 1 )
    {
      v22 = v13 == v16;
      v24 = *v13++;
      v23 = v24;
      if ( v22 )
        *v21++ = 46;
      v25 = v21 + 1;
      *v21 = v23 + 48;
      if ( v13 == v18 )
        break;
      ++v21;
    }
  }
  *v25 = 0;
  return v10;
}
