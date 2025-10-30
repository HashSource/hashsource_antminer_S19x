int __fastcall sub_DC5A0(int a1, char *a2, size_t a3)
{
  int v3; // r5
  int v8; // r0
  int v9; // r7

  if ( *(_DWORD *)(a1 + 24) )
    return 0;
  v8 = sub_B2068();
  v9 = v8;
  if ( !v8 )
    return 0;
  v3 = sub_1280A4(v8, a2, a3);
  if ( v3 )
  {
    v3 = 1;
    *(_DWORD *)(a1 + 24) = v9;
  }
  else
  {
    j_ASN1_STRING_free(v9);
  }
  return v3;
}
