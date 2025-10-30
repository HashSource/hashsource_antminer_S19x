int __fastcall sub_139328(int *a1, _DWORD *a2, _DWORD *a3)
{
  char *v5; // r5
  int v6; // r0
  int v7; // r0
  _DWORD *v8; // r0
  int v9; // r4
  int v11; // [sp+8h] [bp-Ch] BYREF
  int *v12; // [sp+Ch] [bp-8h] BYREF

  sub_B294C(&v11, 0, 0, a3);
  v5 = sub_EAC84(v11);
  while ( 1 )
  {
    v8 = sub_B7144(a2, 520);
    v9 = (int)v8;
    if ( !v8 )
    {
      sub_D0048(46, 115, 131, (int)"crypto/cms/cms_lib.c", 325);
      return 0;
    }
    sub_B6ECC((int)v8, 120, 0, (int)&v12);
    v6 = sub_D8D8C((int)v12);
    if ( v5 == (char *)sub_D8C70(v6) )
      break;
    v7 = sub_D8D8C((int)v12);
    if ( v5 == (char *)sub_D8C74(v7) )
      break;
    a2 = (_DWORD *)sub_B7170(v9);
  }
  return sub_D17B4(a1, v12);
}
