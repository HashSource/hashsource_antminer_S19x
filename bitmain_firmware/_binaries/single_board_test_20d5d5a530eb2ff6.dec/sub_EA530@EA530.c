int __fastcall sub_EA530(int a1, int a2)
{
  int result; // r0
  int v5; // r1
  int v6; // r2
  int v7; // r4
  void *v8; // r0
  int v9; // r0
  _DWORD v10[4]; // [sp+0h] [bp-10h] BYREF

  result = sub_EA278();
  if ( result )
  {
    sub_10C554(dword_6E1A98);
    v10[0] = a2 & 0xFFFF7FFF;
    v10[2] = a1;
    v7 = sub_DF92C((int *)dword_6E1A94, (int)v10);
    if ( v7 )
    {
      if ( dword_6E1A90 )
      {
        if ( sub_10C010(dword_6E1A90, v5, v6) > *(_DWORD *)v7 )
        {
          v9 = sub_10C01C(dword_6E1A90, *(_DWORD *)v7);
          (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v9 + 8))(
            *(_DWORD *)(v7 + 8),
            *(_DWORD *)v7,
            *(_DWORD *)(v7 + 12));
        }
      }
      v8 = (void *)v7;
      v7 = 1;
      CRYPTO_free(v8);
    }
    sub_10C564(dword_6E1A98);
    return v7;
  }
  return result;
}
