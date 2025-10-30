int __fastcall sub_106CE8(int a1, char *a2, int a3)
{
  bool v3; // zf
  int v4; // r5
  int v8; // r0
  int v9; // r6

  v3 = a3 == 16;
  if ( a3 == 16 )
    v3 = *(_DWORD *)(a1 + 24) == 0;
  if ( !v3 )
    return 0;
  v8 = sub_B2068();
  v9 = v8;
  if ( !v8 )
    return 0;
  v4 = sub_1280A4(v8, a2, 0x10u);
  if ( v4 )
  {
    v4 = 1;
    *(_DWORD *)(a1 + 24) = v9;
  }
  else
  {
    j_ASN1_STRING_free(v9);
  }
  return v4;
}
