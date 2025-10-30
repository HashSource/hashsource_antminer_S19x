int __fastcall sub_EB474(int a1, int a2, int a3)
{
  _DWORD *v6; // r0
  void *v7; // r4

  if ( !dword_6E1AAC )
  {
    dword_6E1AAC = sub_10BFD4(sub_EB354);
    if ( !dword_6E1AAC )
      return 0;
  }
  if ( !dword_6E1AB0 )
  {
    dword_6E1AB0 = sub_10BFD4(sub_EB38C);
    if ( !dword_6E1AB0 )
      return 0;
  }
  v6 = CRYPTO_malloc((void *)0xC);
  v7 = v6;
  if ( !v6 )
  {
    sub_D0048(8, 107, 65, (int)"crypto/objects/obj_xref.c", 107);
    return 0;
  }
  v6[2] = a3;
  *v6 = a1;
  v6[1] = a2;
  if ( sub_10BD3C(dword_6E1AAC, v6) )
  {
    if ( !sub_10BD3C(dword_6E1AB0, v7) )
      return 0;
    sub_10C070(dword_6E1AAC);
    sub_10C070(dword_6E1AB0);
    return 1;
  }
  else
  {
    CRYPTO_free(v7);
    return 0;
  }
}
