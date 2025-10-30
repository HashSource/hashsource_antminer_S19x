int __fastcall sub_19A6E0(int a1, int a2, const char *a3, int *a4)
{
  void **v4; // r10
  _BYTE *v5; // r11
  int v7; // lr
  char *v9; // r7
  int v11; // r3
  unsigned int *v13; // r0
  unsigned int v14; // r2
  unsigned int v15; // r3
  int v16; // r3
  _BYTE *v17; // r0
  int v18; // r1
  bool v19; // cc
  _BYTE *v20; // r0
  size_t v21; // r11
  int v22; // r1
  unsigned __int8 *v23; // r0
  void *v24; // r3
  int v25; // r2
  const char *v26; // r8
  void *v27; // r10
  void *v28; // r3
  size_t v29; // r2
  size_t v30; // r3
  int v31; // r0
  _BYTE *v32; // r1
  int v33; // t1
  __int64 v34; // r2
  void **v35; // r1
  int v36; // r1
  void *v37; // r0
  bool v38; // zf
  int v39; // r1
  int v40; // r3
  void *v41; // r1
  void *v42; // r2
  unsigned int *v43; // r0
  unsigned int v44; // r2
  unsigned int v45; // r3
  _BYTE *v46; // r0
  int v47; // r0
  int v48; // r1
  void *v49; // r2
  void *v50; // r3
  int v51; // r0
  int v52; // r1
  _DWORD *v53; // r0
  void *v54; // [sp+Ch] [bp-B0h]
  size_t v55; // [sp+Ch] [bp-B0h]
  size_t v56; // [sp+Ch] [bp-B0h]
  int v57; // [sp+10h] [bp-ACh] BYREF
  int v58; // [sp+14h] [bp-A8h]
  void *ptr; // [sp+1Ch] [bp-A0h] BYREF
  void *v60; // [sp+20h] [bp-9Ch] BYREF
  void *v61; // [sp+24h] [bp-98h] BYREF
  int v62; // [sp+28h] [bp-94h] BYREF
  _BYTE *v63; // [sp+2Ch] [bp-90h]
  size_t v64; // [sp+30h] [bp-8Ch]
  int v65; // [sp+34h] [bp-88h]
  int v66; // [sp+38h] [bp-84h]
  int v67; // [sp+3Ch] [bp-80h]
  int v68; // [sp+40h] [bp-7Ch] BYREF
  void **v69; // [sp+44h] [bp-78h]
  size_t v70; // [sp+48h] [bp-74h]
  void *v71; // [sp+4Ch] [bp-70h] BYREF
  void *v72; // [sp+50h] [bp-6Ch]
  int v73; // [sp+54h] [bp-68h]
  unsigned int v74; // [sp+5Ch] [bp-60h]
  int v75; // [sp+90h] [bp-2Ch]
  int v76; // [sp+94h] [bp-28h]

  v7 = *(_DWORD *)(a2 + 128);
  v9 = (char *)a3;
  *(_DWORD *)(a2 + 20) = 0;
  v65 = 0;
  v66 = 0;
  v67 = 0;
  if ( !v7 && !sub_19741C(a3) )
  {
    v4 = (void **)(unsigned __int8)*v9;
    if ( strchr("\"'", (int)v4) )
    {
      v5 = v9 + 1;
      v23 = (unsigned __int8 *)sub_197668(v9 + 1, (int)v4);
      if ( v23 )
      {
        if ( sub_195CC4(v23) )
        {
          ++v9;
          *(_DWORD *)(a2 + 20) = 1;
        }
      }
    }
  }
  v11 = *(_DWORD *)(a2 + 36);
  *(_DWORD *)a2 = v9;
  *(_DWORD *)(a2 + 4) = v9;
  *(_DWORD *)(a2 + 116) = v9;
  *(_DWORD *)(a2 + 76) = a4;
  *(_DWORD *)(a2 + 112) = 1;
  if ( v11 )
  {
    if ( *(_DWORD *)(a2 + 128) )
    {
LABEL_4:
      if ( (((unsigned __int8)*v9 - 43) & 0xFD) == 0 && !v9[1] )
      {
LABEL_6:
        *(_DWORD *)a1 = 0;
        *(_DWORD *)(a1 + 4) = 0;
        *(_DWORD *)(a1 + 8) = 0;
        return a1;
      }
      goto LABEL_9;
    }
  }
  else
  {
    sub_203210(&v71);
    *(_QWORD *)(a2 + 36) = __PAIR64__(v74, (unsigned int)v72);
    if ( *(_DWORD *)(a2 + 128) )
      goto LABEL_4;
  }
  sub_19A350(&v71, (_DWORD *)(a2 + 24), (const char **)(a2 + 68), v9);
  v24 = v72;
  if ( v71 != v72 )
  {
    v25 = v73;
    *(_DWORD *)a1 = v71;
    *(_DWORD *)(a1 + 4) = v24;
    *(_DWORD *)(a1 + 8) = v25;
    return a1;
  }
  if ( v71 )
    sub_339E64(v71);
LABEL_9:
  ((void (__fastcall *)(int *, int))loc_197DFC)(&v62, a2);
  if ( v62 != 2 )
  {
    if ( v62 == 5 )
    {
      if ( !*(_DWORD *)(a2 + 128) )
        goto LABEL_54;
      goto LABEL_44;
    }
    if ( (unsigned int)(v62 - 2) > 1 )
      goto LABEL_54;
    goto LABEL_12;
  }
  if ( *v63 != 36 )
    goto LABEL_12;
  if ( !*(_DWORD *)(a2 + 128) )
  {
    v43 = *(unsigned int **)(a2 + 92);
    if ( !v43 || (v44 = v43[1], v45 = *v43, v44 == *v43) )
    {
      v43 = sub_99FE0(v43, 1);
      v45 = *v43;
      v44 = v43[1];
      *(_DWORD *)(a2 + 92) = v43;
    }
    if ( v44 <= v45 )
      goto LABEL_128;
    *v43 = v45 + 1;
    v43[v45 + 2] = 0;
  }
  a4 = &v57;
  v62 = 2;
  v4 = (void **)sub_1957F4(2, v63, v64);
  v5 = sub_9253C(1659888, (int)v4);
  sub_195A64(&v57, (int)v4);
  v18 = v58;
  *(_DWORD *)(a2 + 84) = v57;
  *(_DWORD *)(a2 + 88) = v18;
  sub_92620(v5);
  if ( *(_DWORD *)(a2 + 88) == 3 )
  {
LABEL_12:
    sub_197F34((int)&v62, (_DWORD *)a2);
    if ( v62 == 1 )
    {
      sub_197B00(&v62, (_DWORD *)a2);
      v26 = (const char *)sub_1957F4(v62, v63, v64);
      v27 = sub_92E28();
      *(_DWORD *)(a2 + 92) = sub_19623C(v26, *(_DWORD *)(a2 + 32));
      sub_92E40((int)v27);
      *(_DWORD *)(a2 + 68) = v26;
      ((void (__fastcall *)(int *, int))loc_197DFC)(&v62, a2);
      ((void (__fastcall *)(void **, int))loc_197DFC)(&v71, a2);
      goto LABEL_18;
    }
    if ( *(_DWORD *)(a2 + 128) )
      goto LABEL_14;
    v19 = v62 != 0;
    if ( v62 )
      v19 = (unsigned int)(v62 - 4) > 1;
    if ( !v19 )
    {
LABEL_14:
      v13 = *(unsigned int **)(a2 + 92);
      if ( !v13 )
        goto LABEL_60;
      v14 = v13[1];
      v15 = *v13;
      if ( v14 == *v13 )
        goto LABEL_60;
      goto LABEL_16;
    }
    ((void (__fastcall *)(void **, int))loc_197DFC)(&v71, a2);
    goto LABEL_44;
  }
  ((void (__fastcall *)(void **, int))loc_197DFC)(&v71, a2);
LABEL_30:
  sub_197B00(&v62, (_DWORD *)a2);
  if ( v62 != 5 )
  {
    if ( v62 )
    {
LABEL_44:
      while ( 2 )
      {
        sub_16134(a2);
LABEL_45:
        v20 = *(_BYTE **)(a2 + 4);
        v21 = v70;
        if ( *v20 == 32 )
        {
          *(_DWORD *)(a2 + 116) = sub_9360C(v20 + 1);
          *(_DWORD *)(a2 + 112) = 4;
        }
        else
        {
          *(_DWORD *)(a2 + 116) = v20;
          *(_DWORD *)(a2 + 112) = 0;
        }
        v69 = v4;
        v70 = v21;
        v68 = 3;
        v4 = (void **)&v57;
        ptr = (void *)sub_1957F4(*a4, (const void *)a4[1], a4[2]);
        v5 = sub_9253C((int)sub_1953F0, (int)ptr);
        sub_198D60(&v57, (char *)ptr);
        v22 = v58;
        *(_DWORD *)(a2 + 84) = v57;
        *(_DWORD *)(a2 + 88) = v22;
        sub_92620(v5);
        ((void (__fastcall *)(int *, int))loc_197DFC)(a4, a2);
        if ( v68 == 4 )
        {
          *(_DWORD *)(a2 + 112) = 0;
        }
        else if ( v68 && v68 != 5 )
        {
          continue;
        }
        break;
      }
      while ( 1 )
      {
LABEL_28:
        v16 = *(_DWORD *)(a2 + 128);
        while ( 1 )
        {
          while ( 1 )
          {
            if ( v16 )
              goto LABEL_30;
            while ( 1 )
            {
              if ( *(_DWORD *)(a2 + 96) || *(_DWORD *)(a2 + 104) || *(_DWORD *)(a2 + 88) != 3 || *(_DWORD *)(a2 + 100) )
                goto LABEL_30;
              v13 = (unsigned int *)sub_195708(*(const char **)(a2 + 72), *(const char **)(a2 + 68));
LABEL_60:
              v13 = sub_99FE0(v13, 1);
              v15 = *v13;
              v14 = v13[1];
              *(_DWORD *)(a2 + 92) = v13;
LABEL_16:
              if ( v15 >= v14 )
              {
                sub_94700(
                  (int)"linespec.c",
                  2682,
                  "%s: Assertion `%s' failed.",
                  "symtab** VEC_symtab_ptr_quick_push(VEC_symtab_ptr*, symtab_ptr, const char*, unsigned int)",
                  "quick_push");
LABEL_122:
                *(_DWORD *)(a2 + 72) = ptr;
                sub_92640(v5);
                goto LABEL_28;
              }
              *v13 = v15 + 1;
              v13[v15 + 2] = 0;
LABEL_18:
              a4 = &v68;
              sub_197B00(&v68, (_DWORD *)a2);
              v4 = v69;
              if ( v68 )
              {
                if ( v68 == 5 )
                  goto LABEL_44;
                if ( v68 == 3 )
                  goto LABEL_45;
                if ( v68 == 2 )
                  break;
              }
LABEL_54:
              *(_DWORD *)(a2 + 112) = 0;
              sub_16134(a2);
            }
            ptr = (void *)sub_1957F4(2, v69, v70);
            v5 = sub_9253C(2460088, (int)&ptr);
            if ( !*(_DWORD *)(a2 + 128) )
            {
              sub_197FEC((_DWORD *)(a2 + 24), *(_DWORD *)(a2 + 92), (char *)ptr, *(_DWORD *)(a2 + 76), &v60, &v61);
              if ( v60 )
              {
                v54 = v61;
                v28 = ptr;
              }
              else
              {
                v54 = v61;
                v28 = ptr;
                if ( !v61 )
                {
                  v40 = sub_196908((_DWORD *)(a2 + 28), 0, (int)&v60, (int)ptr, 0);
                  if ( v40 )
                  {
                    v41 = v60;
                    v42 = ptr;
                    *(_DWORD *)(a2 + 104) = v40;
                    *(_DWORD *)(a2 + 108) = v41;
                    *(_DWORD *)(a2 + 80) = v42;
                    v60 = 0;
                    sub_92640(v5);
                    goto LABEL_26;
                  }
                  if ( *(_BYTE *)v4 == 36 )
                  {
                    v4 = (void **)&v57;
                    sub_195A64(&v57, (int)ptr);
                    v52 = v58;
                    *(_DWORD *)(a2 + 84) = v57;
                    *(_DWORD *)(a2 + 88) = v52;
                    if ( *(_DWORD *)(a2 + 88) != 3 )
                    {
                      sub_92620(v5);
                      goto LABEL_26;
                    }
                  }
                  goto LABEL_122;
                }
              }
              *(_DWORD *)(a2 + 96) = v60;
              *(_DWORD *)(a2 + 72) = v28;
              *(_DWORD *)(a2 + 100) = v54;
              v60 = 0;
              sub_92640(v5);
              goto LABEL_26;
            }
            if ( !*(_DWORD *)(a2 + 120) && !strcmp(*(const char **)(a2 + 4), ":") )
            {
              sub_F64C0((int)&v71);
              sub_198EA4((int)&v71, *(char **)(a2 + 116), *(_DWORD *)(a2 + 76), *(_DWORD *)(a2 + 68));
              if ( v75 != v76 )
              {
                v37 = ptr;
                v38 = ptr == 0;
                v39 = *(_DWORD *)(a2 + 4) + 1;
                *(_DWORD *)(a2 + 4) = v39;
                if ( !v38 )
                {
                  free(v37);
                  v39 = *(_DWORD *)(a2 + 4);
                }
                ptr = sub_93330(*(const void **)(a2 + 116), v39 - *(_DWORD *)(a2 + 116));
              }
              sub_F56B0(&v71);
            }
            *(_DWORD *)(a2 + 72) = ptr;
            sub_92640(v5);
LABEL_26:
            v5 = *(_BYTE **)(a2 + 120);
            ((void (__fastcall *)(int *, int))loc_197DFC)(&v68, a2);
            v4 = (void **)v68;
            if ( v68 != 5 )
              break;
            v16 = *(_DWORD *)(a2 + 128);
            if ( v5 && !*(_DWORD *)(a2 + 120) )
              *(_DWORD *)(a2 + 112) = 4;
          }
          if ( v68 != 1 )
            goto LABEL_28;
          ((void (__fastcall *)(int *, int))loc_197DFC)(&v68, a2);
          v5 = v69;
          v29 = v70;
          if ( v68 == 3 )
          {
            v46 = *(_BYTE **)(a2 + 4);
            if ( *v46 == 32 )
            {
              v56 = v70;
              *(_DWORD *)(a2 + 116) = sub_9360C(v46 + 1);
              *(_DWORD *)(a2 + 112) = 4;
              v29 = v56;
            }
            else
            {
              *(_DWORD *)(a2 + 116) = v46;
              *(_DWORD *)(a2 + 112) = 0;
            }
            v69 = (void **)v5;
            v70 = v29;
            v4 = (void **)&v57;
            v68 = 3;
            v35 = (void **)v5;
LABEL_97:
            ptr = (void *)sub_1957F4(3, v35, v29);
            v5 = sub_9253C((int)sub_1953F0, (int)ptr);
            sub_198D60(&v57, (char *)ptr);
            v36 = v58;
            *(_DWORD *)(a2 + 84) = v57;
            *(_DWORD *)(a2 + 88) = v36;
            sub_92620(v5);
            ((void (__fastcall *)(int *, int))loc_197DFC)(&v68, a2);
            goto LABEL_28;
          }
          if ( v68 != 5 )
            break;
          v16 = *(_DWORD *)(a2 + 128);
          if ( !v16 )
            goto LABEL_44;
          *(_DWORD *)(a2 + 112) = 2;
        }
        if ( v68 != 2 )
          goto LABEL_44;
        v30 = *(_DWORD *)(a2 + 120);
        *(_DWORD *)(a2 + 112) = 2;
        if ( !v30 && v29 )
        {
          if ( *v5 == 32 )
          {
            v51 = 1;
LABEL_118:
            v55 = v30;
            v47 = sub_9360C(&v5[v51]);
            v29 = v55;
            *(_DWORD *)(a2 + 4) = v47;
          }
          else
          {
            v31 = 0;
            v32 = v5;
            while ( 1 )
            {
              v30 = v31 + 1;
              if ( v29 == v31 + 1 )
                break;
              v33 = (unsigned __int8)*++v32;
              if ( v33 == 32 )
              {
                v51 = v31 + 2;
                goto LABEL_118;
              }
              ++v31;
            }
          }
        }
        v4 = *(void ***)(a2 + 128);
        if ( !v4 )
        {
          v70 = v29;
          v68 = 2;
          ptr = (void *)sub_1957F4(2, v69, v29);
          v5 = sub_9253C((int)sub_1953F0, (int)ptr);
          v48 = sub_196908((_DWORD *)(a2 + 28), *(int **)(a2 + 96), (int)&v60, (int)ptr, 0);
          if ( v48 )
          {
            v49 = v60;
            v50 = ptr;
            *(_DWORD *)(a2 + 104) = v48;
            *(_DWORD *)(a2 + 108) = v49;
            *(_DWORD *)(a2 + 80) = v50;
            v60 = 0;
            sub_92640(v5);
            goto LABEL_92;
          }
          sub_16104(*(const char **)(a2 + 72), (const char *)ptr);
LABEL_128:
          sub_94700(
            (int)"linespec.c",
            2594,
            "%s: Assertion `%s' failed.",
            "symtab** VEC_symtab_ptr_quick_push(VEC_symtab_ptr*, symtab_ptr, const char*, unsigned int)",
            "quick_push");
          v53 = sub_F56B0(v4);
          sub_338FFC(v53);
        }
        HIDWORD(v34) = *(_DWORD *)(a2 + 4);
        if ( *(_BYTE *)(HIDWORD(v34) - 1) == 32 )
        {
          LODWORD(v34) = 4;
          *(_QWORD *)(a2 + 112) = v34;
        }
LABEL_92:
        v4 = &v71;
        sub_197F34((int)&v71, (_DWORD *)a2);
        if ( v71 != (void *)5 )
          *(_DWORD *)(a2 + 116) = *(_DWORD *)(a2 + 4);
        ((void (__fastcall *)(void **, int))loc_197DFC)(&v71, a2);
        if ( v71 == (void *)1 )
        {
          ((void (__fastcall *)(int *, int))loc_197DFC)(&v68, a2);
          if ( v68 == 3 )
          {
            v35 = v69;
            v29 = v70;
            v4 = (void **)&v57;
            goto LABEL_97;
          }
          goto LABEL_44;
        }
      }
    }
    v17 = sub_93610(*(unsigned __int8 **)(a2 + 4));
    *(_DWORD *)(a2 + 116) = sub_9360C(v17);
    *(_DWORD *)(a2 + 112) = 3;
  }
  if ( *(_DWORD *)(a2 + 128) )
    goto LABEL_6;
  sub_19966C((void **)a1, (_DWORD *)(a2 + 24), a2 + 68);
  return a1;
}
