int __fastcall sub_CD784(int **a1, int a2)
{
  int v3; // r5
  int v4; // r4
  bool v5; // zf
  int v6; // r0
  _BYTE *v7; // r6
  int v8; // r3
  int v10; // r0
  char v11; // r2
  int v12; // r0
  char v13; // r3

  v3 = **a1;
  v4 = sub_E0740(64, "crypto/ec/ecx_meth.c", 70);
  if ( v4 )
  {
    v5 = v3 == 1034;
    if ( v3 != 1034 )
      v5 = v3 == 1087;
    if ( v5 )
    {
      v6 = sub_E12E4(32, "crypto/ec/ecx_meth.c", 80, 1087);
      v7 = (_BYTE *)v6;
      *(_DWORD *)(v4 + 60) = v6;
      if ( v6 )
      {
        if ( sub_F49BC(v6, 32) <= 0 )
        {
LABEL_17:
          sub_E1864(v7, "crypto/ec/ecx_meth.c", 87);
          *(_DWORD *)(v4 + 60) = 0;
LABEL_18:
          CRYPTO_free(v4, "crypto/ec/ecx_meth.c", 121);
          return 0;
        }
        goto LABEL_8;
      }
    }
    else if ( v3 == 1035 )
    {
      v12 = sub_E12E4(56, "crypto/ec/ecx_meth.c", 80, 1035);
      v7 = (_BYTE *)v12;
      *(_DWORD *)(v4 + 60) = v12;
      if ( v12 )
      {
        if ( sub_F49BC(v12, 56) <= 0 )
          goto LABEL_17;
        goto LABEL_22;
      }
    }
    else
    {
      v10 = sub_E12E4(57, "crypto/ec/ecx_meth.c", 80, 1035);
      v7 = (_BYTE *)v10;
      *(_DWORD *)(v4 + 60) = v10;
      if ( v10 )
      {
        if ( sub_F49BC(v10, 57) <= 0 )
          goto LABEL_17;
LABEL_8:
        if ( v3 == 1034 )
        {
          v11 = *v7 & 0xF8;
          v7[31] = v7[31] & 0x3F | 0x40;
          *v7 = v11;
          sub_14F904(v4, v7);
LABEL_13:
          sub_D9F44(a2, v3, v4, v8);
          return 1;
        }
        if ( v3 != 1035 )
        {
          v8 = 1087;
          if ( v3 == 1087 )
          {
            sub_14F80C(v4, v7);
          }
          else if ( v3 == 1088 )
          {
            sub_15551C(v4, v7);
          }
          goto LABEL_13;
        }
LABEL_22:
        v13 = v7[55] | 0x80;
        *v7 &= 0xFCu;
        v7[55] = v13;
        sub_154E38(v4, v7);
        goto LABEL_13;
      }
    }
    sub_D0048(16, 266, 65, "crypto/ec/ecx_meth.c", 82);
    goto LABEL_18;
  }
  sub_D0048(16, 266, 65, "crypto/ec/ecx_meth.c", 72);
  return 0;
}
