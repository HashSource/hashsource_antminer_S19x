int __fastcall sub_16B3C0(int *a1, int a2, int a3)
{
  char *v4; // r11
  int v5; // r4
  int v6; // r4
  int v8; // r3
  int *v9; // r2
  void *v10; // r11
  int *v11; // r10
  void *v12; // r0
  int v13; // r4
  int v14; // r6
  int *v15; // r9
  void (__fastcall *v16)(int *); // r3
  int v17; // r5
  int v18; // t1
  int v19; // r0
  int v20; // r3
  void *v21; // r6
  int v22; // r1
  int v23; // r2
  char *v24; // r0
  bool v25; // cc
  int v26; // r3
  int *v27; // r3
  int v28; // r0
  int v29; // r3
  _DWORD *v30; // r0
  int v31; // r0
  int *v32; // r3
  void *v33; // r10
  int v34; // r4
  int *v35; // r3
  int v36; // r5
  int v37; // r8
  char v38; // r9
  bool v39; // cc
  int v40; // r0
  int v41; // r5
  int *v42; // r0
  bool v43; // zf
  int v44; // r2
  int v45; // r3
  int *v46; // r0
  unsigned int v47; // r0
  unsigned __int8 *v48; // r6
  unsigned __int8 *v49; // r5
  unsigned int v50; // r0
  unsigned __int8 *v51; // r6
  const char *v52; // r4
  const char *v53; // r0
  size_t v54; // r6
  int v55; // r4
  const char *v56; // r8
  void *v57; // r4
  unsigned __int8 *v58; // r0
  unsigned __int8 *v59; // r6
  int v60; // r4
  int v61; // r3
  bool v62; // zf
  int v63; // r3
  int v64; // [sp+14h] [bp-168h]
  char *v65; // [sp+18h] [bp-164h]
  char *v66; // [sp+1Ch] [bp-160h]
  int v67; // [sp+20h] [bp-15Ch]
  _DWORD *v68; // [sp+28h] [bp-154h]
  char *v69; // [sp+2Ch] [bp-150h]
  char *v72; // [sp+38h] [bp-144h]
  int *v73; // [sp+3Ch] [bp-140h]
  char *v75; // [sp+58h] [bp-124h] BYREF
  char *v76; // [sp+5Ch] [bp-120h] BYREF
  char *v77; // [sp+60h] [bp-11Ch] BYREF
  int v78; // [sp+64h] [bp-118h] BYREF
  int v79; // [sp+68h] [bp-114h] BYREF
  char s[4]; // [sp+6Ch] [bp-110h] BYREF
  int v81; // [sp+70h] [bp-10Ch]
  const char *v82; // [sp+74h] [bp-108h]
  char v83[260]; // [sp+78h] [bp-104h] BYREF

  a1[1] = 0;
  sub_D00F0();
  if ( *a1 == 2 )
  {
LABEL_83:
    v36 = a1[9];
    if ( !v36 )
    {
LABEL_100:
      if ( !a1[4] )
      {
        sub_D0048(44, 119, 2, (int)"crypto/store/loader_file.c", 1300);
        v46 = _errno_location();
        *v46 = a1[10];
        ++a1[1];
        if ( sub_EA12C(*v46, v83, 0x100u) )
          sub_D1240(1, v83);
      }
      return 0;
    }
    while ( 1 )
    {
      if ( *(_BYTE *)v36 != 46 )
      {
        if ( !*((_BYTE *)a1 + 24) )
          goto LABEL_115;
        v37 = a1[11];
        v38 = v37;
        if ( v37 )
          v38 = 1;
        v39 = v37 != 0;
        if ( v37 )
          v39 = (unsigned int)(v37 - 4) > 1;
        if ( !v39 && !strncasecmp((const char *)v36, (const char *)a1 + 24, 8u) && *(_BYTE *)(v36 + 8) == 46 )
        {
          v47 = *(unsigned __int8 *)(v36 + 9);
          v48 = (unsigned __int8 *)(v36 + 9);
          if ( v47 == 114 )
          {
            if ( v37 == 5 )
              v63 = 0;
            else
              v63 = v38 & 1;
            v48 = (unsigned __int8 *)(v36 + 10);
            if ( v63 )
              goto LABEL_92;
            v47 = *(unsigned __int8 *)(v36 + 10);
          }
          else if ( v37 == 5 )
          {
            goto LABEL_92;
          }
          if ( sub_BDB10(v47, 4) )
          {
            v49 = v48;
            do
            {
              v50 = *v49;
              v51 = v49++;
            }
            while ( sub_BDB10(v50, 4) );
            if ( !*v51 )
            {
              v36 = a1[9];
LABEL_115:
              v52 = (const char *)a1[5];
              v53 = v52;
              if ( *v52 )
              {
                v54 = strlen(v52);
                if ( v52[v54 - 1] == 47 )
                {
                  v55 = 0;
                  v56 = &byte_1A4198;
                }
                else
                {
                  v55 = 1;
                  v56 = "/";
                }
              }
              else
              {
                v55 = 1;
                v54 = strlen(v53);
                v56 = "/";
              }
              v57 = (void *)(v55 + v54 + 1 + strlen((const char *)v36));
              v58 = (unsigned __int8 *)sub_E0740(v57);
              v59 = v58;
              if ( v58 )
              {
                sub_E9F6C(v58, (const char *)a1[5], (unsigned int)v57);
                sub_E9F6C(v59, v56, (unsigned int)v57);
                sub_E9F6C(v59, (const char *)v36, (unsigned int)v57);
                v60 = sub_E9D40((DIR ***)a1 + 3, (const char *)a1[5]);
                a1[9] = v60;
                v61 = *_errno_location();
                v62 = v61 == 0;
                if ( !v61 )
                  v62 = v60 == 0;
                a1[10] = v61;
                if ( v62 )
                  a1[4] = 1;
                v6 = sub_16BEE4(v59);
                if ( v6 )
                {
                  return v6;
                }
                else
                {
                  CRYPTO_free(v59);
                  sub_D0048(44, 119, 44, (int)"crypto/store/loader_file.c", 1329);
                  return 0;
                }
              }
              else
              {
                sub_D0048(44, 126, 65, (int)"crypto/store/loader_file.c", 1209);
                return 0;
              }
            }
          }
        }
      }
LABEL_92:
      v40 = sub_E9D40((DIR ***)a1 + 3, (const char *)a1[5]);
      a1[9] = v40;
      v41 = v40;
      v42 = _errno_location();
      v43 = *v42 == 0;
      if ( !*v42 )
        v43 = v41 == 0;
      a1[10] = *v42;
      if ( v43 )
      {
        v44 = *a1;
        v45 = 1;
        a1[4] = 1;
        if ( v44 != 2 )
          goto LABEL_97;
      }
      else
      {
        v45 = a1[4];
        if ( *a1 != 2 )
        {
          if ( v45 )
          {
LABEL_97:
            if ( !(*(int (__fastcall **)(int))(v45 + 8))(a1[5]) )
              goto LABEL_83;
          }
          if ( sub_B6ECC(a1[3], 2, 0, 0) )
            return 0;
          goto LABEL_99;
        }
      }
      if ( v45 )
        return 0;
LABEL_99:
      v36 = a1[9];
      if ( !v36 )
        goto LABEL_100;
    }
  }
  v4 = v83;
  while ( 2 )
  {
    *(_DWORD *)v4 = 0;
    v5 = a1[4];
    if ( v5 )
    {
      v6 = (*(int (__fastcall **)(_DWORD, _DWORD, _DWORD, _DWORD, int *, char *, int, int))(v5 + 4))(
             0,
             0,
             0,
             0,
             a1 + 5,
             v4,
             a2,
             a3);
      if ( v6 )
        return v6;
      (*(void (__fastcall **)(int *))(a1[4] + 12))(a1 + 5);
      a1[5] = 0;
      a1[4] = 0;
    }
    v8 = *a1;
    if ( *a1 != 2 )
    {
      if ( sub_B6ECC(a1[3], 2, 0, 0) )
        return 0;
      v8 = *a1;
    }
    v9 = (int *)v4;
    v10 = 0;
    v11 = v9;
    while ( 2 )
    {
      v75 = 0;
      v76 = 0;
      v77 = 0;
      v78 = 0;
      if ( v8 == 1 )
      {
        v30 = (_DWORD *)a1[3];
        if ( (a1[2] & 1) != 0 )
          v31 = sub_EE0F8(v30, &v75, (void **)&v76, (int *)&v77, &v78, 3);
        else
          v31 = sub_EE7A4(v30, &v75, (void **)&v76, (int *)&v77, &v78);
        if ( v31 <= 0 )
        {
LABEL_63:
          v14 = -1;
          v24 = v75;
          ++a1[1];
          if ( (a1[2] & 1) == 0 )
            goto LABEL_45;
          goto LABEL_64;
        }
        v69 = v76;
        if ( strlen(v76) <= 0xA )
          goto LABEL_16;
        if ( !sub_ED848((unsigned __int8 *)v76, v11) )
          goto LABEL_63;
        *(_DWORD *)s = a2;
        v82 = "PEM";
        v81 = a3;
        if ( !sub_ED6F8((_DWORD **)v11, v77, &v78, (int (__fastcall *)(_BYTE *, int, _DWORD, char *))sub_16BB08, s) )
          goto LABEL_63;
      }
      else
      {
        *v11 = 0;
        if ( sub_125B60(a1[3], (unsigned int **)v11) < 0 )
          goto LABEL_63;
        v12 = (void *)*v11;
        v13 = *(_DWORD *)*v11;
        v77 = *(char **)(*v11 + 4);
        v78 = v13;
        CRYPTO_free(v12);
      }
      v69 = v76;
LABEL_16:
      v14 = -1;
      v65 = v75;
      v72 = 0;
      v73 = 0;
      v66 = v77;
      v67 = v78;
      while ( 1 )
      {
        v79 = 0;
        v68 = sub_E0740((void *)0x1C);
        if ( !v68 )
          break;
        v10 = 0;
        v64 = 0;
        v15 = (int *)&off_212114;
        do
        {
          while ( 1 )
          {
            v18 = *v15++;
            v17 = v18;
            *v11 = 0;
            *(_DWORD *)s = 0;
            v19 = (*(int (__fastcall **)(char *, char *, char *, int, int *, char *, int, int))(v18 + 4))(
                    v65,
                    v69,
                    v66,
                    v67,
                    v11,
                    s,
                    a2,
                    a3);
            v20 = *(_DWORD *)s;
            v21 = (void *)v19;
            if ( *(int *)s > 0 )
              break;
LABEL_22:
            if ( &unk_212130 == (_UNKNOWN *)v15 )
              goto LABEL_30;
          }
          v22 = v64;
          v68[v64] = v17;
          if ( v79 )
          {
            (*(void (__fastcall **)(int *))(v17 + 12))(&v79);
            v20 = *(_DWORD *)s;
            v22 = v64;
          }
          v64 = v22 + v20;
          v79 = *v11;
          if ( v22 + v20 > 1 )
          {
            OSSL_STORE_INFO_free(v10);
            v10 = 0;
            OSSL_STORE_INFO_free(v21);
            v16 = *(void (__fastcall **)(int *))(v17 + 12);
            if ( v16 )
              v16(&v79);
            v79 = 0;
            goto LABEL_22;
          }
          if ( !v10 )
            v10 = v21;
        }
        while ( &unk_212130 != (_UNKNOWN *)v15 );
LABEL_30:
        v14 = v64;
        if ( v64 == 1 && *(_DWORD *)(*v68 + 16) )
        {
          v23 = v79;
          a1[4] = *v68;
          a1[5] = v23;
        }
        CRYPTO_free(v68);
        CRYPTO_free(v72);
        sub_BAE3C((int)v73);
        if ( !v10 )
          goto LABEL_37;
        if ( sub_16C05C(v10) != -1 )
        {
          sub_D00F0();
          v24 = v75;
          v27 = a1;
          goto LABEL_44;
        }
        v65 = (char *)sub_16C598(v10);
        v73 = (int *)sub_16C58C(v10);
        v72 = v65;
        v66 = (char *)v73[1];
        v67 = *v73;
        CRYPTO_free(v10);
      }
      sub_D0048(44, 124, 65, (int)"crypto/store/loader_file.c", 1039);
      CRYPTO_free(v72);
      sub_BAE3C((int)v73);
LABEL_37:
      v24 = v75;
      v25 = (int)v75 <= 0;
      if ( v75 )
        v25 = v14 <= 1;
      v26 = v25;
      if ( !v25 )
      {
        v10 = (void *)v26;
        v27 = a1;
        ++a1[1];
        goto LABEL_44;
      }
      if ( v14 > 1 )
      {
        sub_D0048(44, 119, 107, (int)"crypto/store/loader_file.c", 1382);
        v24 = v75;
      }
      else
      {
        if ( v14 != 1 )
        {
          v10 = 0;
          v27 = a1;
          goto LABEL_44;
        }
        if ( sub_D0760() )
        {
          v24 = v75;
        }
        else
        {
          sub_D0048(44, 119, 110, (int)"crypto/store/loader_file.c", 1390);
          v24 = v75;
          if ( v75 )
          {
            sub_D1240(3, "PEM type is '", v75, "'");
            v24 = v75;
          }
        }
      }
      v10 = 0;
      ++a1[1];
      v27 = a1;
LABEL_44:
      if ( (v27[2] & 1) == 0 )
      {
LABEL_45:
        CRYPTO_free(v24);
        goto LABEL_46;
      }
LABEL_64:
      ((void (*)(void))loc_E18E0)();
LABEL_46:
      if ( (a1[2] & 1) != 0 )
        ((void (__fastcall *)(char *, _DWORD, const char *, int))loc_E18E0)(v76, 0, "crypto/store/loader_file.c", 1132);
      else
        CRYPTO_free(v76);
      if ( (a1[2] & 1) != 0 )
      {
        ((void (__fastcall *)(char *, int, const char *, int))loc_E18E0)(v77, v78, "crypto/store/loader_file.c", 1132);
        if ( v14 )
          goto LABEL_68;
LABEL_50:
        if ( *a1 == 2 )
        {
          v28 = a1[4];
        }
        else
        {
          v29 = a1[4];
          if ( v29 && !(*(int (__fastcall **)(int))(v29 + 8))(a1[5]) )
          {
LABEL_56:
            if ( a1[1] <= 0 )
            {
              v8 = *a1;
              continue;
            }
LABEL_76:
            v35 = v11;
            v33 = v10;
            v4 = (char *)v35;
            if ( v33 )
              goto LABEL_70;
            return 0;
          }
          v28 = sub_B6ECC(a1[3], 2, 0, 0);
        }
        if ( v28 )
          goto LABEL_76;
        goto LABEL_56;
      }
      break;
    }
    CRYPTO_free(v77);
    if ( !v14 )
      goto LABEL_50;
LABEL_68:
    v32 = v11;
    v33 = v10;
    v4 = (char *)v32;
    if ( v14 > 1 || !v33 )
      return 0;
LABEL_70:
    v34 = a1[11];
    if ( v34 && v34 != sub_16C05C(v33) )
    {
      OSSL_STORE_INFO_free(v33);
      continue;
    }
    return (int)v33;
  }
}
