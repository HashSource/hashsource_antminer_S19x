int __fastcall sub_EFEAC(_DWORD *a1, int *a2, _DWORD *a3, int a4)
{
  char *v6; // r0
  __int16 v7; // r2
  char *v8; // r11
  void *v9; // r7
  int v10; // r5
  _DWORD *v11; // r4
  int v12; // r6
  _DWORD *v14; // r3
  int v15; // r2
  int v16; // r10
  char *v17; // r7
  char *v18; // r0
  char *v19; // r0
  char *v20; // r0
  int v21; // r1
  int v22; // r2
  bool v23; // r6
  int i; // r5
  bool v25; // cc
  __int64 v26; // r0
  int *v27; // r8
  int v28; // r0
  char *v29; // r0
  char *v30; // r0
  int v31; // r0
  int v32; // r2
  int v33; // r3
  char *v34; // r0
  char *v35; // r0
  bool v36; // zf
  __int16 v37; // r2
  int v38; // r0
  _DWORD *v39; // r0
  int v40; // r1
  int v41; // r2
  int v42; // r7
  int v43; // r1
  int v44; // r8
  int v45; // r4
  int v46; // r0
  int v47; // r0
  void *v48; // r0
  int v49; // r0
  int v50; // r6
  int v51; // r4
  _DWORD *v52; // r3
  int v53; // r5
  void *v54; // r0
  int v55; // r1
  void *v56; // r0
  _DWORD *v57; // r0
  int src; // [sp+0h] [bp-34h]
  int srca; // [sp+0h] [bp-34h]
  int v61; // [sp+10h] [bp-24h]
  int *v63; // [sp+18h] [bp-1Ch]
  _DWORD *v64; // [sp+1Ch] [bp-18h]
  int v65; // [sp+24h] [bp-10h] BYREF
  int v66; // [sp+28h] [bp-Ch] BYREF
  int v67; // [sp+2Ch] [bp-8h] BYREF

  v65 = 0;
  v66 = 0;
  v67 = 0;
  if ( a1 )
  {
    if ( a1[5] )
    {
      v6 = sub_EAC84(a1[4]);
      a1[2] = 0;
      if ( v6 == (char *)23 )
      {
        v32 = a1[5];
        v33 = *(_DWORD *)(v32 + 8);
        v16 = *(_DWORD *)(v32 + 4);
        v63 = *(int **)(v33 + 4);
        v61 = *(_DWORD *)(v33 + 8);
        v34 = sub_EAC84(*v63);
        v35 = sub_EAAB4((unsigned int)v34);
        v20 = (char *)sub_D99BC((int)v35);
        v8 = v20;
        if ( !v20 )
        {
          v7 = 111;
          src = 425;
          goto LABEL_7;
        }
        v36 = a3 == 0;
        if ( !a3 )
          v36 = v61 == 0;
        if ( !v36 )
        {
          v12 = 0;
LABEL_34:
          v38 = sub_15C058(v20, v21);
          v39 = sub_B655C(v38);
          v10 = (int)v39;
          if ( !v39 )
          {
            v11 = 0;
            sub_D0048(33, 112, 32, (int)"crypto/pkcs7/pk7_doit.c", 468);
            v8 = 0;
            v9 = 0;
            goto LABEL_8;
          }
          v42 = 0;
          if ( !a4 )
          {
            v64 = v39;
            while ( 1 )
            {
              v25 = a4 < sub_10C010(v16, v40, v41);
              v55 = a4++;
              if ( !v25 )
              {
                v10 = (int)v64;
                goto LABEL_42;
              }
              v53 = sub_10C01C(v16, v55);
              v54 = (void *)sub_D8AD0((int)v8);
              if ( sub_EF7A0((void **)&v66, (size_t *)&v67, v53, a2, v54) < 0 )
                break;
              sub_D00F0();
            }
            v8 = 0;
            v10 = (int)v64;
            v9 = 0;
            v11 = 0;
            goto LABEL_8;
          }
          while ( 1 )
          {
            v25 = v42 < sub_10C010(v16, v40, v41);
            v43 = v42++;
            if ( !v25 )
            {
              v8 = 0;
              sub_D0048(33, 112, 115, (int)"crypto/pkcs7/pk7_doit.c", 491);
              v9 = 0;
              v11 = 0;
              goto LABEL_8;
            }
            v44 = sub_10C01C(v16, v43);
            v45 = **(_DWORD **)(v44 + 4);
            v46 = sub_10E65C(a4);
            if ( !sub_10E6E0(v45, v46) )
            {
              v47 = sub_10E664(a4);
              if ( !sub_126528(v47, *(_DWORD *)(*(_DWORD *)(v44 + 4) + 4)) )
                break;
            }
          }
          v11 = 0;
          if ( sub_EF7A0((void **)&v66, (size_t *)&v67, v44, a2, 0) < 0 )
            goto LABEL_81;
          sub_D00F0();
LABEL_42:
          v11 = 0;
          v65 = 0;
          sub_B6ECC(v10, 129, 0, (int)&v65);
          if ( sub_D8440((int *)v65, v8, 0, 0, 0, 0) <= 0 || sub_D89D0((int *)v65, v63[1]) < 0 )
          {
LABEL_81:
            v8 = 0;
            v9 = 0;
            goto LABEL_8;
          }
          v8 = (char *)sub_D8AD4(v65);
          v48 = CRYPTO_malloc(v8);
          v9 = v48;
          if ( !v48 )
            goto LABEL_70;
          if ( sub_D87DC((_DWORD *)v65, (int)v48) <= 0 )
            goto LABEL_8;
          if ( !v66 )
          {
            v66 = (int)v9;
            v9 = 0;
            v67 = (int)v8;
          }
          v49 = sub_D8AD4(v65);
          if ( v49 != v67 && !sub_D8784((_DWORD *)v65, v67) )
          {
            sub_E0758((void *)v66, v67, (size_t)"crypto/pkcs7/pk7_doit.c");
            v66 = (int)v9;
            v9 = 0;
            v67 = (int)v8;
          }
          v11 = 0;
          sub_D00F0();
          if ( sub_D8440((int *)v65, 0, 0, v66, 0, 0) <= 0 )
            goto LABEL_8;
          sub_E0758((void *)v66, v67, (size_t)"crypto/pkcs7/pk7_doit.c");
          v66 = 0;
          sub_E0758(v9, (size_t)v8, (size_t)"crypto/pkcs7/pk7_doit.c");
          if ( v12 )
            sub_B70C0(v12, v10);
          else
            v12 = v10;
LABEL_54:
          if ( a3 )
            goto LABEL_55;
          if ( *(int *)v61 <= 0 )
          {
            v56 = sub_B7E30();
            v57 = sub_B655C((int)v56);
            a3 = v57;
            if ( !v57 )
            {
              v9 = 0;
              v10 = 0;
              v11 = 0;
              goto LABEL_8;
            }
            sub_B6ECC((int)v57, 130, 0, 0);
            goto LABEL_55;
          }
          a3 = sub_B7E48(*(const char **)(v61 + 8), *(_DWORD *)v61);
          if ( a3 )
          {
LABEL_55:
            sub_B70C0(v12, (int)a3);
            return v12;
          }
          v9 = 0;
          v10 = 0;
LABEL_70:
          v11 = v9;
          goto LABEL_8;
        }
        goto LABEL_30;
      }
      if ( v6 == (char *)24 )
      {
        v14 = (_DWORD *)a1[5];
        v15 = v14[5];
        v16 = v14[6];
        v17 = (char *)v14[1];
        v63 = *(int **)(v15 + 4);
        v61 = *(_DWORD *)(v15 + 8);
        v18 = sub_EAC84(*v63);
        v19 = sub_EAAB4((unsigned int)v18);
        v20 = (char *)sub_D99BC((int)v19);
        v8 = v20;
        if ( !v20 )
        {
          v7 = 111;
          src = 413;
          goto LABEL_7;
        }
        v23 = v61 == 0;
LABEL_11:
        if ( a3 )
          v12 = 0;
        else
          v12 = v23;
        if ( !v12 )
        {
          if ( v17 )
          {
            for ( i = 0; ; ++i )
            {
              v25 = i < sub_10C010(v17, v21, v22);
              v21 = i;
              v20 = v17;
              if ( !v25 )
                break;
              v26 = sub_10C01C(v17, i);
              v27 = (int *)v26;
              v28 = sub_15C394(v26, HIDWORD(v26));
              v11 = sub_B655C(v28);
              if ( !v11 )
              {
                v10 = 0;
                sub_D0048(33, 112, 32, (int)"crypto/pkcs7/pk7_doit.c", 445);
                v8 = 0;
                v9 = 0;
                goto LABEL_8;
              }
              v29 = sub_EAC84(*v27);
              v30 = sub_EAAB4((unsigned int)v29);
              v31 = sub_D99DC((int)v30);
              if ( !v31 )
              {
                v8 = 0;
                v9 = 0;
                v10 = 0;
                sub_D0048(33, 112, 109, (int)"crypto/pkcs7/pk7_doit.c", 453);
                goto LABEL_8;
              }
              sub_B6ECC((int)v11, 111, 0, v31);
              if ( v12 )
                sub_B70C0(v12, (int)v11);
              else
                v12 = (int)v11;
            }
          }
          else
          {
            v12 = 0;
          }
          if ( !v8 )
            goto LABEL_54;
          goto LABEL_34;
        }
LABEL_30:
        srca = 436;
        v37 = 122;
LABEL_31:
        v8 = 0;
        v9 = 0;
        sub_D0048(33, 112, v37, (int)"crypto/pkcs7/pk7_doit.c", srca);
        v10 = 0;
        v11 = 0;
        v12 = 0;
        goto LABEL_8;
      }
      if ( v6 != (char *)22 )
      {
        v7 = 112;
        src = 430;
        v8 = 0;
LABEL_7:
        v9 = 0;
        v10 = 0;
        v11 = 0;
        v12 = 0;
        sub_D0048(33, 112, v7, (int)"crypto/pkcs7/pk7_doit.c", src);
LABEL_8:
        sub_E0758((void *)v66, v67, (size_t)"crypto/pkcs7/pk7_doit.c");
        sub_E0758(v9, (size_t)v8, (size_t)"crypto/pkcs7/pk7_doit.c");
        sub_B717C(v12);
        sub_B717C((int)v11);
        sub_B717C(v10);
        sub_B717C(0);
        return 0;
      }
      v50 = *(_DWORD *)(a1[5] + 20);
      if ( sub_EAC84(*(_DWORD *)(v50 + 16)) == (char *)21 )
      {
        v51 = *(_DWORD *)(v50 + 20);
      }
      else
      {
        if ( (unsigned int)(sub_EAC84(*(_DWORD *)(v50 + 16)) - 21) <= 5 )
        {
          if ( sub_EAC84(a1[4]) != (char *)22 )
            goto LABEL_92;
          v61 = 0;
          goto LABEL_60;
        }
        v52 = *(_DWORD **)(v50 + 20);
        if ( !v52 || *v52 != 4 )
        {
          if ( sub_EAC84(a1[4]) == (char *)22 )
          {
            v20 = (char *)sub_F0F48(a1, 2, 0);
            if ( v20 )
            {
              v23 = 1;
              v61 = 0;
              goto LABEL_66;
            }
          }
          goto LABEL_92;
        }
        v51 = v52[1];
      }
      v20 = sub_EAC84(a1[4]);
      v61 = v51;
      if ( v20 != (char *)22 )
      {
LABEL_64:
        if ( v61 )
        {
          v23 = 0;
          goto LABEL_66;
        }
LABEL_92:
        srca = 399;
        v37 = 155;
        goto LABEL_31;
      }
LABEL_60:
      v20 = (char *)sub_F0F48(a1, 2, 0);
      if ( v20 )
      {
        v23 = v61 == 0;
LABEL_66:
        v16 = 0;
        v63 = 0;
        v8 = 0;
        v17 = *(char **)(a1[5] + 4);
        goto LABEL_11;
      }
      goto LABEL_64;
    }
    sub_D0048(33, 112, 122, (int)"crypto/pkcs7/pk7_doit.c", 381);
    return 0;
  }
  else
  {
    sub_D0048(33, 112, 143, (int)"crypto/pkcs7/pk7_doit.c", 376);
    return 0;
  }
}
