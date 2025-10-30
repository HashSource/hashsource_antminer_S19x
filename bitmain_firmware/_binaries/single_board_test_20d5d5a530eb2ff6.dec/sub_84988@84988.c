int __fastcall sub_84988(_DWORD *a1, int a2, int a3)
{
  int v5; // r6
  int v6; // r8
  int v7; // r0
  int v8; // r4
  int v10; // r6
  int v11; // r0
  int v12; // r0
  int v13; // r1
  int v14; // r2
  const char *v15; // r1
  int v16; // r2
  int (__fastcall *v17)(int, _DWORD); // r3
  int v18; // r0

  if ( !a2 || !sub_10C010(a2, a2, a3) )
    return 0;
  v5 = *(_DWORD *)(a1[257] + 236);
  if ( !v5 )
    v5 = *(_DWORD *)(a1[308] + 16);
  v6 = sub_112CD8();
  if ( v6 )
  {
    v7 = sub_10C01C(a2, 0);
    v8 = sub_112DA0(v6, v5, v7, a2);
    if ( v8 )
    {
      v10 = sub_1130A4(v6);
      v11 = sub_8B7D4(a1);
      sub_113450(v10, v11);
      sub_113008(v6, *(_DWORD *)(a1[257] + 16) & 0x30000);
      v12 = sub_84248();
      v8 = sub_112B90(v6, v12, a1);
      if ( v8 )
      {
        if ( sub_10C010(a1[38], v13, v14) > 0 )
          sub_1132F8(v6, a1 + 37);
        if ( a1[7] )
          v15 = "ssl_client";
        else
          v15 = "ssl_server";
        sub_113088(v6, v15);
        sub_1139DC(v10, a1[36]);
        if ( a1[300] )
          sub_113044(v6);
        v16 = a1[308];
        v17 = *(int (__fastcall **)(int, _DWORD))(v16 + 104);
        if ( v17 )
          v8 = v17(v6, *(_DWORD *)(v16 + 108));
        else
          v8 = sub_112694(v6);
        a1[310] = sub_112BA0(v6);
        sub_10BFDC(a1[309], X509_free);
        a1[309] = 0;
        if ( sub_112BB8(v6) )
        {
          v18 = sub_112BBC(v6);
          a1[309] = v18;
          if ( !v18 )
          {
            v8 = 0;
            sub_D0048(20, 207, 65, "ssl/ssl_cert.c", 435);
          }
        }
        sub_1136F4(a1[36], v10);
      }
    }
    else
    {
      sub_D0048(20, 207, 11, "ssl/ssl_cert.c", 387);
    }
    sub_112D7C(v6);
    return v8;
  }
  else
  {
    sub_D0048(20, 207, 65, "ssl/ssl_cert.c", 381);
    return 0;
  }
}
