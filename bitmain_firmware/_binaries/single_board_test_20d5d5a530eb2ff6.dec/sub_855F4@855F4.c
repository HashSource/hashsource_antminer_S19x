int sub_855F4()
{
  int v0; // r5
  _DWORD *v1; // r0
  _DWORD *v2; // r6

  v0 = sub_BB6E8();
  sub_E0808(3);
  dword_6DF278 = sub_10BFD4(sub_855E8);
  if ( sub_BB74C(v0) )
  {
    if ( dword_6DF278 )
    {
      v1 = (_DWORD *)CRYPTO_malloc(12, "ssl/ssl_ciph.c", 467);
      v2 = v1;
      if ( v1 )
      {
        v1[2] = v0;
        *v1 = 1;
        v1[1] = sub_BB750(v0);
        sub_10BD3C(dword_6DF278, v2);
        sub_10C070(dword_6DF278);
      }
    }
  }
  return sub_E0808(2);
}
