int __fastcall sub_90AB4(
        _DWORD *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        char *s2,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18)
{
  int v18; // r2
  int (__fastcall *v21)(_DWORD *, int, char **, size_t *, _DWORD **); // r9
  int v22; // r1
  _DWORD *v23; // r0
  int v25; // r0
  int (__fastcall *v26)(_DWORD *, _DWORD, char *, int, _BYTE *, int); // r9
  unsigned int v27; // r0
  size_t v28; // r9
  _DWORD *v29; // r3
  int v30; // r6
  _DWORD *v31; // r7
  int v32; // r3
  const char *v33; // r1
  const char *v34; // r0
  unsigned __int8 *v35; // r5
  int v36; // r3
  int v37; // r6
  unsigned int v38; // r2
  unsigned __int8 *v39; // r0
  unsigned int v40; // r3
  int v41; // r3
  int v42; // r2
  int v43; // r10
  _BOOL4 v44; // r0
  __int16 v45; // [sp+14h] [bp-8h] BYREF
  char *v46; // [sp+18h] [bp-4h] BYREF
  size_t v47; // [sp+1Ch] [bp+0h] BYREF
  _DWORD *v48; // [sp+20h] [bp+4h] BYREF
  char s[132]; // [sp+24h] [bp+8h] BYREF
  _BYTE v50[260]; // [sp+A8h] [bp+8Ch] BYREF

  v18 = a1[275];
  v46 = 0;
  v47 = 0;
  v48 = 0;
  if ( v18 == 1 )
  {
    v25 = sub_86508((int)a1);
    v21 = (int (__fastcall *)(_DWORD *, int, char **, size_t *, _DWORD **))a1[307];
    v22 = v25;
    if ( !v21 )
      goto LABEL_9;
  }
  else
  {
    v21 = (int (__fastcall *)(_DWORD *, int, char **, size_t *, _DWORD **))a1[307];
    v22 = 0;
    if ( !v21 )
      goto LABEL_9;
  }
  if ( !v21(a1, v22, &v46, &v47, &v48) )
  {
    v23 = v48;
    goto LABEL_6;
  }
  v23 = v48;
  if ( v48 )
  {
    if ( *v48 != 772 )
    {
LABEL_6:
      sub_8D6A4((int)v23);
      sub_95494(a1, 80, 530, 219, "ssl/statem/extensions_clnt.c", 769);
      return 0;
    }
    goto LABEL_12;
  }
LABEL_9:
  v26 = (int (__fastcall *)(_DWORD *, _DWORD, char *, int, _BYTE *, int))a1[304];
  if ( v26 )
  {
    memset(s, 0, 0x81u);
    v27 = v26(a1, 0, s, 128, v50, 256);
    v28 = v27;
    if ( v27 > 0x100 )
    {
      sub_95494(a1, 40, 530, 68, "ssl/statem/extensions_clnt.c", 784);
      return 0;
    }
    if ( v27 )
    {
      v45 = 275;
      v47 = strlen(s);
      if ( v47 > 0x80 )
      {
        v41 = 794;
LABEL_30:
        sub_95494(a1, 80, 530, 68, "ssl/statem/extensions_clnt.c", v41);
        return 0;
      }
      v46 = s;
      v43 = sub_87388((int)a1, (int)&v45);
      if ( !v43 )
      {
        v41 = 807;
        goto LABEL_30;
      }
      v44 = sub_8D45C();
      v48 = (_DWORD *)v44;
      if ( !v44 || !sub_8AC6C(v44, v50, v28) || !sub_8E1E0((int)v48, v43) || !sub_8E1D0(v48, 772) )
      {
        sub_95494(a1, 80, 530, 68, "ssl/statem/extensions_clnt.c", 818);
        sub_E07F8((int)v50, v28);
        return 0;
      }
      sub_E07F8((int)v50, v28);
    }
  }
LABEL_12:
  sub_8D6A4(a1[286]);
  v29 = v48;
  a1[286] = v48;
  if ( v29 )
  {
    CRYPTO_free(a1[287], "ssl/statem/extensions_clnt.c", 830);
    v30 = sub_E9E68(v46, v47, "ssl/statem/extensions_clnt.c", 831);
    a1[287] = v30;
    if ( !v30 )
    {
      a1[288] = 0;
      sub_95494(a1, 80, 530, 68, "ssl/statem/extensions_clnt.c", 835);
      return 0;
    }
    a1[288] = v47;
  }
  if ( a1[26] != 2 || (v31 = (_DWORD *)a1[285], (v32 = v31[120]) == 0) && ((v31 = v48) == 0 || (v32 = v48[120]) == 0) )
  {
    a1[980] = 0;
    return 2;
  }
  v33 = (const char *)v31[115];
  a1[980] = v32;
  if ( v33 )
  {
    v34 = (const char *)a1[334];
    if ( !v34 || strcmp(v34, v33) )
    {
      sub_95494(a1, 80, 530, 231, "ssl/statem/extensions_clnt.c", 856);
      return 0;
    }
  }
  v35 = (unsigned __int8 *)a1[357];
  v36 = v31[121];
  if ( v35 )
  {
    if ( v36 )
    {
      v37 = a1[358];
      if ( v37 >= 0 )
      {
        while ( 1 )
        {
          v38 = v37 - 1;
          if ( !v37 )
            break;
          v39 = v35 + 1;
          v40 = *v35;
          v35 += v40 + 1;
          v37 = v38 - v40;
          if ( v40 > v38 )
            break;
          v42 = v31[122];
          if ( v42 == v40 && !sub_BC33C(v39, v31[121], v42) )
            goto LABEL_36;
        }
        sub_95494(a1, 80, 530, 222, "ssl/statem/extensions_clnt.c", 890);
        return 0;
      }
      v41 = 877;
      goto LABEL_30;
    }
  }
  else if ( v36 )
  {
    sub_95494(a1, 80, 530, 222, "ssl/statem/extensions_clnt.c", 863);
    return 0;
  }
LABEL_36:
  if ( !sub_A8450(a2, v33, 42, 0, 2) || !sub_A8398(a2, 2) || !sub_A7EDC(a2) )
  {
    v41 = 899;
    goto LABEL_30;
  }
  a1[363] = 1;
  a1[364] = 1;
  return 1;
}
