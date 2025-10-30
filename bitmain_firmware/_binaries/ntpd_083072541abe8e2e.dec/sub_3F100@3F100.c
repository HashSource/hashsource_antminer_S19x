int __fastcall sub_3F100(int a1, int a2, int a3)
{
  int i; // r6
  char v4; // r1
  char v5; // lr
  int v6; // r2
  __int16 v7; // r2
  int v8; // r1
  int *v9; // r4
  int *v10; // r3
  unsigned int v11; // r0
  unsigned int v12; // r1
  unsigned int v13; // r2
  unsigned int v14; // r2
  unsigned int v15; // r3
  void **v16; // r0
  int v18; // r1
  int *v19; // r12
  int *v20; // r6
  int v21; // r1
  int v22; // r2
  int v23; // r3
  int v24; // r0
  int v25; // r1
  int v26; // r2
  int v27; // r3
  unsigned int v28; // r6
  unsigned int v29; // r9
  unsigned int v30; // r12
  void **j; // r0
  int *v32; // [sp+0h] [bp-14h] BYREF
  int *v33; // [sp+4h] [bp-10h] BYREF
  void *ptr; // [sp+8h] [bp-Ch] BYREF

  i = dword_BCB2C;
  dword_BCB24 = a2;
  v4 = *(_BYTE *)(a3 + 3);
  v5 = *(_BYTE *)(a3 + 2);
  if ( dword_BCB2C )
    v6 = 56;
  else
    v6 = 16;
  dword_BCB28 = a1;
  dword_BC91C = v6;
  if ( dword_BCB2C )
    v7 = 14336;
  else
    v7 = 4096;
  byte_BC927 = v4;
  word_BC92A = v7;
  byte_BC926 = v5;
  dword_BCB20 = 0;
  dword_BC910 = 0;
  dword_BC914 = 0;
  dword_BC918 = 0;
  ptr = 0;
  v8 = restrictlist4;
  v32 = (int *)restrictlist4;
  if ( restrictlist4 )
  {
    do
    {
      if ( !sub_3AA70(&ptr, v8) )
      {
        i = dword_BCB2C;
        goto LABEL_12;
      }
      v8 = *v32;
      v32 = (int *)*v32;
    }
    while ( v32 );
    i = dword_BCB2C;
  }
LABEL_12:
  v9 = &dword_BC92C;
  while ( 1 )
  {
    if ( !sub_3AB18((_DWORD **)&ptr, &v32) )
      goto LABEL_20;
    v10 = v32;
    v11 = v32[6];
    v12 = v32[1];
    v13 = bswap32(v32[5]);
    if ( i )
      v9[4] = 0;
    *v9 = v13;
    v14 = *((unsigned __int16 *)v10 + 4);
    v15 = *((unsigned __int16 *)v10 + 5);
    v9[1] = bswap32(v11);
    v9[2] = bswap32(v12);
    *((_WORD *)v9 + 6) = __rev16(v14);
    *((_WORD *)v9 + 7) = __rev16(v15);
    v9 = (int *)sub_3A918();
    if ( !v9 )
      break;
    i = dword_BCB2C;
  }
  v16 = (void **)ptr;
  for ( i = dword_BCB2C; ptr; v16 = (void **)ptr )
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
    v33 = (int *)restrictlist6;
    if ( restrictlist6 )
    {
      do
      {
        if ( !sub_3AA70(&ptr, v18) )
          break;
        v18 = *v33;
        v33 = (int *)*v33;
      }
      while ( v33 );
      if ( !v9 )
        goto LABEL_34;
    }
    else if ( !v9 )
    {
      return sub_3B02C();
    }
    while ( sub_3AB18((_DWORD **)&ptr, &v33) )
    {
      v19 = v33;
      v20 = v33 + 9;
      v21 = v33[6];
      v22 = v33[7];
      v23 = v33[8];
      v9[6] = v33[5];
      v9[7] = v21;
      v9[8] = v22;
      v9[9] = v23;
      v24 = *v20;
      v25 = v20[1];
      v26 = v20[2];
      v27 = v20[3];
      v28 = bswap32(v19[1]);
      v29 = *((unsigned __int16 *)v19 + 4);
      v30 = *((unsigned __int16 *)v19 + 5);
      v9[10] = v24;
      v9[11] = v25;
      v9[12] = v26;
      v9[13] = v27;
      v9[4] = 1;
      v9[2] = v28;
      *((_WORD *)v9 + 6) = __rev16(v29);
      *((_WORD *)v9 + 7) = __rev16(v30);
      v9 = (int *)sub_3A918();
      if ( !v9 )
        goto LABEL_34;
    }
    for ( j = (void **)ptr; ptr; j = (void **)ptr )
    {
      ptr = *j;
      free(j);
LABEL_34:
      ;
    }
  }
  return sub_3B02C();
}
