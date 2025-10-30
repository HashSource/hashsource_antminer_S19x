void OPENSSL_cleanup()
{
  _DWORD *v0; // r5
  int v1; // r0
  int v2; // r4
  int v3; // r5
  int v4; // r2
  int v5; // r0
  int v6; // r0
  __int64 v7; // r0
  int v8; // r2
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // [sp+4h] [bp-4h] BYREF

  if ( dword_6E1A14 && !dword_6E1A1C )
  {
    dword_6E1A1C = 1;
    v0 = (_DWORD *)sub_10C5B4(&dword_21FB2C);
    v1 = sub_10C5BC(&dword_21FB2C, 0);
    if ( v0 )
    {
      if ( *v0 )
        sub_B32EC();
      if ( v0[1] )
        sub_CFA04();
      if ( v0[2] )
        sub_F3AD0();
      v1 = CRYPTO_free(v0, "crypto/init.c", 448);
    }
    v2 = dword_6E1A20;
    if ( dword_6E1A20 )
    {
      do
      {
        (*(void (__fastcall **)(int))v2)(v1);
        v3 = *(_DWORD *)(v2 + 4);
        v1 = CRYPTO_free(v2, "crypto/init.c", 521);
        v2 = v3;
      }
      while ( v3 );
    }
    dword_6E1A20 = 0;
    sub_10C574(dword_6E1A10);
    dword_6E1A10 = 0;
    if ( dword_6E19EC )
      nullsub_2();
    if ( dword_6E1A00 )
      sub_B2E68();
    v4 = dword_21FB2C;
    dword_21FB2C = -1;
    v12 = v4;
    v5 = sub_10C5CC(&v12);
    v6 = sub_F4768(v5);
    v7 = sub_F3AA4(v6);
    sub_BBDA0(v7, v8);
    v9 = sub_CE0E4();
    sub_10C104(v9);
    sub_DBB60();
    sub_B72A4();
    v10 = sub_D99FC();
    sub_EA890(v10);
    v11 = sub_CF45C();
    sub_E1268(v11);
    dword_6E1A14 = 0;
  }
}
