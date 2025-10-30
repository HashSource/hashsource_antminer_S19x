int __fastcall sub_F05CC(_DWORD *a1, _DWORD *a2)
{
  int *v3; // r10
  __int64 v4; // r0
  int v5; // r4
  _DWORD *v6; // r3
  char *v7; // r4
  _DWORD *k; // r0
  int v9; // r0
  _DWORD *v10; // r0
  int v11; // r6
  int v12; // r4
  int result; // r0
  int v14; // r0
  int v15; // r3
  int v16; // r2
  int v17; // r9
  int i; // r8
  int v19; // r7
  char *v20; // r5
  _DWORD *j; // r0
  int v22; // r0
  _DWORD *v23; // r0
  int v24; // r4
  int v25; // r3
  int v26; // r4
  _DWORD *v27; // r3
  void *v28; // r0
  void *v29; // r4
  int v30; // r1
  int v31; // r2
  int v32; // r2
  _DWORD *v33; // r0
  int v34; // r6
  int v35; // r7
  int v36; // r2
  _DWORD *v38; // [sp+10h] [bp-54h]
  int *v39; // [sp+18h] [bp-4Ch] BYREF
  size_t n; // [sp+1Ch] [bp-48h] BYREF
  void *v41[17]; // [sp+20h] [bp-44h] BYREF

  if ( a1 )
  {
    if ( a1[5] )
    {
      v3 = (int *)sub_D14F4();
      if ( v3 )
      {
        LODWORD(v4) = sub_EAC84(a1[4]);
        a1[2] = 0;
        switch ( (int)v4 )
        {
          case 21:
            v38 = (_DWORD *)a1[5];
            goto LABEL_18;
          case 22:
            v25 = a1[5];
            v26 = *(_DWORD *)(v25 + 20);
            v17 = *(_DWORD *)(v25 + 16);
            if ( sub_EAC84(*(_DWORD *)(v26 + 16)) != (char *)21 )
            {
              if ( (unsigned int)(sub_EAC84(*(_DWORD *)(v26 + 16)) - 21) > 5 )
              {
                v27 = *(_DWORD **)(v26 + 20);
                if ( !v27 )
                {
LABEL_49:
                  v38 = v27;
                  goto LABEL_43;
                }
                if ( *v27 == 4 )
                {
                  v38 = (_DWORD *)v27[1];
                  goto LABEL_43;
                }
              }
              v27 = 0;
              goto LABEL_49;
            }
            v38 = *(_DWORD **)(v26 + 20);
LABEL_43:
            if ( sub_EAC84(*(_DWORD *)(*(_DWORD *)(a1[5] + 20) + 16)) == (char *)21 && a1[3] )
            {
              j_ASN1_STRING_free(v38);
              v38 = 0;
              v16 = *(_DWORD *)(a1[5] + 20);
              *(_DWORD *)(v16 + 20) = 0;
            }
LABEL_27:
            if ( !v17 )
              goto LABEL_18;
            for ( i = 0; ; ++i )
            {
              while ( 1 )
              {
                if ( i >= sub_10C010(v17, HIDWORD(v4), v16) )
                  goto LABEL_18;
                v4 = sub_10C01C(v17, i);
                v19 = v4;
                if ( *(_DWORD *)(v4 + 28) )
                  break;
LABEL_53:
                ++i;
              }
              v20 = sub_EAC84(**(_DWORD **)(v4 + 8));
              for ( j = a2; ; j = (_DWORD *)sub_B7170(v24) )
              {
                v23 = sub_B7144(j, 520);
                v24 = (int)v23;
                if ( !v23 )
                  goto LABEL_36;
                sub_B6ECC((int)v23, 120, 0, (int)&v39);
                if ( !v39 )
                  goto LABEL_61;
                v22 = sub_D8D8C((int)v39);
                if ( v20 == (char *)sub_D8C70(v22) )
                  break;
              }
              if ( !sub_D17B4(v3, v39) )
                goto LABEL_37;
              if ( sub_10C010(*(_DWORD *)(v19 + 12), v30, v31) <= 0 )
                break;
              if ( !sub_F05AC(v19, 52) && !sub_162DFC(v19, 0) )
              {
                v32 = 623;
                goto LABEL_64;
              }
              if ( !sub_D16E4(v3, (int)v41, &n) )
              {
                sub_D0048(33, 136, 6, (int)"crypto/pkcs7/pk7_doit.c", 630);
                goto LABEL_37;
              }
              if ( !sub_162E40(v19, v41, n) )
              {
                v32 = 634;
LABEL_64:
                sub_D0048(33, 136, 65, (int)"crypto/pkcs7/pk7_doit.c", v32);
                goto LABEL_37;
              }
              if ( !sub_F0414(v19) )
                goto LABEL_37;
            }
            v41[0] = (void *)sub_D9AF8(*(_DWORD *)(v19 + 28));
            v28 = CRYPTO_malloc(v41[0]);
            v29 = v28;
            if ( !v28 )
              goto LABEL_37;
            if ( sub_15EF08(v3, v28, v41, *(_DWORD *)(v19 + 28)) )
            {
              sub_AE174(*(_DWORD **)(v19 + 20), (int)v29, (int)v41[0]);
              goto LABEL_53;
            }
            CRYPTO_free(v29);
            sub_D0048(33, 128, 6, (int)"crypto/pkcs7/pk7_doit.c", 770);
            goto LABEL_37;
          case 23:
            v38 = *(_DWORD **)(*(_DWORD *)(a1[5] + 8) + 8);
            if ( v38 )
              goto LABEL_18;
            v14 = sub_B2068();
            v38 = (_DWORD *)v14;
            if ( v14 )
            {
              *(_DWORD *)(*(_DWORD *)(a1[5] + 8) + 8) = v14;
              goto LABEL_18;
            }
            v12 = 0;
            v36 = 698;
            goto LABEL_88;
          case 24:
            v15 = a1[5];
            v16 = *(_DWORD *)(v15 + 20);
            v17 = *(_DWORD *)(v15 + 16);
            v38 = *(_DWORD **)(v16 + 8);
            if ( v38 )
              goto LABEL_27;
            LODWORD(v4) = sub_B2068();
            v38 = (_DWORD *)v4;
            if ( (_DWORD)v4 )
            {
              *(_DWORD *)(*(_DWORD *)(a1[5] + 20) + 8) = v4;
              goto LABEL_27;
            }
            v12 = 0;
            v36 = 686;
LABEL_88:
            sub_D0048(33, 128, 65, (int)"crypto/pkcs7/pk7_doit.c", v36);
            goto LABEL_22;
          case 25:
            v5 = *(_DWORD *)(a1[5] + 8);
            if ( sub_EAC84(*(_DWORD *)(v5 + 16)) != (char *)21 )
            {
              if ( (unsigned int)(sub_EAC84(*(_DWORD *)(v5 + 16)) - 21) > 5 )
              {
                v6 = *(_DWORD **)(v5 + 20);
                if ( !v6 )
                {
LABEL_47:
                  v38 = v6;
                  goto LABEL_10;
                }
                if ( *v6 == 4 )
                {
                  v38 = (_DWORD *)v6[1];
                  goto LABEL_10;
                }
              }
              v6 = 0;
              goto LABEL_47;
            }
            v38 = *(_DWORD **)(v5 + 20);
LABEL_10:
            if ( sub_EAC84(*(_DWORD *)(*(_DWORD *)(a1[5] + 8) + 16)) == (char *)21 && a1[3] )
            {
              j_ASN1_STRING_free(v38);
              v38 = 0;
              *(_DWORD *)(*(_DWORD *)(a1[5] + 8) + 20) = 0;
            }
            v7 = sub_EAC84(**(_DWORD **)(a1[5] + 4));
            for ( k = a2; ; k = (_DWORD *)sub_B7170(v11) )
            {
              v10 = sub_B7144(k, 520);
              v11 = (int)v10;
              if ( !v10 )
              {
LABEL_36:
                sub_D0048(33, 127, 108, (int)"crypto/pkcs7/pk7_doit.c", 600);
                goto LABEL_37;
              }
              sub_B6ECC((int)v10, 120, 0, (int)&v39);
              if ( !v39 )
              {
LABEL_61:
                sub_D0048(33, 127, 68, (int)"crypto/pkcs7/pk7_doit.c", 605);
                goto LABEL_37;
              }
              v9 = sub_D8D8C((int)v39);
              if ( v7 == (char *)sub_D8C70(v9) )
                break;
            }
            if ( !sub_D16E4(v39, (int)v41, &n) || !sub_1280A4(*(_DWORD *)(a1[5] + 12), (char *)v41, n) )
              goto LABEL_37;
LABEL_18:
            if ( sub_EAC84(a1[4]) == (char *)22 && sub_F0F48(a1, 2, 0) )
              goto LABEL_21;
            if ( v38 )
            {
              if ( (v38[3] & 0x10) != 0 )
              {
LABEL_21:
                v12 = 1;
              }
              else
              {
                v33 = sub_B7144(a2, 1025);
                v34 = (int)v33;
                if ( v33 )
                {
                  v12 = 1;
                  v35 = sub_B6ECC((int)v33, 3, 0, (int)v41);
                  sub_B6710(v34, 512);
                  sub_B6ECC(v34, 130, 0, 0);
                  sub_AE174(v38, (int)v41[0], v35);
                }
                else
                {
                  v12 = 0;
                  sub_D0048(33, 128, 107, (int)"crypto/pkcs7/pk7_doit.c", 800);
                }
              }
            }
            else
            {
LABEL_37:
              v12 = 0;
            }
LABEL_22:
            sub_D1504(v3);
            result = v12;
            break;
          default:
            v12 = 0;
            sub_D0048(33, 128, 112, (int)"crypto/pkcs7/pk7_doit.c", 726);
            goto LABEL_22;
        }
      }
      else
      {
        sub_D0048(33, 128, 65, (int)"crypto/pkcs7/pk7_doit.c", 668);
        return 0;
      }
    }
    else
    {
      sub_D0048(33, 128, 122, (int)"crypto/pkcs7/pk7_doit.c", 662);
      return 0;
    }
  }
  else
  {
    sub_D0048(33, 128, 143, (int)"crypto/pkcs7/pk7_doit.c", 657);
    return 0;
  }
  return result;
}
