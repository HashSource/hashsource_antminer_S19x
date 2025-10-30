int __fastcall sub_A2948(int *a1, _DWORD *a2, int a3, int a4)
{
  int v8; // r0
  int v9; // r5
  int v10; // r12
  int v11; // r9
  int v12; // r8
  int v13; // r10
  int v14; // r1
  int v15; // r0
  int v16; // t1
  int v17; // r2
  int v18; // r3

  if ( a4 )
  {
    v8 = CRYPTO_malloc(2 * a4, "ssl/t1_lib.c", 353);
    v9 = v8;
    if ( v8 )
    {
      v10 = 0;
      v11 = a3 - 4;
      v12 = 0;
      v13 = v8 - 2;
      while ( 2 )
      {
        v14 = 0;
        v16 = *(_DWORD *)(v11 + 4);
        v11 += 4;
        v15 = v16;
        v17 = 0;
        while ( 1 )
        {
          v18 = *(_DWORD *)((char *)&unk_1A9C40 + v14);
          ++v17;
          v14 += 12;
          if ( v15 == v18 )
            break;
          if ( v17 == 30 )
            goto LABEL_11;
        }
        if ( (v10 & (1 << v17)) != 0 )
        {
LABEL_11:
          CRYPTO_free(v9, "ssl/t1_lib.c", 364);
          return 0;
        }
        ++v12;
        v10 |= 1 << v17;
        *(_WORD *)(v13 + 2) = v17;
        v13 += 2;
        if ( a4 != v12 )
          continue;
        break;
      }
      CRYPTO_free(*a1, "ssl/t1_lib.c", 370);
      *a1 = v9;
      *a2 = a4;
      return 1;
    }
    else
    {
      sub_D0048(20, 629, 65, "ssl/t1_lib.c", 354);
      return 0;
    }
  }
  else
  {
    sub_D0048(20, 629, 271, "ssl/t1_lib.c", 350);
    return 0;
  }
}
