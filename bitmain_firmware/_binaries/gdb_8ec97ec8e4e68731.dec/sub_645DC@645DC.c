void __fastcall __noreturn sub_645DC(int a1, int a2, int a3, int a4, int a5, int a6)
{
  _DWORD *v6; // r11
  int v7; // r0
  void *v8; // r0
  void *v9; // r0

  v7 = sub_25734C(a6, 1);
  if ( v6 )
  {
    v8 = (void *)v6[2];
    if ( v8 )
      free(v8);
    v9 = (void *)v6[3];
    if ( v9 )
      free(v9);
    sub_33AC04(v6);
  }
  sub_338FFC(v7);
}
