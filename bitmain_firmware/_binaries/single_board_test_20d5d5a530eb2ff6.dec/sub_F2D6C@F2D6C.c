int __fastcall sub_F2D6C(int a1, int a2)
{
  _DWORD *v4; // r0
  int *v5; // r6
  size_t *v6; // r8
  int v7; // r4
  int v9; // r0
  void *v10; // r6

  v4 = sub_E0740((void *)0x100);
  if ( v4 )
  {
    v4[1] = 4;
    sub_DB980(a1, (int)v4);
    sub_DB978(a1, 0, 0);
    v5 = (int *)sub_DB984(a2);
    v6 = (size_t *)sub_DB984(a1);
    if ( sub_AE2B4((int)v5) && (v7 = sub_AE140(v6, v5)) == 0 )
    {
      v9 = sub_DB984(a1);
      v10 = (void *)v9;
      if ( v9 )
      {
        sub_E0758(*(void **)(v9 + 8), *(_DWORD *)v9, (size_t)"crypto/poly1305/poly1305_pmeth.c");
        sub_E0758(v10, 0x100u, (size_t)"crypto/poly1305/poly1305_pmeth.c");
        sub_DB980(a1, 0);
      }
    }
    else
    {
      v7 = 1;
      memcpy(v6 + 4, v5 + 4, 0xF0u);
    }
    return v7;
  }
  else
  {
    sub_D0048(15, 124, 65, (int)"crypto/poly1305/poly1305_pmeth.c", 32);
    return 0;
  }
}
