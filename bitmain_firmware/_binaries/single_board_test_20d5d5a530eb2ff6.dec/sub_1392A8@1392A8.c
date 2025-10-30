int __fastcall sub_1392A8(_DWORD *a1)
{
  char *v1; // r0
  char *v2; // r0
  int v3; // r0
  int v4; // r1
  int v5; // r5
  int v6; // r0
  _DWORD *v7; // r0
  int v8; // r4
  int v10; // [sp+Ch] [bp-8h] BYREF

  sub_B294C(&v10, 0, 0, a1);
  v1 = sub_EAC84(v10);
  v2 = sub_EAAB4((unsigned int)v1);
  v3 = sub_D99DC((int)v2);
  v5 = v3;
  if ( v3 )
  {
    v6 = sub_15C394(v3, v4);
    v7 = sub_B655C(v6);
    v8 = (int)v7;
    if ( v7 && sub_B6ECC((int)v7, 111, 0, v5) )
      return v8;
    sub_D0048(46, 116, 119, (int)"crypto/cms/cms_lib.c", 301);
  }
  else
  {
    v8 = 0;
    sub_D0048(46, 116, 149, (int)"crypto/cms/cms_lib.c", 296);
  }
  BIO_vfree_0(v8);
  return 0;
}
