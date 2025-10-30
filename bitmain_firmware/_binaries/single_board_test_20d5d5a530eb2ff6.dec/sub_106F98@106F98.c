int __fastcall sub_106F98(int a1, int a2)
{
  _DWORD *v4; // r0
  int *v5; // r7
  size_t *v6; // r5
  int v7; // r4
  int *v8; // r3
  size_t *v9; // r0
  int *v10; // r7
  size_t v11; // r5
  size_t v12; // r4
  size_t v13; // r1
  size_t v14; // r2
  int v16; // r0
  void *v17; // r5

  v4 = sub_E0740((void *)0x50);
  if ( v4 )
  {
    v4[1] = 4;
    sub_DB980(a1, (int)v4);
    sub_DB978(a1, 0, 0);
    v5 = (int *)sub_DB984(a2);
    v6 = (size_t *)sub_DB984(a1);
    if ( sub_AE2B4((int)v5) && (v7 = sub_AE140(v6, v5)) == 0 )
    {
      v16 = sub_DB984(a1);
      v17 = (void *)v16;
      if ( v16 )
      {
        sub_E0758(*(void **)(v16 + 8), *(_DWORD *)v16, (size_t)"crypto/siphash/siphash_pmeth.c");
        sub_E0758(v17, 0x50u, (size_t)"crypto/siphash/siphash_pmeth.c");
        sub_DB980(a1, 0);
      }
    }
    else
    {
      v8 = v5 + 4;
      v9 = v6 + 4;
      v10 = v5 + 20;
      do
      {
        v11 = *v8;
        v8 += 4;
        v12 = *(v8 - 3);
        v9 += 4;
        v13 = *(v8 - 2);
        v14 = *(v8 - 1);
        *(v9 - 4) = v11;
        *(v9 - 3) = v12;
        *(v9 - 2) = v13;
        *(v9 - 1) = v14;
      }
      while ( v8 != v10 );
      return 1;
    }
    return v7;
  }
  else
  {
    sub_D0048(15, 125, 65, (int)"crypto/siphash/siphash_pmeth.c", 32);
    return 0;
  }
}
