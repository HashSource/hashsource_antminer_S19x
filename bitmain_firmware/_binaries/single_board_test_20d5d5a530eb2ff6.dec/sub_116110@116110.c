int __fastcall sub_116110(int result, int a2)
{
  int *v2; // r4
  int v4; // r6
  int v5; // r3
  int (*v6)(void); // r3

  if ( result )
  {
    v2 = (int *)result;
    v4 = sub_1160E8();
    if ( !v4 )
    {
LABEL_7:
      sub_1160FC(v4);
      return 0;
    }
    v5 = *(_DWORD *)(a2 + 12);
    if ( !v5 )
    {
      sub_D0048(11, 120, 111, (int)"crypto/x509/x_pubkey.c", 82);
      goto LABEL_7;
    }
    v6 = *(int (**)(void))(v5 + 24);
    if ( !v6 )
    {
      sub_D0048(11, 120, 124, (int)"crypto/x509/x_pubkey.c", 78);
      goto LABEL_7;
    }
    if ( !v6() )
    {
      sub_D0048(11, 120, 126, (int)"crypto/x509/x_pubkey.c", 74);
      goto LABEL_7;
    }
    sub_1160FC(*v2);
    *v2 = v4;
    *(_DWORD *)(v4 + 8) = a2;
    sub_D9C08(a2);
    return 1;
  }
  return result;
}
