int __fastcall sub_A915C(_DWORD *a1)
{
  int v2; // r0
  int v3; // r4

  v2 = sub_B7E30();
  v3 = sub_B655C(v2);
  if ( v3 )
  {
    sub_A9134((int)a1);
    *(_DWORD *)(a1[31] + 212) = v3;
    sub_B6ECC(v3, 9, 1, 0);
    return 1;
  }
  else
  {
    sub_95494(a1, 80, 397, 65, (int)"ssl/s3_enc.c", 326);
    return 0;
  }
}
