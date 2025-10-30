int __fastcall sub_AB1D8(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v10; // r5
  _DWORD *v11; // r11
  int v12; // r0
  int v13; // r1
  int v14; // r2
  int v15; // r4
  int v16; // r0
  int v17; // r0
  bool v18; // cc
  int v19; // r1
  int v20; // r0
  _DWORD *v21; // r3
  int v22; // r4
  int v23; // r6
  _DWORD *v25; // r3
  int v26; // r0
  int v27; // r1
  int v28; // r2
  _DWORD *v29; // r3
  int v30; // r0
  _DWORD *v31; // r3
  int v32; // [sp+14h] [bp-8h] BYREF

  v10 = a5;
  if ( a1 )
    v11 = *(_DWORD **)(a1 + 1028);
  else
    v11 = *(_DWORD **)(a2 + 192);
  v12 = sub_A4D60(a1, a2, a3, 0, 1);
  if ( v12 == 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      v18 = v15 < sub_10C010(a5, v13, v14);
      v19 = v15++;
      if ( !v18 )
        break;
      v16 = sub_10C01C(a5, v19);
      v17 = sub_A4D60(a1, a2, v16, 0, 0);
      if ( v17 != 1 )
      {
        sub_D0048(20, 621, v17, "ssl/ssl_rsa.c", 1079);
        sub_DA240(0);
        return 0;
      }
    }
    v20 = sub_10E8A8(a3, v19);
    v22 = v20;
    if ( !v20 )
    {
      v23 = 0;
      goto LABEL_18;
    }
    if ( !a4 )
    {
      a4 = v20;
LABEL_14:
      v23 = (int)sub_8559C(v22, &v32);
      if ( v23 )
      {
        if ( !a6 && ((v21 = &v11[5 * v32], v21[5]) || v21[6] || v21[7]) )
        {
          v23 = 0;
          sub_D0048(20, 621, 289, "ssl/ssl_rsa.c", 1120);
        }
        else if ( a5 && (v10 = sub_10EBC4(a5)) == 0 )
        {
          v23 = 0;
          sub_D0048(20, 621, 65, "ssl/ssl_rsa.c", 1127);
        }
        else
        {
          v23 = 1;
          sub_10BFDC(v11[5 * v32 + 7], X509_free);
          v25 = &v11[5 * v32];
          v26 = v25[5];
          v25[7] = v10;
          X509_free(v26, v27, v28);
          sub_10FD18(a3);
          v29 = &v11[5 * v32];
          v30 = v29[6];
          v29[5] = a3;
          sub_DA240(v30);
          sub_D9C08(a4);
          v31 = &v11[5 * v32];
          v31[6] = a4;
          *v11 = v31 + 5;
        }
      }
      else
      {
        sub_D0048(20, 621, 247, "ssl/ssl_rsa.c", 1112);
      }
      goto LABEL_18;
    }
    if ( sub_D9B28(a4) )
    {
      if ( sub_D9B28(v22) )
      {
        v23 = 0;
        sub_D0048(20, 621, 290, "ssl/ssl_rsa.c", 1094);
        goto LABEL_18;
      }
      sub_D9D74(a4, v22);
    }
    else if ( sub_D9B28(v22) )
    {
      sub_D9D74(v22, a4);
    }
    if ( sub_D9B60(v22, a4) == 1 )
      goto LABEL_14;
    v23 = 0;
    sub_D0048(20, 621, 288, "ssl/ssl_rsa.c", 1107);
  }
  else
  {
    v22 = 0;
    v23 = 0;
    sub_D0048(20, 621, v12, "ssl/ssl_rsa.c", 1073);
  }
LABEL_18:
  sub_DA240(v22);
  return v23;
}
