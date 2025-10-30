bool __fastcall sub_8A060(int a1)
{
  _BOOL4 result; // r0
  int *v3; // r0
  int *v4; // r4
  int (*v5)(void); // r3
  int v6; // r7
  _DWORD *v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r3

  if ( !a1 )
  {
    sub_D0048(20, 169, 196, "ssl/ssl_lib.c", 3036);
    return 0;
  }
  result = sub_87798(0x200000, 0, 0);
  if ( result )
  {
    if ( sub_84248() < 0 )
    {
      v4 = 0;
      sub_D0048(20, 169, 269, "ssl/ssl_lib.c", 3044);
    }
    else
    {
      v3 = (int *)sub_E0740(592, "ssl/ssl_lib.c", 3047);
      v4 = v3;
      if ( v3 )
      {
        v3[44] = 4;
        v3[9] = 2;
        v3[6] = 20480;
        *v3 = a1;
        v5 = *(int (**)(void))(a1 + 96);
        v3[45] = 0;
        v3[46] = 0;
        v3[10] = v5();
        __dmb(0xBu);
        v4[25] = 1;
        __dmb(0xBu);
        v6 = sub_10C510();
        v4[134] = v6;
        if ( !v6 )
        {
          sub_D0048(20, 169, 65, "ssl/ssl_lib.c", 3062);
          CRYPTO_free(v4, "ssl/ssl_lib.c", 3063);
          return 0;
        }
        v4[52] = 0;
        v4[47] = 102400;
        v7 = sub_84278();
        v4[48] = (int)v7;
        if ( v7 )
        {
          v8 = sub_DF6B4(sub_87928, (char *)&loc_87950 + 1);
          v4[5] = v8;
          if ( v8 )
          {
            v9 = sub_10F040();
            v4[4] = v9;
            if ( v9 )
            {
              v10 = sub_BC488();
              v4[66] = v10;
              if ( v10 )
              {
                if ( sub_86528(v4, "TLS_AES_256_GCM_SHA384:TLS_CHACHA20_POLY1305_SHA256:TLS_AES_128_GCM_SHA256") )
                {
                  if ( !sub_8661C(*v4, v4[3], v4 + 1, v4 + 2, "ALL:!COMPLEMENTOFDEFAULT:!eNULL", v4[48])
                    || sub_10C010(v4[1], v11, v12) <= 0 )
                  {
                    sub_D0048(20, 169, 161, "ssl/ssl_lib.c", 3091);
                    goto LABEL_31;
                  }
                  v13 = sub_113394();
                  v4[64] = v13;
                  if ( v13 )
                  {
                    v14 = sub_D99DC("ssl3-md5");
                    v4[36] = v14;
                    if ( !v14 )
                    {
                      sub_D0048(20, 169, 242, "ssl/ssl_lib.c", 3100);
                      goto LABEL_31;
                    }
                    v15 = sub_D99DC("ssl3-sha1");
                    v4[37] = v15;
                    if ( !v15 )
                    {
                      sub_D0048(20, 169, 243, "ssl/ssl_lib.c", 3104);
                      goto LABEL_31;
                    }
                    v16 = sub_10BFCC(v15);
                    v4[41] = v16;
                    if ( v16 )
                    {
                      v17 = sub_10BFCC(v16);
                      v4[42] = v17;
                      if ( v17 )
                      {
                        if ( sub_DBE44(1, v4, v4 + 35) )
                        {
                          v18 = sub_E180C(64, "ssl/ssl_lib.c", 3117);
                          v4[82] = v18;
                          if ( v18 )
                          {
                            if ( (*(_DWORD *)(*(_DWORD *)(a1 + 100) + 48) & 8) == 0 )
                              v4[39] = sub_871F8();
                            v4[70] = 0x4000;
                            v4[69] = 0x4000;
                            if ( sub_F497C(v4 + 78, 16) <= 0
                              || sub_F49BC(v4[82], 32) <= 0
                              || sub_F49BC(v4[82] + 32, 32) <= 0 )
                            {
                              v4[43] |= 0x4000u;
                            }
                            if ( sub_F49BC(v4 + 100, 32) > 0 && sub_A67C4(v4) )
                            {
                              v19 = v4[43];
                              v4[86] = -1;
                              v4[136] = 0;
                              v4[137] = 0x4000;
                              v4[43] = v19 | 0x120004;
                              v4[144] = 2;
                              sub_8D2C4(v4);
                              return (bool)v4;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    sub_D0048(20, 169, 65, "ssl/ssl_lib.c", 3214);
LABEL_31:
    sub_89F14((int)v4);
    return 0;
  }
  return result;
}
