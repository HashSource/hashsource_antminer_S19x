int __fastcall sub_A9244(_DWORD *a1, int a2)
{
  int v2; // r3
  int result; // r0
  int v6; // r0
  int v7; // r8
  int v8; // r7
  int v9; // r0
  int v10; // r3
  int v11; // r0
  int v12; // [sp+Ch] [bp-4h] BYREF

  v2 = a1[31];
  if ( *(_DWORD *)(v2 + 216) )
    goto LABEL_2;
  v6 = sub_B6ECC(*(_DWORD *)(v2 + 212), 3, 0, &v12);
  v7 = v6;
  if ( v6 <= 0 )
  {
    sub_95494(a1, 80, 293, 332, (int)"ssl/s3_enc.c", 386);
    return 0;
  }
  v8 = a1[31];
  v9 = sub_D14F4(v6);
  v10 = a1[31];
  *(_DWORD *)(v8 + 216) = v9;
  if ( !*(_DWORD *)(v10 + 216) )
  {
    sub_95494(a1, 80, 293, 65, (int)"ssl/s3_enc.c", 393);
    return 0;
  }
  v11 = sub_86508((int)a1);
  if ( !v11 || !sub_D1520(*(_DWORD *)(a1[31] + 216), v11, 0) || !sub_D16D8(*(_DWORD *)(a1[31] + 216), v12, v7) )
  {
    sub_95494(a1, 80, 293, 68, (int)"ssl/s3_enc.c", 401);
    return 0;
  }
LABEL_2:
  result = 1;
  if ( !a2 )
  {
    BIO_vfree_0(*(_DWORD *)(a1[31] + 212));
    result = 1;
    *(_DWORD *)(a1[31] + 212) = 0;
  }
  return result;
}
