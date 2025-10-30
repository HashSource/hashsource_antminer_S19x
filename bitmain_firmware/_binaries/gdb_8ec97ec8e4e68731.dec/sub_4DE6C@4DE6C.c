int __fastcall sub_4DE6C(int a1, __int64 *a2)
{
  int v3; // r0
  __int64 v5; // r2
  bool v6; // zf

  v3 = *(_DWORD *)(a1 + 84);
  if ( !v3 )
  {
    v3 = sub_93094(1, 0x20u);
    *(_DWORD *)(a1 + 84) = v3;
  }
  v5 = *a2;
  v6 = *(_DWORD *)a2 == 0;
  if ( *(_DWORD *)a2 )
    v3 += HIDWORD(v5);
  else
    LOBYTE(v5) = 1;
  if ( *(_DWORD *)a2 )
    BYTE4(v5) = 1;
  else
    *(_BYTE *)(v3 + HIDWORD(v5)) = v5;
  if ( !v6 )
    *(_BYTE *)(v3 + 16) = BYTE4(v5);
  if ( !*(_DWORD *)(a1 + 20) )
    sub_450B0(a1);
  return 0;
}
