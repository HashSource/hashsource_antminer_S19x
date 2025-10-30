int __fastcall sub_A65F8(int result)
{
  _DWORD *v1; // r5
  void *v2; // r6
  _DWORD *v3; // r4
  int v4; // r0
  int v5; // r7
  int v6; // r1
  int v7; // r2
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r2
  int v19; // r0
  int v20; // r0
  int v21; // [sp+Ch] [bp-1Ch]

  if ( result )
  {
    v1 = *(_DWORD **)(result + 1232);
    if ( v1 )
    {
      v2 = (void *)(result + 1548);
      v3 = (_DWORD *)result;
      memset((void *)(result + 1548), 0, 0x40u);
      v4 = v1[117];
      v5 = v1[113];
      v21 = v1[126];
      v6 = v1[114];
      v7 = v1[115];
      v3[387] = v1[112];
      v3[388] = v5;
      v3[389] = v6;
      v3[390] = v7;
      v3[401] = v21;
      if ( v4 )
      {
        v8 = sub_B8A2C();
        v3[392] = v8;
        if ( !v8 )
          goto LABEL_24;
      }
      if ( v1[118] )
      {
        v9 = sub_B8A2C();
        v3[393] = v9;
        if ( !v9 )
          goto LABEL_24;
      }
      if ( v1[119] )
      {
        v10 = sub_B8A2C();
        v3[394] = v10;
        if ( !v10 )
          goto LABEL_24;
      }
      if ( v1[120] )
      {
        v11 = sub_B8A2C();
        v3[395] = v11;
        if ( !v11 )
          goto LABEL_24;
      }
      if ( v1[121] )
      {
        v12 = sub_B8A2C();
        v3[396] = v12;
        if ( !v12 )
          goto LABEL_24;
      }
      if ( v1[122] && (v13 = sub_B8A2C(), (v3[397] = v13) == 0)
        || v1[124] && (v14 = sub_B8A2C(), (v3[399] = v14) == 0)
        || v1[123] && (v15 = sub_B8A2C(), (v3[398] = v15) == 0) )
      {
LABEL_24:
        sub_D0048(20, 313, 3, "ssl/tls_srp.c", 98);
      }
      else
      {
        v16 = v1[116];
        if ( !v16 || (v17 = sub_E9E3C(v16, "ssl/tls_srp.c", 102), v18 = 103, (v3[391] = v17) != 0) )
        {
          v19 = v1[125];
          if ( !v19 || (v20 = sub_E9E3C(v19, "ssl/tls_srp.c", 107), (v3[400] = v20) != 0) )
          {
            v3[402] = v1[127];
            return 1;
          }
          v18 = 108;
        }
        sub_D0048(20, 313, 68, "ssl/tls_srp.c", v18);
      }
      CRYPTO_free(v3[391], "ssl/tls_srp.c", 115);
      CRYPTO_free(v3[400], "ssl/tls_srp.c", 116);
      sub_B895C(v3[392]);
      sub_B895C(v3[393]);
      sub_B895C(v3[394]);
      sub_B895C(v3[395]);
      sub_B895C(v3[396]);
      sub_B895C(v3[397]);
      sub_B895C(v3[398]);
      sub_B895C(v3[399]);
      memset(v2, 0, 0x40u);
      return 0;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
