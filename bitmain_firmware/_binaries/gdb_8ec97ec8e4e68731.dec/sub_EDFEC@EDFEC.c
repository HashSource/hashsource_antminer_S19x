void __fastcall sub_EDFEC(_DWORD *a1, int a2, int a3, int *a4, _DWORD *a5, int a6)
{
  int v10; // r2
  _DWORD *v11; // r10
  int v12; // r11
  unsigned int v13; // r3
  bool v14; // cc
  const char *v15; // r10
  int v16; // r0
  unsigned __int8 *v17; // r2
  int *v18; // r1
  int v19; // r12
  __int16 *v20; // r3
  char *v21; // r4
  size_t v22; // r0
  char *v23; // r12
  int v24; // r6
  _BYTE *v25; // r3
  int v26; // r0
  int v27; // r2
  int v28; // r1
  int v29; // r2
  __int16 *v30; // r3
  int v31; // r6
  int v32; // r2
  char *v33; // r4
  size_t v34; // r0
  __int16 *v35; // r3
  int v36; // r11
  int v37; // r0
  int v38; // r3
  int v39; // r2
  int v40; // r0
  int v41; // r11
  _BOOL4 v42; // r0
  int v43; // r4
  int v44; // r6
  int v45; // r3
  _BYTE *v46; // r11
  size_t v47; // r0
  _BYTE *v48; // r3
  int v49; // r0
  int v50; // r2
  int v51; // r1
  void *v52; // r0
  int v53; // r3
  int v54; // r0
  int v55; // r0
  int v56; // r0
  int v57; // r3
  int v58; // r0
  int v59; // r0
  int v60; // r0
  int v61; // r0
  const char *v62; // [sp+Ch] [bp-98h]
  int v63; // [sp+10h] [bp-94h]
  int v64; // [sp+14h] [bp-90h]
  int v65; // [sp+1Ch] [bp-88h]
  int v66; // [sp+20h] [bp-84h]
  int v67; // [sp+24h] [bp-80h]
  int v68; // [sp+2Ch] [bp-78h] BYREF
  int v69; // [sp+30h] [bp-74h] BYREF
  int v70; // [sp+34h] [bp-70h] BYREF
  int v71; // [sp+38h] [bp-6Ch] BYREF
  void *v72; // [sp+3Ch] [bp-68h] BYREF
  int v73; // [sp+40h] [bp-64h]
  _DWORD v74[4]; // [sp+44h] [bp-60h] BYREF
  void *ptr; // [sp+54h] [bp-50h] BYREF
  int v76; // [sp+58h] [bp-4Ch]
  _BYTE v77[16]; // [sp+5Ch] [bp-48h] BYREF
  int v78; // [sp+6Ch] [bp-38h]

  if ( a3 )
  {
    ptr = v77;
    v76 = 0;
    v77[0] = 0;
    sub_33B48C(a3, &ptr);
    v76 = 0;
    *(_BYTE *)ptr = 0;
    if ( ptr != v77 )
      sub_339E64(ptr);
  }
  if ( a4 )
    *a4 = 0;
  if ( a5 )
    *a5 = 0;
  if ( a6 )
  {
    ptr = v77;
    v76 = 0;
    v77[0] = 0;
    sub_33B48C(a6, &ptr);
    v76 = 0;
    *(_BYTE *)ptr = 0;
    if ( ptr != v77 )
      sub_339E64(ptr);
  }
  sub_2665F0(&ptr);
  if ( a1 )
  {
    v10 = a1[20];
    if ( a1[19] || v10 )
    {
      v11 = a1;
    }
    else
    {
      v11 = (_DWORD *)a1[22];
      v10 = v11[20];
    }
  }
  else
  {
    v10 = MEMORY[0x50];
    v11 = 0;
  }
  v12 = v78;
  if ( v78 )
  {
    v13 = **(char **)(v11[19] + 24);
    v14 = v13 > 1;
    if ( v13 != 1 )
      v14 = (unsigned __int8)(v13 - 18) > 1u;
    v12 = !v14;
  }
  v68 = v10;
  v69 = sub_270624(v11);
  if ( a6 )
  {
    v16 = sub_26FDF0(v11);
    v15 = (const char *)((int (__fastcall *)(int))loc_26FE7C)(v16);
  }
  else
  {
    v15 = 0;
  }
  sub_ECBD8(&v68, &v69, &v70, v12);
  v17 = *(unsigned __int8 **)(v69 + 24);
  if ( (unsigned int)*v17 - 3 > 1 )
  {
    sub_ED720((int)a1, a2, (void **)a3, a4, a5, (void **)a6);
    return;
  }
  v18 = (int *)".";
  if ( v70 )
    v18 = &dword_364FCC;
  v62 = (const char *)v18;
  v19 = *((_WORD *)v17 + 1) & 0x380;
  if ( a1 && !a1[19] && !a1[20] )
  {
    if ( v19 == 128 )
      v35 = (__int16 *)*((_DWORD *)v17 + 7);
    else
      v35 = &word_3B4A2C;
    v36 = *v35;
    v71 = 0;
    v64 = sub_173244(v69, &v71);
    v37 = sub_33CAA0((int)a1, "private");
    v38 = v36;
    v39 = v64;
    if ( v37 )
    {
      v56 = sub_33CAA0((int)a1, "protected");
      v39 = v64;
      if ( v56 )
        v57 = 2;
      else
        v57 = 1;
      v67 = v57;
      v38 = v36;
    }
    else
    {
      v67 = 0;
    }
    v40 = *(_DWORD *)(v69 + 24);
    v66 = v40;
    v65 = *(_DWORD *)(v40 + 24);
    if ( a2 >= 0 )
    {
      v41 = *(_DWORD *)(v40 + 24) + 24 * v36;
      v63 = *(_WORD *)(v40 + 2) & 0x380;
      while ( 1 )
      {
        v42 = v39 == v38 && v71 == v69;
        if ( v42 || (*(_BYTE *)(v41 + 8) & 1) != 0 )
          goto LABEL_82;
        if ( v67 )
        {
          if ( v67 == 1 )
          {
            if ( v63 != 128 )
              goto LABEL_82;
            v58 = *(_DWORD *)(v66 + 28);
            if ( (__int16 *)v58 == &word_3B4A2C )
              goto LABEL_82;
            v55 = *(_DWORD *)(v58 + 24);
            if ( !v55 )
              goto LABEL_82;
            goto LABEL_81;
          }
          if ( v63 != 128 )
            goto LABEL_97;
          v59 = *(_DWORD *)(v66 + 28);
          if ( (__int16 *)v59 == &word_3B4A2C )
            goto LABEL_97;
          v60 = *(_DWORD *)(v59 + 20);
          if ( !v60 || (((int)*(unsigned __int8 *)(v60 + (v38 >> 3)) >> (v38 & 7)) & 1) == 0 )
          {
            v61 = *(_DWORD *)(*(_DWORD *)(v66 + 28) + 24);
            if ( !v61 || (((int)*(unsigned __int8 *)(v61 + (v38 >> 3)) >> (v38 & 7)) & 1) == 0 )
              goto LABEL_97;
          }
LABEL_82:
          ++v38;
          v41 += 24;
        }
        else
        {
          if ( v63 != 128 )
            goto LABEL_82;
          v54 = *(_DWORD *)(v66 + 28);
          if ( (__int16 *)v54 == &word_3B4A2C )
            goto LABEL_82;
          v55 = *(_DWORD *)(v54 + 20);
          if ( !v55 )
            goto LABEL_82;
LABEL_81:
          if ( (((int)*(unsigned __int8 *)(v55 + (v38 >> 3)) >> (v38 & 7)) & 1) == 0 )
            goto LABEL_82;
LABEL_97:
          --a2;
          ++v38;
          v41 += 24;
          if ( a2 == -1 )
            break;
        }
      }
    }
    v43 = v38 - 1;
    v44 = 24 * (v38 - 1);
    v45 = v65 + v44;
    v46 = *(_BYTE **)(v65 + v44 + 16);
    if ( !v46 || !*v46 )
    {
      if ( a3 )
      {
        v53 = **(char **)(*(_DWORD *)(v45 + 12) + 24);
        if ( v53 == 3 )
        {
          sub_33BC54(a3, 0, *(_DWORD *)(a3 + 4), "<anonymous struct>", 0x12u);
        }
        else if ( v53 == 4 )
        {
          sub_33BC54(a3, 0, *(_DWORD *)(a3 + 4), "<anonymous union>", 0x11u);
        }
      }
      if ( !a6 )
        goto LABEL_109;
      v72 = v74;
      v73 = 0;
      LOBYTE(v74[0]) = 0;
      sub_33B48C(a6, &v72);
      v73 = 0;
      *(_BYTE *)v72 = 0;
      v52 = v72;
      if ( v72 == v74 )
        goto LABEL_109;
LABEL_108:
      sub_339E64(v52);
LABEL_109:
      if ( a4 && v68 )
        *a4 = sub_ECFC8(v68, v43);
      if ( a5 )
        *a5 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v69 + 24) + 24) + v44 + 12);
      return;
    }
    if ( a3 )
    {
      v47 = strlen(*(const char **)(v45 + 16));
      sub_33BC54(a3, 0, *(_DWORD *)(a3 + 4), v46, v47);
    }
    if ( !a6 )
      goto LABEL_109;
    sub_931D8((char **)&v72, "((%s)%s%s)", v15, v62, v46);
    v48 = *(_BYTE **)a6;
    if ( v72 == v74 )
    {
      sub_33B48C(a6, &v72);
      v48 = v72;
    }
    else
    {
      v49 = v73;
      v50 = v74[0];
      if ( v48 == (_BYTE *)(a6 + 8) )
      {
        *(_DWORD *)a6 = v72;
        *(_DWORD *)(a6 + 4) = v49;
        *(_DWORD *)(a6 + 8) = v50;
      }
      else
      {
        *(_DWORD *)a6 = v72;
        *(_DWORD *)(a6 + 4) = v49;
        v51 = *(_DWORD *)(a6 + 8);
        *(_DWORD *)(a6 + 8) = v50;
        if ( v48 )
        {
          v72 = v48;
          v74[0] = v51;
          goto LABEL_107;
        }
      }
      v72 = v74;
      v48 = v74;
    }
LABEL_107:
    v73 = 0;
    *v48 = 0;
    v52 = v72;
    if ( v72 == v74 )
      goto LABEL_109;
    goto LABEL_108;
  }
  if ( v19 == 128 )
    v20 = (__int16 *)*((_DWORD *)v17 + 7);
  else
    v20 = &word_3B4A2C;
  if ( *v20 <= a2 )
  {
    sub_ED0D8(v69, &v72);
    v29 = *(_DWORD *)(v69 + 24);
    if ( (*(_WORD *)(v29 + 2) & 0x380) == 0x80 )
      v30 = *(__int16 **)(v29 + 28);
    else
      v30 = &word_3B4A2C;
    v31 = a2 - *v30;
    switch ( v31 )
    {
      case 1:
        v32 = v73;
        if ( (int)v72 > 0 )
        {
LABEL_66:
          v33 = "protected";
          if ( v32 > 0 )
            v33 = "private";
          goto LABEL_68;
        }
        if ( v73 <= 0 )
          goto LABEL_61;
        break;
      case 2:
        break;
      case 0:
LABEL_62:
        if ( (int)v72 <= 0 )
        {
          v32 = v73;
          goto LABEL_66;
        }
        v33 = "public";
LABEL_68:
        if ( a3 )
        {
          v34 = strlen(v33);
          sub_33BC54(a3, 0, *(_DWORD *)(a3 + 4), v33, v34);
        }
        return;
      default:
LABEL_61:
        sub_94700(
          (int)"c-varobj.c",
          887,
          "%s: Assertion `%s' failed.",
          "void cplus_describe_child(const varobj*, int, std::__cxx11::string*, value**, type**, std::__cxx11::string*)",
          "access");
        goto LABEL_62;
    }
    v33 = "protected";
    goto LABEL_68;
  }
  if ( a3 )
  {
    v21 = *(char **)(*((_DWORD *)v17 + 6) + 24 * a2 + 16);
    v22 = strlen(v21);
    sub_33BC54(a3, 0, *(_DWORD *)(a3 + 4), v21, v22);
  }
  if ( a4 && v68 )
    *a4 = sub_2647C8(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v69 + 24) + 24) + 24 * a2 + 12), v68);
  if ( a5 )
    *a5 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v69 + 24) + 24) + 24 * a2 + 12);
  if ( a6 )
  {
    v23 = "*";
    v24 = 3 * a2;
    if ( !v70 )
      v23 = "";
    sub_931D8(
      (char **)&v72,
      "(%s(class %s%s) %s)",
      v23,
      *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v69 + 24) + 24) + 8 * v24 + 16),
      v23,
      v15);
    v25 = *(_BYTE **)a6;
    if ( v72 == v74 )
    {
      sub_33B48C(a6, &v72);
      v25 = v72;
    }
    else
    {
      v26 = v73;
      v27 = v74[0];
      if ( v25 == (_BYTE *)(a6 + 8) )
      {
        *(_DWORD *)a6 = v72;
        *(_DWORD *)(a6 + 4) = v26;
        *(_DWORD *)(a6 + 8) = v27;
      }
      else
      {
        *(_DWORD *)a6 = v72;
        *(_DWORD *)(a6 + 4) = v26;
        v28 = *(_DWORD *)(a6 + 8);
        *(_DWORD *)(a6 + 8) = v27;
        if ( v25 )
        {
          v72 = v25;
          v74[0] = v28;
          goto LABEL_46;
        }
      }
      v72 = v74;
      v25 = v74;
    }
LABEL_46:
    v73 = 0;
    *v25 = 0;
    if ( v72 != v74 )
      sub_339E64(v72);
  }
}
