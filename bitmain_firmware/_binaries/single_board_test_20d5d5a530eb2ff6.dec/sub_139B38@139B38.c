int __fastcall sub_139B38(int a1, int a2, int a3)
{
  int v3; // r9
  int v4; // r4
  int v5; // r5
  int *v8; // r0
  int v9; // r6
  char *v10; // r0
  char *v11; // r0
  _DWORD *v12; // r8
  int *v13; // r0
  int *v14; // r7
  _BYTE *v15; // r5
  int *v16; // r0
  int v17; // r7
  unsigned int v18; // r8
  unsigned int v19; // r5
  unsigned int v20; // r0
  bool v21; // cc
  size_t v22; // r8
  _BYTE *v23; // r11
  unsigned int v24; // r4
  unsigned int v25; // r10
  bool v26; // cc
  unsigned int *v27; // r3
  int *v28; // r0
  int v29; // r3
  void *v30; // r8
  int v31; // r0
  signed int v32; // r11
  int v33; // r1
  unsigned __int8 *v34; // r0
  unsigned __int8 *v35; // r9
  signed int v36; // r10
  int v37; // r10
  signed int v38; // [sp+Ch] [bp-18h]
  char *v39; // [sp+10h] [bp-14h]
  int v40[2]; // [sp+1Ch] [bp-8h] BYREF

  v3 = *(_DWORD *)(a2 + 4);
  v4 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 12);
  if ( !*(_DWORD *)(v3 + 16) )
  {
    sub_D0048(46, 167, 178, (int)"crypto/cms/cms_pwri.c", 293);
    return 0;
  }
  v5 = *(_DWORD *)(v3 + 8);
  if ( v5 && sub_EAC84(*(_DWORD *)v5) == (char *)893 )
  {
    v8 = (int *)sub_AD8B0((int)X509_ALGOR_it, *(_DWORD **)(v5 + 4));
    v9 = (int)v8;
    if ( !v8 )
    {
      sub_D0048(46, 167, 176, (int)"crypto/cms/cms_pwri.c", 309);
      return 0;
    }
    v10 = sub_EAC84(*v8);
    v11 = sub_EAAB4((unsigned int)v10);
    v12 = (_DWORD *)sub_D99BC((int)v11);
    if ( !v12 )
    {
      sub_D0048(46, 167, 148, (int)"crypto/cms/cms_pwri.c", 316);
      return 0;
    }
    v13 = (int *)sub_D7A5C();
    v14 = v13;
    if ( !v13 )
    {
      sub_D0048(46, 167, 65, (int)"crypto/cms/cms_pwri.c", 322);
      return 0;
    }
    v15 = 0;
    if ( !sub_D8440(v13, v12, 0, 0, 0, a3) )
      goto LABEL_10;
    sub_D83BC((int)v14, 0);
    if ( sub_D89D0(v14, *(_DWORD *)(v9 + 4)) <= 0 )
    {
      sub_D0048(46, 167, 102, (int)"crypto/cms/cms_pwri.c", 331);
      goto LABEL_11;
    }
    if ( sub_15E23C(
           **(_DWORD **)(v3 + 4),
           *(_DWORD *)(v3 + 16),
           *(_DWORD *)(v3 + 20),
           *(_DWORD *)(*(_DWORD *)(v3 + 4) + 4),
           v14,
           a3) < 0 )
    {
      sub_D0048(46, 167, 6, (int)"crypto/cms/cms_pwri.c", 342);
      goto LABEL_11;
    }
    if ( a3 )
    {
      v18 = *(_DWORD *)(v4 + 20);
      v19 = sub_D8904((int)v14);
      v20 = v19 * sub_189090(v18 + 3 + v19, v19);
      v19 *= 2;
      v21 = v19 > v20;
      if ( v19 <= v20 )
        v21 = v18 > 0xFF;
      if ( v21 || (v15 = CRYPTO_malloc((void *)v20)) == 0 )
      {
LABEL_10:
        v15 = 0;
LABEL_11:
        v16 = v14;
        v17 = 0;
        sub_D7A6C(v16);
        CRYPTO_free(v15);
LABEL_12:
        X509_ALGOR_free(v9);
        return v17;
      }
      v22 = *(_DWORD *)(v4 + 20);
      v23 = *(_BYTE **)(v4 + 16);
      v24 = sub_D8904((int)v14);
      v25 = v24 * sub_189090(v22 + 3 + v24, v24);
      v24 *= 2;
      v26 = v24 > v25;
      if ( v24 <= v25 )
        v26 = v22 > 0xFF;
      if ( v26 )
        goto LABEL_11;
      *v15 = v22;
      v15[1] = ~*v23;
      v15[2] = ~v23[1];
      v15[3] = ~v23[2];
      memcpy(v15 + 4, v23, v22);
      if ( v25 > v22 + 4 && sub_F497C((int)&v15[v22 + 4], v25 - v22 - 4) <= 0 )
        goto LABEL_11;
      if ( !sub_D7C9C(v14, (int)v15, v40, v15, v25) || !sub_D7C9C(v14, (int)v15, v40, v15, v25) )
        goto LABEL_11;
      v27 = *(unsigned int **)(v3 + 12);
      v27[2] = (unsigned int)v15;
      *v27 = v25;
LABEL_29:
      v28 = v14;
      v17 = 1;
      sub_D7A6C(v28);
      goto LABEL_12;
    }
    v15 = CRYPTO_malloc(**(void ***)(v3 + 12));
    if ( !v15 )
    {
      sub_D0048(46, 167, 65, (int)"crypto/cms/cms_pwri.c", 366);
      goto LABEL_11;
    }
    v29 = *(_DWORD *)(v3 + 12);
    v30 = *(void **)v29;
    v39 = *(char **)(v29 + 8);
    v31 = sub_D8904((int)v14);
    v32 = v31;
    v38 = 2 * v31;
    if ( (unsigned int)v30 >= 2 * v31 )
    {
      sub_1892EC(v30, v31);
      if ( !v33 )
      {
        v34 = (unsigned __int8 *)CRYPTO_malloc(v30);
        v35 = v34;
        if ( v34 )
        {
          if ( sub_D7FA8(v14, (int)v30 + (_DWORD)v34 - v38, v40, (char *)v30 + (_DWORD)v39 - v38, v38) )
          {
            v36 = (signed int)v30 + v32 - v38;
            if ( sub_D7FA8(v14, (int)v35, v40, (char *)&v35[v36], v32) && sub_D7FA8(v14, (int)v35, v40, v39, v36) )
            {
              if ( sub_D8770(v14, 0, 0, 0, 0) )
              {
                if ( sub_D7FA8(v14, (int)v35, v40, (char *)v35, (signed int)v30)
                  && ((v35[6] ^ v35[3]) & (v35[2] ^ v35[5]) & (v35[4] ^ v35[1])) == 0xFF )
                {
                  v37 = *v35;
                  if ( (unsigned int)v30 >= v37 - 4 )
                  {
                    memcpy(v15, v35 + 4, *v35);
                    sub_E0758(v35, (size_t)v30, (size_t)"crypto/cms/cms_pwri.c");
                    sub_E0758(*(void **)(v4 + 16), *(_DWORD *)(v4 + 20), (size_t)"crypto/cms/cms_pwri.c");
                    *(_DWORD *)(v4 + 16) = v15;
                    *(_DWORD *)(v4 + 20) = v37;
                    goto LABEL_29;
                  }
                }
              }
            }
          }
          sub_E0758(v35, (size_t)v30, (size_t)"crypto/cms/cms_pwri.c");
        }
        else
        {
          sub_D0048(46, 180, 65, (int)"crypto/cms/cms_pwri.c", 192);
        }
      }
    }
    sub_D0048(46, 167, 180, (int)"crypto/cms/cms_pwri.c", 372);
    goto LABEL_11;
  }
  sub_D0048(46, 167, 179, (int)"crypto/cms/cms_pwri.c", 300);
  return 0;
}
