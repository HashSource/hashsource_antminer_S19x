int __fastcall sub_3FDA0(int a1, int a2, int a3)
{
  char v3; // r5
  char v4; // r4
  int i; // r6
  int v6; // r1
  __int16 v7; // r1
  int v8; // r1
  char *v9; // r4
  int v10; // r3
  unsigned int v11; // lr
  unsigned int v12; // r0
  unsigned int v13; // r2
  unsigned int v14; // r2
  unsigned int v15; // r1
  void **v16; // r0
  int v18; // r1
  int *v19; // r12
  _DWORD *v20; // r6
  int v21; // r1
  int v22; // r2
  int v23; // r3
  int v24; // r1
  int v25; // r2
  int v26; // r3
  unsigned int v27; // lr
  unsigned int v28; // r0
  unsigned int v29; // r2
  void **j; // r0
  int v31; // [sp+0h] [bp-14h] BYREF
  int *v32; // [sp+4h] [bp-10h] BYREF
  void *ptr; // [sp+8h] [bp-Ch] BYREF

  v3 = *(_BYTE *)(a3 + 2);
  v4 = *(_BYTE *)(a3 + 3);
  i = dword_BDB40;
  dword_BDB3C = a1;
  dword_BDB38 = a2;
  if ( dword_BDB40 )
    v6 = 56;
  else
    v6 = 16;
  byte_BD93A = v3;
  dword_BD92C = v6;
  if ( dword_BDB40 )
    v7 = 14336;
  else
    v7 = 4096;
  byte_BD93B = v4;
  word_BD93E = v7;
  dword_BDB34 = 0;
  dword_BD930 = 0;
  dword_BD928 = 0;
  dword_BD924 = 0;
  ptr = 0;
  v8 = restrictlist4;
  v31 = restrictlist4;
  if ( restrictlist4 )
  {
    do
    {
      if ( !sub_3B2D8(&ptr, v8) )
        break;
      v8 = *(_DWORD *)v31;
      v31 = *(_DWORD *)v31;
    }
    while ( v31 );
    i = dword_BDB40;
  }
  v9 = (char *)&dword_BD940;
  while ( 1 )
  {
    if ( !sub_3B380((_DWORD **)&ptr, &v31) )
      goto LABEL_20;
    v10 = v31;
    v11 = *(unsigned __int16 *)(v31 + 8);
    v12 = *(unsigned __int16 *)(v31 + 10);
    v13 = bswap32(*(_DWORD *)(v31 + 20));
    if ( i )
      *((_DWORD *)v9 + 4) = 0;
    *(_DWORD *)v9 = v13;
    v14 = *(_DWORD *)(v10 + 4);
    v15 = bswap32(*(_DWORD *)(v10 + 24));
    *((_WORD *)v9 + 6) = (v11 >> 8) | ((_WORD)v11 << 8);
    *((_DWORD *)v9 + 1) = v15;
    *((_DWORD *)v9 + 2) = bswap32(v14);
    *((_WORD *)v9 + 7) = (v12 >> 8) | ((_WORD)v12 << 8);
    v9 = sub_3B168();
    if ( !v9 )
      break;
    i = dword_BDB40;
  }
  v16 = (void **)ptr;
  for ( i = dword_BDB40; ptr; v16 = (void **)ptr )
  {
    ptr = *v16;
    free(v16);
LABEL_20:
    ;
  }
  if ( i )
  {
    ptr = 0;
    v18 = restrictlist6;
    v32 = (int *)restrictlist6;
    if ( restrictlist6 )
    {
      do
      {
        if ( !sub_3B2D8(&ptr, v18) )
          break;
        v18 = *v32;
        v32 = (int *)*v32;
      }
      while ( v32 );
      if ( !v9 )
        goto LABEL_33;
    }
    else if ( !v9 )
    {
      return sub_3B8C4();
    }
    while ( sub_3B380((_DWORD **)&ptr, &v32) )
    {
      v19 = v32;
      v20 = v32 + 9;
      v21 = v32[6];
      v22 = v32[7];
      v23 = v32[8];
      *((_DWORD *)v9 + 6) = v32[5];
      *((_DWORD *)v9 + 7) = v21;
      *((_DWORD *)v9 + 8) = v22;
      *((_DWORD *)v9 + 9) = v23;
      v24 = v20[1];
      v25 = v20[2];
      v26 = v20[3];
      *((_DWORD *)v9 + 10) = *v20;
      *((_DWORD *)v9 + 11) = v24;
      *((_DWORD *)v9 + 12) = v25;
      *((_DWORD *)v9 + 13) = v26;
      v27 = *((unsigned __int16 *)v19 + 4);
      v28 = *((unsigned __int16 *)v19 + 5);
      v29 = v19[1];
      *((_DWORD *)v9 + 4) = 1;
      *((_WORD *)v9 + 6) = (v27 >> 8) | ((_WORD)v27 << 8);
      *((_DWORD *)v9 + 2) = bswap32(v29);
      *((_WORD *)v9 + 7) = (v28 >> 8) | ((_WORD)v28 << 8);
      v9 = sub_3B168();
      if ( !v9 )
        goto LABEL_33;
    }
    for ( j = (void **)ptr; ptr; j = (void **)ptr )
    {
      ptr = *j;
      free(j);
LABEL_33:
      ;
    }
  }
  return sub_3B8C4();
}
