int __fastcall sub_2B1E3C(_DWORD *a1)
{
  int i; // r6
  int j; // r5
  int v4; // r1
  unsigned __int8 *v5; // r3
  unsigned __int8 *v6; // r1
  char v7; // t1
  int k; // r4
  unsigned __int8 *v9; // r3
  int *v10; // r4
  int v11; // r5
  int v12; // r6
  unsigned __int8 *v13; // r3
  int v14; // t1
  unsigned __int8 *v16; // r3
  unsigned __int8 *v17; // r3
  unsigned __int8 *v18; // r3
  unsigned __int8 *v19; // r3
  unsigned __int8 *v20; // r3
  unsigned __int8 *v21; // [sp+0h] [bp-6Ch] BYREF
  _BYTE v22[104]; // [sp+4h] [bp-68h] BYREF

  if ( !dword_48FD0C )
    sub_2B1DB8();
  for ( i = *(_DWORD *)(a1[40] + 12); i; i = *(_DWORD *)(i + 8452) )
  {
    for ( j = 0; j != 0x2000; j += 32 )
    {
      while ( !*(_BYTE *)(i + (j >> 5) + 0x2000) )
      {
        j += 32;
        if ( j == 0x2000 )
          goto LABEL_10;
      }
      v4 = *(_DWORD *)(i + 8448);
      v21 = v22;
      sub_2B1450(&v21, j + v4);
      v5 = v21;
      v6 = (unsigned __int8 *)(i - 1 + j);
      do
      {
        v7 = *++v6;
        v5[1] = a0123456789abcd_4[v7 & 0xF];
        *v21 = a0123456789abcd_4[*v6 >> 4];
        v5 = v21 + 2;
        v21 += 2;
      }
      while ( v6 != (unsigned __int8 *)(i + 31 + j) );
      sub_2B15CC((int)a1, 54, (unsigned int)v22, v5);
    }
LABEL_10:
    ;
  }
  for ( k = a1[25]; k; k = *(_DWORD *)(k + 12) )
  {
    v21 = v22;
    sub_2B16EC((size_t)&v21, *(const char **)k);
    v9 = v21++;
    *v9 = 49;
    sub_2B1450(&v21, *(_DWORD *)(k + 28));
    sub_2B1450(&v21, *(_DWORD *)(k + 28) + *(_DWORD *)(k + 36));
    sub_2B15CC((int)a1, 51, (unsigned int)v22, v21);
  }
  v10 = (int *)a1[30];
  if ( v10 && *v10 )
  {
    do
    {
      v11 = sub_302C04();
      if ( v11 != 63 )
      {
        v12 = *v10;
        v21 = v22;
        sub_2B16EC((size_t)&v21, **(const char ***)(v12 + 16));
        switch ( v11 )
        {
          case 'A':
            v20 = v21++;
            *v20 = 50;
            goto LABEL_18;
          case 'B':
          case 'D':
          case 'O':
            v19 = v21++;
            *v19 = 52;
            goto LABEL_18;
          case 'C':
          case 'U':
            ((void (__fastcall *)(int))loc_2A6C48)(3);
            return 0;
          case 'T':
            v13 = v21++;
            *v13 = 51;
            goto LABEL_18;
          case 'a':
            v18 = v21++;
            *v18 = 54;
            goto LABEL_18;
          case 'b':
          case 'd':
          case 'o':
            v17 = v21++;
            *v17 = 56;
            goto LABEL_18;
          case 't':
            v16 = v21++;
            *v16 = 55;
            goto LABEL_18;
          default:
LABEL_18:
            sub_2B16EC((size_t)&v21, *(const char **)(v12 + 4));
            sub_2B1450(&v21, *(_DWORD *)(*(_DWORD *)(v12 + 16) + 28) + *(_DWORD *)(v12 + 8));
            sub_2B15CC((int)a1, 51, (unsigned int)v22, v21);
            break;
        }
      }
      v14 = v10[1];
      ++v10;
    }
    while ( v14 );
  }
  if ( sub_2A8884((int)"%0781010\n", 9, (int)a1) != 9 )
    sub_2A6BF0((int)"tekhex.c", 901, (int)"tekhex_write_object_contents");
  return 1;
}
