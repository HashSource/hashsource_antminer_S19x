int __fastcall sub_12D290(_DWORD *a1, void *a2, signed int a3)
{
  int v4; // r0
  const void *v7; // r7
  int v8; // r4
  size_t v9; // r2

  if ( *a1 == 4 && (v4 = a1[1]) != 0 )
  {
    v7 = (const void *)sub_AE2B4(v4);
    v8 = sub_AE2A8(a1[1]);
    v9 = a3;
    if ( a3 >= v8 )
      v9 = v8;
    memcpy(a2, v7, v9);
    return v8;
  }
  else
  {
    sub_D0048(13, 135, 109, (int)"crypto/asn1/evp_asn1.c", 36);
    return -1;
  }
}
