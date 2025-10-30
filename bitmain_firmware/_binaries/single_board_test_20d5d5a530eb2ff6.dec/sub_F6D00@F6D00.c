int __fastcall sub_F6D00(int a1, int a2, int a3, _DWORD *a4, _DWORD *a5)
{
  int v6; // r4
  int *v8; // r0
  int v9; // r6
  int v10; // r4
  char **v11; // r0
  char **v12; // r0
  int v13; // [sp+Ch] [bp-4h] BYREF

  v6 = sub_D8D94(a1);
  if ( sub_F89C8(v6, -1, 4102, 0, &v13) <= 0 )
    return 0;
  if ( v13 != 6 )
    return 2;
  v8 = sub_F6C30(v6);
  v9 = (int)v8;
  if ( !v8 )
    return 0;
  if ( !a5 )
    goto LABEL_10;
  v10 = sub_AE228(v8);
  if ( v10 )
  {
    v11 = sub_EAA20(0x390u);
    sub_B28F8(a5, (int)v11, 16, v10);
LABEL_10:
    v12 = sub_EAA20(0x390u);
    sub_B28F8(a4, (int)v12, 16, v9);
    return 3;
  }
  ASN1_STRING_free(v9);
  return 0;
}
