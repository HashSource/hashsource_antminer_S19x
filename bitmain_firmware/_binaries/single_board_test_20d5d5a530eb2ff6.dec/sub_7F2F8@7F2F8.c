int __fastcall sub_7F2F8(int a1, _DWORD *a2)
{
  int v3; // r1
  int v5; // r3
  int v6; // r2
  int v8; // r0

  v3 = a2[7];
  if ( !v3 )
  {
    v8 = CRYPTO_malloc(17728, "ssl/record/ssl3_record.c", 799);
    a2[7] = v8;
    if ( !v8 )
      return 0;
    v3 = v8;
  }
  v5 = sub_BB7AC(*(_DWORD *)(a1 + 1000), v3, 0x4000, a2[5], a2[2]);
  if ( v5 >= 0 )
  {
    v6 = a2[7];
    a2[2] = v5;
    a2[5] = v6;
    return 1;
  }
  return 0;
}
