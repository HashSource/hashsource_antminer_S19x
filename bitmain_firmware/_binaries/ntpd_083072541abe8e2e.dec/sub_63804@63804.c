char *__fastcall sub_63804(unsigned int a1, unsigned int a2, int a3, int a4, int a5)
{
  int v9; // r7
  char *v10; // r6
  char *v11; // r3
  char *v12; // r2
  int v13; // r12
  bool v14; // cc
  char v15; // r1
  int v16; // r10
  char *v17; // r8
  bool v18; // cc
  unsigned int v19; // r12
  unsigned int v20; // r1
  int v21; // r5
  bool v22; // cf
  char v23; // r0
  char v24; // r1
  char v25; // r0
  char v26; // r1
  bool v27; // cc
  char *v28; // r1
  _BYTE *v30; // r0
  _BYTE *v31; // r1
  char v32; // t1
  char *v34; // r0
  char v35; // t1
  int v36; // r1
  _BYTE *v37; // r12
  _DWORD v38[6]; // [sp+Ch] [bp-20h] BYREF

  v9 = lib_nextbuf;
  v10 = &lib_stringbuf[128 * lib_nextbuf];
  memset(v10, 0, 0x80u);
  memset(v38, 0, sizeof(v38));
  v11 = (char *)&v38[2] + 2;
  lib_nextbuf = ((_BYTE)v9 + 1) & 0xF;
  if ( a1 )
  {
    v12 = (char *)&v38[2] + 2;
    v13 = 10;
    do
    {
      --v13;
      v14 = a1 / 0xA == 0;
      if ( a1 / 0xA )
        v14 = v13 <= 0;
      v15 = a1 % 0xA;
      a1 /= 0xAu;
      *--v12 = v15;
    }
    while ( !v14 );
  }
  else
  {
    v12 = (char *)&v38[2] + 2;
  }
  if ( a4 < 0 )
  {
    if ( !a5 )
    {
      v17 = (char *)&v38[2] + 2;
      goto LABEL_48;
    }
    v16 = 3;
    goto LABEL_12;
  }
  if ( a5 )
  {
    v16 = a4 + 3;
    if ( a4 + 3 >= 14 )
      v16 = 14;
LABEL_12:
    v17 = (char *)&v38[3] + 1;
    if ( !a2 )
      goto LABEL_28;
    goto LABEL_20;
  }
  if ( a4 >= 14 )
    v16 = 14;
  else
    v16 = a4;
  v18 = (int)a2 <= 0;
  if ( a2 )
    v18 = a4 <= 0;
  v17 = (char *)&v38[2] + 2;
  if ( !v18 )
  {
    do
    {
LABEL_20:
      v19 = a2 >> 31;
      v20 = (2 * a2) >> 31;
      v21 = (a2 >> 29) & 1;
      v22 = __CFADD__(2 * a2, 8 * a2);
      a2 *= 10;
      v23 = v20 | (2 * v19);
      --v16;
      v24 = v22;
      v25 = v21 | (2 * v23);
      v26 = v24 + v19;
      v27 = (int)a2 <= 0;
      if ( a2 )
        v27 = v16 <= 0;
      *v11++ = v26 + v25;
    }
    while ( !v27 );
  }
  if ( v16 )
  {
LABEL_28:
    v11 += v16;
    goto LABEL_29;
  }
LABEL_48:
  v34 = v11;
  if ( ((v11 - (char *)v38 > 0) & (a2 >> 31)) != 0 )
  {
    while ( 1 )
    {
      v35 = *--v34;
      v36 = (unsigned __int8)(v35 + 1);
      if ( v36 != 10 )
        break;
      *v34 = 0;
      if ( v34 - (char *)v38 <= 0 )
        goto LABEL_51;
    }
    *v34 = v36;
  }
LABEL_51:
  if ( v12 >= v34 )
    v12 = v34;
LABEL_29:
  if ( v12 >= v17 )
  {
LABEL_35:
    v12 = v17 - 1;
    goto LABEL_36;
  }
  if ( !*v12 )
  {
    v28 = v12 + 1;
    do
    {
      v12 = v28;
      if ( v28 == v17 )
        goto LABEL_35;
    }
    while ( !*v28++ );
  }
LABEL_36:
  if ( a3 )
  {
    v30 = v10 + 1;
    lib_stringbuf[128 * v9] = 45;
  }
  else
  {
    v30 = v10;
  }
  if ( v12 < v11 )
  {
    do
    {
      v37 = v30 + 1;
      if ( v12 == v17 )
      {
        v31 = v30++;
        *v31 = 46;
        v37 = v31 + 2;
      }
      v32 = *v12++;
      *v30 = v32 + 48;
      v30 = v37;
    }
    while ( v12 != v11 );
  }
  else
  {
    v37 = v30;
  }
  *v37 = 0;
  return v10;
}
