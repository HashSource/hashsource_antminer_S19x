int __fastcall sub_F1474(int a1, int a2, int a3, int a4)
{
  int v7; // r5
  _DWORD *v8; // r0
  int v9; // r4
  char *v11; // r0
  unsigned int v12; // [sp+Ch] [bp-4h] BYREF

  v7 = a4;
  if ( !a4 )
  {
    if ( sub_DA710(a3, (int)&v12) > 0 )
    {
      v11 = sub_EAAB4(v12);
      v7 = sub_D99DC((int)v11);
      if ( v7 )
        goto LABEL_2;
      sub_D0048(33, 131, 151, (int)"crypto/pkcs7/pk7_lib.c", 360);
    }
    v9 = 0;
    goto LABEL_10;
  }
LABEL_2:
  v8 = (_DWORD *)sub_EF4F0();
  v9 = (int)v8;
  if ( v8 && sub_F13B0(v8, a2, a3, v7) && sub_F11B4(a1, v9) )
    return v9;
LABEL_10:
  sub_EF504(v9);
  return 0;
}
