bool __fastcall sub_CD478(int a1, int a2, int a3)
{
  int v6; // r7
  const char *v7; // r0
  int v8; // r2
  bool v9; // zf
  int v10; // r2

  v6 = *(_DWORD *)(a2 + 24);
  v7 = (const char *)sub_EAB40(**(_DWORD **)(a2 + 12));
  if ( !v6 )
    return sub_B550C(a1, "%*s<INVALID PUBLIC KEY>\n", a3, &byte_1A4198) > 0;
  if ( sub_B550C(a1, "%*s%s Public-Key:\n", a3, &byte_1A4198, v7) <= 0
    || sub_B550C(a1, "%*spub:\n", a3, &byte_1A4198) <= 0 )
  {
    return 0;
  }
  v8 = **(_DWORD **)(a2 + 12);
  v9 = v8 == 1034;
  if ( v8 != 1034 )
    v9 = v8 == 1087;
  if ( v9 )
  {
    v10 = 32;
  }
  else if ( v8 == 1035 )
  {
    v10 = 56;
  }
  else
  {
    v10 = 57;
  }
  return sub_12D7A8(a1, v6, v10, a3 + 4) != 0;
}
