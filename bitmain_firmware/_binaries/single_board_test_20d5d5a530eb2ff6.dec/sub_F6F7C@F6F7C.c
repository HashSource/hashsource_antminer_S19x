int __fastcall sub_F6F7C(int a1, int a2, int a3, int *a4)
{
  int v5; // r4
  char *v7; // r5
  char **v8; // r0
  int v9; // r0
  _DWORD **v10; // r4
  char *v11; // r0
  char *v12; // r0
  int v13; // r0
  int v14; // r5
  int v15; // r7
  int *v16; // r0
  char *v17; // r0
  char *v18; // r0
  void *v19; // r7
  char *v20; // r0
  char *v21; // r0
  int *v22; // r6
  int v23; // r0
  int v24; // r6
  int *v25; // r4
  char *v26; // r5
  char **v27; // r0
  int v28; // r3
  int v29; // r8
  int v30; // r0
  int v31; // r1
  size_t v32; // r8
  _DWORD *v33; // r5
  int v34; // r7
  _DWORD *v35; // r0
  int *v36; // r0
  int v37; // r0
  int v38; // r0
  _DWORD *v39; // r3
  bool v40; // cc
  int *v41; // r5
  int v42; // r0
  int v43; // r5
  int v44; // r8
  int v45; // r0
  int v46; // r7
  int v47; // r0
  _DWORD *v48; // r7
  char **v49; // r0
  _DWORD *v50; // r4
  char **v51; // r0
  char *v52; // [sp+Ch] [bp-1Ch] BYREF
  int v53; // [sp+10h] [bp-18h]
  int *v54; // [sp+14h] [bp-14h] BYREF
  int *v55; // [sp+18h] [bp-10h] BYREF
  _DWORD *v56; // [sp+1Ch] [bp-Ch] BYREF
  int v57; // [sp+20h] [bp-8h] BYREF
  char *s; // [sp+24h] [bp-4h] BYREF

  v52 = 0;
  switch ( a2 )
  {
    case 1:
      if ( a3 )
        return 1;
      sub_F1598(a4, 0, 0, &v52);
      goto LABEL_10;
    case 2:
      if ( **(_DWORD **)(a1 + 12) == 912 )
        return -2;
      if ( !a3 )
      {
        sub_F15B4((int)a4, &v52);
LABEL_10:
        v7 = v52;
        if ( v52 )
          goto LABEL_11;
      }
      return 1;
    case 3:
      v9 = *(_DWORD *)(*(_DWORD *)(a1 + 24) + 52);
      if ( v9 )
      {
        v5 = sub_F6D84(v9, (int *)&v56, &v57, (int *)&s);
        if ( v5 )
        {
          v5 = 2;
          *a4 = sub_D8C70((int)v56);
        }
        else
        {
          sub_D0048(4, 0, 68, (int)"crypto/rsa/rsa_ameth.c", 515);
        }
      }
      else
      {
        v5 = 1;
        *a4 = 672;
      }
      return v5;
    case 5:
      if ( a3 )
      {
        if ( a3 != 1 )
          return 1;
        v10 = (_DWORD **)sub_13A084(a4);
        sub_13A254(a4, 0, 0, 0, &v54);
        v11 = sub_EAC84(*v54);
        if ( v11 != (char *)912 )
        {
          if ( **v10 == 912 )
          {
            sub_D0048(4, 158, 144, (int)"crypto/rsa/rsa_ameth.c", 763);
          }
          else
          {
            if ( v11 == (char *)6 )
              return 1;
            v5 = sub_EB3A8((int)v11, 0, &s);
            if ( !v5 )
              return v5;
            if ( s == (char *)6 )
              return 1;
          }
          return 0;
        }
        v41 = v54;
        v56 = 0;
        v57 = 0;
        if ( sub_EAC84(*v54) != (char *)912 )
        {
          v5 = -1;
          sub_D0048(4, 155, 155, (int)"crypto/rsa/rsa_ameth.c", 676);
          return v5;
        }
        v42 = sub_AD8B0((int)&RSA_PSS_PARAMS_it, (_DWORD *)v41[1]);
        v43 = v42;
        if ( v42 )
        {
          v44 = *(_DWORD *)(v42 + 4);
          if ( v44 )
          {
            if ( sub_EAC84(*(_DWORD *)v44) == (char *)911 )
            {
              v45 = sub_AD8B0((int)X509_ALGOR_it, *(_DWORD **)(v44 + 4));
              *(_DWORD *)(v43 + 16) = v45;
              if ( v45 )
                goto LABEL_95;
            }
            else
            {
              *(_DWORD *)(v43 + 16) = 0;
            }
            v47 = v43;
            v43 = 0;
            sub_F78A4(v47);
          }
        }
LABEL_95:
        if ( sub_F6D84(v43, &v57, (int *)&v56, (int *)&v55) )
        {
          if ( sub_DB77C((int)v10, -1, 248) > 0 )
          {
            v46 = sub_D8C70(v57);
            if ( v46 == sub_D8C70((int)s) )
            {
              if ( sub_F89C8(v10, -1, 4097, 6, 0) > 0
                && sub_F89C8(v10, 24, 4098, v55, 0) > 0
                && sub_F89C8(v10, 1016, 4101, 0, v56) > 0 )
              {
                v5 = 1;
                goto LABEL_100;
              }
            }
            else
            {
              sub_D0048(4, 155, 158, (int)"crypto/rsa/rsa_ameth.c", 696);
            }
          }
          v5 = -1;
        }
        else
        {
          v5 = -1;
          sub_D0048(4, 155, 149, (int)"crypto/rsa/rsa_ameth.c", 683);
        }
LABEL_100:
        sub_F78A4(v43);
        return v5;
      }
      v57 = 1;
      v24 = sub_13A084(a4);
      sub_13A254(a4, 0, 0, 0, &s);
      if ( !v24 || sub_F89C8(v24, -1, 4102, 0, &v57) > 0 )
      {
        if ( v57 == 1 )
        {
          v7 = s;
          goto LABEL_11;
        }
        if ( v57 == 6 )
        {
          v25 = sub_F6C30(v24);
          if ( v25 )
          {
            v26 = s;
            v27 = sub_EAA20(0x390u);
            v28 = (int)v25;
            v5 = 1;
            sub_B28F8(v26, (int)v27, 16, v28);
            return v5;
          }
        }
      }
      return 0;
    case 7:
      if ( **(_DWORD **)(a1 + 12) == 912 )
        return -2;
      if ( a3 )
      {
        if ( a3 != 1 )
          return 1;
        v5 = sub_137928(a4);
        if ( !v5 )
          return v5;
        if ( !sub_1379E0(a4, 0, 0, &s) )
          return -1;
        v12 = sub_EAC84(*(_DWORD *)s);
        if ( v12 == (char *)6 )
          return 1;
        if ( v12 != (char *)919 )
        {
          v5 = -1;
          sub_D0048(4, 159, 162, (int)"crypto/rsa/rsa_ameth.c", 935);
          return v5;
        }
        v13 = sub_AD8B0((int)&RSA_OAEP_PARAMS_it, *((_DWORD **)s + 1));
        v14 = v13;
        if ( v13 )
        {
          v15 = *(_DWORD *)(v13 + 4);
          if ( !v15 )
          {
            v16 = *(int **)(v13 + 12);
            if ( !v16 )
            {
              v19 = sub_D93D8();
              if ( !v19 )
                goto LABEL_77;
LABEL_36:
              if ( !*(_DWORD *)v14 )
              {
                if ( !sub_D93D8() )
                  goto LABEL_77;
                goto LABEL_38;
              }
              v20 = sub_EAC84(**(_DWORD **)v14);
              v21 = sub_EAAB4((unsigned int)v20);
              if ( sub_D99DC((int)v21) )
              {
LABEL_38:
                v22 = *(int **)(v14 + 8);
                if ( v22 )
                {
                  if ( sub_EAC84(*v22) != (char *)935 )
                  {
                    sub_D0048(4, 159, 163, (int)"crypto/rsa/rsa_ameth.c", 957);
LABEL_41:
                    v5 = -1;
                    v23 = v14;
LABEL_42:
                    sub_F78FC(v23);
                    return v5;
                  }
                  v39 = (_DWORD *)v22[1];
                  if ( *v39 != 4 )
                  {
                    sub_D0048(4, 159, 160, (int)"crypto/rsa/rsa_ameth.c", 961);
                    goto LABEL_41;
                  }
                  *(_DWORD *)(v39[1] + 8) = 0;
                }
                if ( sub_F89C8(v5, -1, 4097, 4, 0) > 0
                  && sub_DB77C(v5, 6, 768) > 0
                  && sub_F89C8(v5, 1016, 4101, 0, v19) > 0 )
                {
                  v40 = sub_DB77C(v5, 6, 768) <= 0;
                  v23 = v14;
                  if ( v40 )
                    v5 = -1;
                  else
                    v5 = 1;
                  goto LABEL_42;
                }
LABEL_77:
                v23 = v14;
                v5 = -1;
                goto LABEL_42;
              }
LABEL_106:
              sub_D0048(4, 156, 166, (int)"crypto/rsa/rsa_ameth.c", 585);
              v5 = -1;
              v23 = v14;
              goto LABEL_42;
            }
LABEL_35:
            v17 = sub_EAC84(*v16);
            v18 = sub_EAAB4((unsigned int)v17);
            v19 = (void *)sub_D99DC((int)v18);
            if ( !v19 )
              goto LABEL_106;
            goto LABEL_36;
          }
          if ( sub_EAC84(*(_DWORD *)v15) == (char *)911 )
          {
            v16 = (int *)sub_AD8B0((int)X509_ALGOR_it, *(_DWORD **)(v15 + 4));
            *(_DWORD *)(v14 + 12) = v16;
            if ( v16 )
              goto LABEL_35;
          }
          else
          {
            *(_DWORD *)(v14 + 12) = 0;
          }
          sub_F78FC(v14);
        }
        v5 = -1;
        sub_D0048(4, 159, 161, (int)"crypto/rsa/rsa_ameth.c", 942);
        v23 = 0;
        goto LABEL_42;
      }
      v55 = 0;
      v29 = sub_137928(a4);
      v57 = 1;
      if ( sub_1379E0(a4, 0, 0, &v56) <= 0 || v29 && sub_F89C8(v29, -1, 4102, 0, &v57) <= 0 )
        return 0;
      if ( v57 != 1 )
      {
        if ( v57 != 4 )
          return 0;
        if ( sub_DB77C(v29, 6, 768) <= 0
          || sub_F89C8(v29, 1016, 4104, 0, &v54) <= 0
          || (v30 = sub_DB77C(v29, 6, 768), v32 = v30, v30 < 0)
          || (v33 = (_DWORD *)sub_F78E8(v30, v31)) == 0 )
        {
          v5 = 0;
          v33 = 0;
          goto LABEL_72;
        }
        v34 = v53;
        if ( v53 && sub_D8C70(v53) != 64 )
        {
          v35 = (_DWORD *)sub_B2888();
          v5 = (int)v35;
          *v33 = v35;
          if ( !v35 )
            goto LABEL_72;
          sub_B2974(v35, v34);
        }
        v36 = (int *)sub_F688C(v33 + 1, (int)v54);
        if ( !v36 )
          goto LABEL_113;
        if ( !v32 )
        {
LABEL_120:
          v36 = sub_AE2BC((int)v33, (int)&RSA_OAEP_PARAMS_it, &v55);
          if ( v36 )
          {
            v50 = v56;
            v51 = sub_EAA20(0x397u);
            sub_B28F8(v50, (int)v51, 16, (int)v55);
            v5 = 1;
            v55 = 0;
            goto LABEL_72;
          }
          goto LABEL_113;
        }
        v36 = (int *)sub_B2888();
        v33[2] = v36;
        if ( !v36 )
        {
LABEL_113:
          v5 = (int)v36;
          goto LABEL_72;
        }
        v37 = sub_B2068();
        v5 = v37;
        if ( v37 )
        {
          if ( !sub_1280A4(v37, s, v32) )
          {
            v38 = v5;
            v5 = 0;
            j_ASN1_STRING_free(v38);
            goto LABEL_72;
          }
          v48 = (_DWORD *)v33[2];
          v49 = sub_EAA20(0x3A7u);
          sub_B28F8(v48, (int)v49, 4, v5);
          goto LABEL_120;
        }
LABEL_72:
        sub_F78FC(v33);
        ASN1_STRING_free((int)v55);
        return v5;
      }
      v7 = (char *)v56;
LABEL_11:
      v8 = sub_EAA20(6u);
      sub_B28F8(v7, (int)v8, 5, 0);
      return 1;
    case 8:
      if ( **(_DWORD **)(a1 + 12) == 912 )
        return -2;
      v5 = 1;
      *a4 = 0;
      return v5;
    default:
      return -2;
  }
}
