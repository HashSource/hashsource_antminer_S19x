int __fastcall sub_110978(int a1)
{
  int v1; // r5
  signed int i; // r6
  int (__fastcall *v5)(int, int); // r3
  int v6; // r0
  int v7; // r2

  if ( *(_DWORD *)(a1 + 120) )
    return 1;
  if ( *(_DWORD *)(a1 + 132) )
  {
    v1 = sub_10BD3C(*(int **)(a1 + 80), 0);
    if ( !v1 )
    {
      v7 = 1636;
LABEL_21:
      sub_D0048(11, 145, 65, (int)"crypto/x509/x509_vfy.c", v7);
      *(_DWORD *)(a1 + 96) = 17;
      return v1;
    }
  }
  v1 = sub_117188(
         a1 + 84,
         a1 + 88,
         *(_DWORD *)(a1 + 80),
         *(_DWORD *)(*(_DWORD *)(a1 + 16) + 32),
         *(_DWORD *)(*(_DWORD *)(a1 + 16) + 12));
  if ( *(_DWORD *)(a1 + 132) )
    sub_10BD80(*(int **)(a1 + 80));
  if ( !v1 )
  {
    v7 = 1646;
    goto LABEL_21;
  }
  if ( v1 == -1 )
  {
    for ( i = 1; i < sub_10C010(*(_DWORD *)(a1 + 80)); ++i )
    {
      v6 = sub_10C01C(*(_DWORD **)(a1 + 80), i);
      if ( (*(_DWORD *)(v6 + 128) & 0x800) != 0 )
      {
        *(_DWORD *)(a1 + 100) = v6;
        *(_DWORD *)(a1 + 92) = i;
        *(_DWORD *)(a1 + 96) = 42;
        v1 = (*(int (__fastcall **)(_DWORD, int))(a1 + 28))(0, a1);
        if ( !v1 )
          return v1;
      }
    }
    return 1;
  }
  if ( v1 != -2 )
  {
    if ( v1 != 1 )
    {
      v1 = 0;
      sub_D0048(11, 145, 68, (int)"crypto/x509/x509_vfy.c", 1672);
      return v1;
    }
    if ( (*(_DWORD *)(*(_DWORD *)(a1 + 16) + 12) & 0x800) != 0 )
    {
      v5 = *(int (__fastcall **)(int, int))(a1 + 28);
      *(_DWORD *)(a1 + 100) = 0;
      return v5(2, a1) != 0;
    }
    return 1;
  }
  *(_DWORD *)(a1 + 96) = 43;
  *(_DWORD *)(a1 + 100) = 0;
  return (*(int (**)(void))(a1 + 28))();
}
