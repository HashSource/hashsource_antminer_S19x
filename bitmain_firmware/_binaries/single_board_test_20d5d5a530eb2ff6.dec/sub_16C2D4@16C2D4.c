void *__fastcall sub_16C2D4(_DWORD *a1)
{
  int v2; // r0
  void *v3; // r5
  unsigned int v4; // r3
  int (__fastcall *v5)(int, _DWORD); // r3

  a1[7] = 1;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( sub_16BEB4(a1) )
        return 0;
      v2 = (*(int (__fastcall **)(_DWORD, _DWORD, _DWORD))(*a1 + 24))(a1[1], a1[2], a1[3]);
      v5 = (int (__fastcall *)(int, _DWORD))a1[4];
      v3 = (void *)v2;
      if ( !v5 )
        break;
      if ( !v2 )
        return 0;
      v2 = v5(v2, a1[5]);
      v3 = (void *)v2;
      if ( v2 )
      {
        if ( !a1[6] )
          return v3;
        goto LABEL_4;
      }
    }
    if ( !v2 )
      return 0;
    if ( !a1[6] )
      return v3;
LABEL_4:
    v4 = sub_16C05C(v2);
    if ( v4 <= 1 || v4 == a1[6] )
      return v3;
    OSSL_STORE_INFO_free(v3);
  }
}
