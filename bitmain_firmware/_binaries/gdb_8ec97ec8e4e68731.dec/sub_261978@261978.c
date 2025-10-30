int __fastcall sub_261978(char *a1, int *a2, int *a3, int a4, __int64 a5, _DWORD *a6, _DWORD *a7)
{
  int v7; // r0
  int v8; // r2
  int v9; // r3
  __int16 *v10; // r9
  char *v11; // r4
  int v12; // r2
  __int16 *v13; // r3
  int v14; // r3
  int v15; // r11
  _BOOL4 v16; // r3
  int result; // r0
  __int16 *v19; // r3
  int v20; // r2
  int v21; // r3
  int v22; // r2
  int v23; // r3
  int v24; // r7
  int v25; // r5
  int *v26; // r10
  int v27; // r0
  int *v28; // r4
  int v29; // r6
  int v30; // r8
  _DWORD *v31; // r0
  int v32; // r0
  char *v33; // r2
  int v34; // r9
  unsigned int v35; // r1
  unsigned int v36; // r3
  bool v37; // cc
  int v38; // r0
  unsigned int v39; // r1
  bool v40; // cc
  int v41; // r0
  char *v42; // r2
  int v43; // r1
  int v44; // r8
  int v45; // t1
  int v47; // r3
  int v48; // r0
  int v49; // r3
  unsigned int v50; // r1
  bool v51; // cc
  int v52; // r0
  unsigned int v53; // r3
  int v54; // r8
  int v55; // r10
  int v56; // r4
  size_t v57; // r0
  void *v58; // r5
  unsigned int v59; // r6
  __int64 v60; // r0
  int v61; // r4
  int v62; // r1
  int v63; // r7
  __int64 v64; // kr18_8
  int v65; // r0
  int v66; // r3
  __int64 v67; // r2
  _DWORD *v68; // r0
  _DWORD *v69; // r3
  int v70; // r2
  int v71; // r2
  unsigned int v72; // r1
  int v73; // r12
  int v74; // r11
  int v75; // [sp+14h] [bp-78h]
  int v76; // [sp+18h] [bp-74h]
  _DWORD *v77; // [sp+1Ch] [bp-70h]
  int v78; // [sp+20h] [bp-6Ch]
  int v79; // [sp+24h] [bp-68h]
  int v80; // [sp+28h] [bp-64h]
  _BYTE v84[68]; // [sp+48h] [bp-44h] BYREF

  v7 = sub_171258(a7);
  v8 = *(_DWORD *)(v7 + 24);
  v77 = (_DWORD *)v7;
  v9 = *(_WORD *)(v8 + 2) & 0x380;
  if ( v9 != 128 )
  {
    v10 = &word_3B4A2C;
    v74 = 0;
LABEL_85:
    v54 = *v10 - 1;
    if ( v54 >= 0 )
    {
      v55 = 24 * v54;
      while ( 1 )
      {
        v69 = (_DWORD *)(*(_DWORD *)(v8 + 24) + v55);
        v68 = (_DWORD *)v69[3];
        if ( (*(_WORD *)(v8 + 2) & 0x380) == 0x80
          && (v70 = *(_DWORD *)(v8 + 28), (__int16 *)v70 != &word_3B4A2C)
          && (v71 = *(_DWORD *)(v70 + 16)) != 0
          && (((int)*(unsigned __int8 *)(v71 + (v54 >> 3)) >> (v54 & 7)) & 1) != 0 )
        {
          v56 = sub_171258(v68);
          if ( a5 >= 0 && a5 < (unsigned int)v77[5] )
          {
            v64 = a5;
            v61 = *a2;
            v63 = sub_26E718(*a2, HIDWORD(a5));
          }
          else
          {
            v57 = *(_DWORD *)(v56 + 20);
            if ( v57 )
              v58 = sub_9836C(v57);
            else
              v58 = 0;
            v59 = ((int (__fastcall *)(int))loc_26C09C)(*a2) + a5;
            if ( sub_230020(v59, (int)v58, *(_DWORD *)(v56 + 20)) )
              goto LABEL_114;
            v61 = sub_26DD30(v56, v58, v59);
            v63 = sub_26E718(v61, v62);
            if ( v58 )
              sub_339E64(v58);
            v64 = 0;
          }
          v65 = ((int (__fastcall *)(int))loc_26C09C)(v61);
          v67 = sub_FC59C((int)v77, v54, v63, v66, v64, SHIDWORD(v64), v65, v61);
          v68 = *(_DWORD **)(*(_DWORD *)(v77[6] + 24) + v55 + 12);
        }
        else
        {
          v72 = ((((int)v69[1] >> 31) & 7u) + *v69) >> 3;
          v73 = (*(_QWORD *)v69 + (unsigned __int64)(((int)v69[1] >> 31) & 7)) >> 32;
          HIDWORD(v67) = (unsigned __int64)(*(_QWORD *)v69 / 8LL) >> 32;
          LODWORD(v67) = v72 | (v73 << 29);
        }
        result = sub_261978(
                   a1,
                   a2,
                   a3,
                   (unsigned __int64)(v67 + a5) >> 32,
                   v67 + a5,
                   (unsigned __int64)(v67 + a5) >> 32,
                   a6,
                   v68);
        if ( result == -1 )
        {
          --v54;
          v74 = 1;
          v55 -= 24;
          if ( v54 == -1 )
            break;
        }
        else
        {
          if ( result )
            return result;
          --v54;
          v55 -= 24;
          if ( v54 == -1 )
            break;
        }
        v8 = v77[6];
      }
    }
    if ( v74 )
      return -1;
    else
      return 0;
  }
  v79 = *(__int16 *)(*(_DWORD *)(v8 + 28) + 4) - 1;
  if ( v79 < 0 )
  {
    v74 = 0;
LABEL_80:
    v10 = *(__int16 **)(v8 + 28);
    goto LABEL_85;
  }
  v74 = 0;
  v76 = 12 * v79;
  while ( 1 )
  {
    if ( v9 == 128 )
      v19 = *(__int16 **)(v8 + 28);
    else
      v19 = &word_3B4A2C;
    v11 = *(char **)(*((_DWORD *)v19 + 8) + v76);
    if ( (!strncmp(v11, (const char *)&dword_3C439C, 2u) || !strncmp(v11, "op", 2u) || !strncmp(v11, "type", 4u))
      && (sub_3102B0(v11, v84, 2) || sub_3102B0(v11, v84, 0)) )
    {
      v11 = v84;
    }
    if ( sub_25BD2C(v11, a1) )
      goto LABEL_18;
    v12 = v77[6];
    if ( (*(_WORD *)(v12 + 2) & 0x380) == 0x80 )
      v13 = *(__int16 **)(v12 + 28);
    else
      v13 = &word_3B4A2C;
    v14 = *((_DWORD *)v13 + 8) + v76;
    v15 = *(_DWORD *)(v14 + 4) - 1;
    v78 = *(_DWORD *)(v14 + 8);
    sub_172A40(v77, v79);
    v16 = a3 == 0;
    if ( v15 > 0 && a3 == 0 )
      sub_946E0("cannot resolve overloaded method `%s': no arguments supplied", a1);
    if ( v15 )
      v16 = 0;
    if ( v16 )
    {
      result = sub_26D410(a2, v78, 0, v77, a5, HIDWORD(a5));
      if ( result )
        return result;
      goto LABEL_17;
    }
    if ( v15 >= 0 )
      break;
LABEL_17:
    v74 = 1;
LABEL_18:
    --v79;
    v8 = v77[6];
    v76 -= 12;
    v9 = *(_WORD *)(v8 + 2) & 0x380;
    if ( v79 == -1 )
    {
      if ( v9 != 128 )
      {
        v10 = &word_3B4A2C;
        goto LABEL_85;
      }
      goto LABEL_80;
    }
  }
  v20 = v78 + 16 * v15;
  v21 = *(_DWORD *)(v20 + 4);
  v75 = v20;
  v22 = *(unsigned __int16 *)(v20 + 14);
  v23 = *(_DWORD *)(v21 + 24);
  v24 = *(__int16 *)(v23 + 4);
  v25 = *(_DWORD *)(v23 + 24);
  v80 = *(unsigned __int8 *)(v23 + 1) >> 7;
  if ( !a3 )
  {
    v60 = sub_94700((int)"valops.c", 1713, "typecmp: no argument list");
LABEL_114:
    sub_946E0("virtual baseclass botch", HIDWORD(v60));
  }
  while ( 2 )
  {
    if ( v22 == 1 )
      v26 = a3 + 1;
    else
      v26 = a3;
    if ( v24 <= 0 || (v27 = *(_DWORD *)(v25 + 12), **(_BYTE **)(v27 + 24) == 10) )
    {
      v24 = 0;
      goto LABEL_66;
    }
    if ( !*v26 )
      goto LABEL_55;
    v28 = v26;
    v29 = 0;
    while ( 1 )
    {
      v30 = sub_171258((_DWORD *)v27);
      v31 = (_DWORD *)sub_26BC70(*v28);
      v32 = sub_171258(v31);
      v33 = *(char **)(v30 + 24);
      v34 = v32;
      v35 = *v33;
      v36 = (unsigned __int8)(v35 - 18);
      if ( v36 > 1 )
      {
        v37 = v35 > 1;
        if ( v35 != 1 )
          v37 = v36 > 1;
        if ( !v37 )
        {
          do
          {
LABEL_42:
            v38 = sub_171258(*((_DWORD **)v33 + 5));
            v33 = *(char **)(v38 + 24);
            v39 = *v33;
            v40 = v39 > 1;
            if ( v39 != 1 )
              v40 = (unsigned __int8)(v39 - 18) > 1u;
          }
          while ( !v40 );
          v30 = v38;
          v41 = v34;
LABEL_48:
          while ( 1 )
          {
            v42 = *(char **)(v41 + 24);
            v43 = *v42;
            if ( (unsigned int)(unsigned __int8)v43 - 1 > 1 && (unsigned int)(unsigned __int8)v43 - 18 > 1 )
              break;
            v41 = sub_171258(*((_DWORD **)v42 + 5));
          }
          if ( **(char **)(v30 + 24) != v43 )
          {
            v44 = **(char **)(*(_DWORD *)(v25 + 12) + 24);
            if ( **(char **)(sub_26BC70(*v28) + 24) != v44 )
              goto LABEL_55;
          }
          goto LABEL_52;
        }
LABEL_63:
        v41 = v34;
        goto LABEL_48;
      }
      v48 = sub_171258(*((_DWORD **)v33 + 5));
      v49 = **(char **)(v34 + 24);
      if ( v49 != **(char **)(v48 + 24) )
      {
        v33 = *(char **)(v30 + 24);
        v50 = *v33;
        v51 = v50 > 1;
        if ( v50 != 1 )
          v51 = (unsigned __int8)(v50 - 18) > 1u;
        if ( !v51 )
          goto LABEL_42;
        goto LABEL_63;
      }
      v52 = *v28;
      if ( v49 == 2 )
      {
        *v28 = sub_26160C(v52);
LABEL_52:
        if ( v24 == ++v29 )
          goto LABEL_66;
        goto LABEL_53;
      }
      ++v29;
      *v28 = ((int (__fastcall *)(int, _DWORD))loc_2618D4)(v52, **(char **)(v30 + 24));
      if ( v24 == v29 )
        goto LABEL_66;
LABEL_53:
      v25 += 24;
      v27 = *(_DWORD *)(v25 + 12);
      if ( **(_BYTE **)(v27 + 24) == 10 )
        break;
      v45 = v28[1];
      ++v28;
      if ( !v45 )
        goto LABEL_55;
    }
    v24 = v29;
LABEL_66:
    if ( !v80 && v26[v24] )
      goto LABEL_55;
    v53 = *(unsigned __int16 *)(v75 + 14);
    if ( v53 > 1 )
      return sub_FC6AC();
    if ( !a6 )
      v53 = 0;
    if ( v53 )
      *a6 = 1;
    result = sub_26D410(a2, v78, v15, v77, a5, HIDWORD(a5));
    if ( !result )
    {
LABEL_55:
      if ( v15-- == 0 )
        goto LABEL_17;
      v75 -= 16;
      v22 = *(unsigned __int16 *)(v75 + 14);
      v47 = *(_DWORD *)(*(_DWORD *)(v78 + 16 * v15 + 4) + 24);
      v24 = *(__int16 *)(v47 + 4);
      v25 = *(_DWORD *)(v47 + 24);
      v80 = *(unsigned __int8 *)(v47 + 1) >> 7;
      continue;
    }
    return result;
  }
}
