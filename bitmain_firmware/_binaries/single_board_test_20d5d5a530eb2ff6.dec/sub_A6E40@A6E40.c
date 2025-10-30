bool __fastcall sub_A6E40(_DWORD *a1)
{
  _DWORD *v3; // r6
  int v4; // r0
  int v5; // r3
  int v6; // r3
  bool v7; // zf
  int v8; // r3

  if ( !sub_7C448((int)(a1 + 404)) || !sub_82238((int)a1) )
    return 0;
  v3 = (_DWORD *)sub_E0740(408, "ssl/d1_lib.c", 77);
  if ( v3 )
  {
    v3[68] = sub_A86C0();
    v4 = sub_A86C0();
    v5 = a1[7];
    v3[69] = v4;
    if ( v5 )
      v3[64] = 256;
    v6 = v3[68];
    v3[70] = 0;
    v3[71] = 0;
    v7 = v4 == 0;
    if ( v4 )
      v7 = v6 == 0;
    if ( v7 )
    {
      sub_A86F8(v6);
      sub_A86F8(v3[69]);
      CRYPTO_free(v3, "ssl/d1_lib.c", 95);
      sub_82270((int)a1);
      return 0;
    }
    else
    {
      v8 = a1[1];
      a1[32] = v3;
      return (*(int (__fastcall **)(_DWORD *))(v8 + 16))(a1) != 0;
    }
  }
  else
  {
    sub_82270((int)a1);
    return 0;
  }
}
