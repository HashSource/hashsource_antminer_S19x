int __fastcall sub_1157AC(int *a1)
{
  int v1; // r4
  void **v2; // r0
  char ***v3; // r9
  char **v4; // r0
  int v5; // r4
  size_t *v6; // r10
  int v7; // r5
  size_t v9; // r7
  int v10; // r0
  int v11; // r6
  unsigned __int8 *v12; // r5
  unsigned int v13; // r0
  unsigned __int8 *v14; // r4
  unsigned __int8 *v15; // r8
  unsigned int v16; // t1
  unsigned __int8 *v17; // r5
  int v18; // r7
  int v19; // r11
  unsigned int v20; // r0
  int v21; // r8
  unsigned __int8 *v22; // r4
  unsigned int v23; // r0
  unsigned __int8 *v24; // r9
  unsigned int v25; // t1
  char *v26; // r5
  int v27; // r4
  int v28; // r0
  bool v29; // cc
  unsigned int v30; // r1
  _BYTE *v31; // r0
  int v32; // r4
  unsigned int v33; // r1
  int v34; // r2
  signed int v35; // [sp+8h] [bp-24h]
  int v37; // [sp+10h] [bp-1Ch]
  void **v38; // [sp+14h] [bp-18h]
  int *v39; // [sp+18h] [bp-14h]
  char ***v40; // [sp+1Ch] [bp-10h]
  _BYTE *v41; // [sp+20h] [bp-Ch] BYREF
  size_t *v42[2]; // [sp+24h] [bp-8h] BYREF

  v39 = (int *)sub_10BFCC();
  if ( v39 )
  {
    v35 = 0;
    v37 = -1;
    v38 = 0;
    while ( v35 < sub_10C010(*a1) )
    {
      v1 = sub_10C01C((_DWORD *)*a1, v35);
      if ( *(_DWORD *)(v1 + 8) != v37 )
      {
        v2 = sub_10BFCC();
        v38 = v2;
        if ( !v2 )
        {
          v7 = 0;
          v3 = 0;
          goto LABEL_13;
        }
        if ( !sub_10BD3C(v39, (int)v2) )
        {
          v7 = 0;
          sub_10BDB4(v38);
          v3 = 0;
          sub_D0048(11, 156, 65, (int)"crypto/x509/x_name.c", 328);
          goto LABEL_13;
        }
        v37 = *(_DWORD *)(v1 + 8);
      }
      v3 = (char ***)sub_115798();
      if ( !v3 )
      {
        v7 = 0;
        sub_D0048(11, 156, 65, (int)"crypto/x509/x_name.c", 335);
        goto LABEL_13;
      }
      v4 = sub_EB288(*(char ***)v1);
      *v3 = v4;
      if ( !v4 )
      {
        v7 = 0;
        v34 = 340;
LABEL_46:
        sub_D0048(11, 156, 65, (int)"crypto/x509/x_name.c", v34);
        goto LABEL_13;
      }
      v5 = *(_DWORD *)(v1 + 4);
      v6 = (size_t *)v3[1];
      if ( (sub_AF1C4(*(_DWORD *)(v5 + 4)) & 0x2956) != 0 )
      {
        v6[1] = 12;
        v10 = sub_12A71C(v6 + 2, v5);
        v11 = v10;
        *v6 = v10;
        if ( v10 == -1 )
        {
LABEL_12:
          v7 = 0;
          goto LABEL_13;
        }
        v12 = (unsigned __int8 *)v6[2];
        if ( v10 > 0 )
        {
          while ( 1 )
          {
            v13 = *v12;
            v14 = v12++;
            if ( !sub_BDB10(v13, 8) )
              break;
            if ( !--v11 )
              goto LABEL_35;
          }
          v9 = 0;
          v15 = &v14[v11];
          while ( 1 )
          {
            v16 = *--v15;
            if ( !sub_BDB10(v16, 8) )
              break;
            if ( !--v11 )
              goto LABEL_15;
          }
          v17 = 0;
          v40 = v3;
          v18 = v6[2] + 1;
          do
          {
            v20 = *v14;
            if ( (v20 & 0x80) != 0 )
            {
              ++v14;
              ++v17;
              v19 = v18;
              *(_BYTE *)(v18 - 1) = v20;
            }
            else if ( sub_BDB10(v20, 8) )
            {
              v21 = v17 - v14;
              v19 = v18;
              v22 = v14 + 1;
              *(_BYTE *)(v18 - 1) = 32;
              do
              {
                v23 = *v22;
                v24 = v22;
                v17 = &(v22++)[v21];
              }
              while ( sub_BDB10(v23, 8) );
              v14 = v24;
            }
            else
            {
              v25 = *v14++;
              ++v17;
              v19 = v18;
              *(_BYTE *)(v18 - 1) = sub_BDB30(v25);
            }
            ++v18;
          }
          while ( (int)v17 < v11 );
          v3 = v40;
          v9 = v19 - v6[2];
LABEL_15:
          *v6 = v9;
        }
        else
        {
LABEL_35:
          *v6 = 0;
        }
      }
      else if ( !sub_AE140(v6, (int *)v5) )
      {
        goto LABEL_12;
      }
      if ( !sub_10BD3C((int *)v38, (int)v3) )
      {
        v7 = 0;
        v34 = 346;
        goto LABEL_46;
      }
      ++v35;
    }
    v26 = 0;
    v27 = 0;
    while ( 1 )
    {
      v29 = v27 < sub_10C010((int)v39);
      v30 = v27++;
      if ( !v29 )
        break;
      v42[0] = (size_t *)sub_10C01C(v39, v30);
      v28 = sub_B0D50(v42, 0, byte_20F564, -1, -1);
      v26 += v28;
      if ( v28 < 0 )
      {
        v7 = 0;
        v3 = 0;
        goto LABEL_13;
      }
    }
    a1[4] = (int)v26;
    v31 = CRYPTO_malloc(v26);
    v41 = v31;
    if ( v31 )
    {
      v32 = 0;
      a1[3] = (int)v31;
      do
      {
        v29 = v32 < sub_10C010((int)v39);
        v33 = v32++;
        if ( !v29 )
          break;
        v42[0] = (size_t *)sub_10C01C(v39, v33);
      }
      while ( sub_B0D50(v42, &v41, byte_20F564, -1, -1) >= 0 );
      v7 = 1;
      v3 = 0;
    }
    else
    {
      v7 = 0;
      v3 = 0;
      sub_D0048(11, 156, 65, (int)"crypto/x509/x_name.c", 360);
    }
  }
  else
  {
    sub_D0048(11, 156, 65, (int)"crypto/x509/x_name.c", 317);
    v3 = 0;
    v7 = 0;
  }
LABEL_13:
  X509_NAME_ENTRY_free((int)v3);
  sub_10BFDC((int)v39, sub_115690);
  return v7;
}
