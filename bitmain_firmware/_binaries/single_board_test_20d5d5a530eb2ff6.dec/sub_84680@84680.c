int __fastcall sub_84680(int a1, int a2, int a3)
{
  int v3; // r8
  int v4; // r4
  int v8; // r0
  int v9; // r0
  bool v10; // cc
  int v11; // r1

  if ( a1 )
  {
    v3 = **(_DWORD **)(a1 + 1028);
    if ( v3 )
      goto LABEL_3;
    return v3;
  }
  v3 = **(_DWORD **)(a2 + 192);
  if ( !v3 )
    return v3;
LABEL_3:
  v4 = 0;
  do
  {
    v10 = v4 < sub_10C010(a3, a2, a3);
    v11 = v4++;
    if ( !v10 )
    {
      sub_10BFDC(*(_DWORD *)(v3 + 8), X509_free);
      *(_DWORD *)(v3 + 8) = a3;
      return 1;
    }
    v8 = sub_10C01C(a3, v11);
    v9 = sub_A4D60(a1, a2, v8, 0, 0);
  }
  while ( v9 == 1 );
  sub_D0048(20, 340, v9, "ssl/ssl_cert.c", 261);
  return 0;
}
