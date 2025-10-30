void __fastcall sub_196AD0(int a1, int a2, char *a3, unsigned int **a4, unsigned int **a5)
{
  _DWORD *v7; // r6
  int v8; // r2
  _BYTE *v9; // r0
  _DWORD *v10; // r12
  int v11; // r2
  int v12; // r1
  bool v13; // zf
  int v14; // r3
  char **v15; // r0
  int v16; // r0
  int v17; // r2
  int v18; // r3
  __int16 *v19; // r1
  int v20; // r10
  int v21; // r7
  __int16 *v22; // r3
  int v23; // r4
  const char *v24; // r5
  int v25; // r2
  int v26; // r3
  __int16 *v27; // r1
  int v28; // r8
  int v29; // r5
  unsigned int v30; // r2
  unsigned int v31; // r3
  __int16 *v32; // r3
  int v33; // r3
  unsigned int *v34; // r0
  void *v35; // r0
  int v36; // r5
  int i; // r4
  unsigned int v38; // r2
  unsigned int v39; // r3
  int v40; // r2
  __int16 *v41; // r3
  unsigned int *v42; // r0
  unsigned int v43; // r8
  int v44; // r0
  int v45; // [sp+8h] [bp-13Ch]
  unsigned int v46; // [sp+Ch] [bp-138h]
  int *v48; // [sp+14h] [bp-130h]
  int (__fastcall *v49)(const char *, int *, _DWORD); // [sp+18h] [bp-12Ch]
  _DWORD v50[2]; // [sp+20h] [bp-124h] BYREF
  _DWORD v51[14]; // [sp+28h] [bp-11Ch] BYREF
  int v52; // [sp+60h] [bp-E4h] BYREF
  char v53; // [sp+64h] [bp-E0h]
  char v54; // [sp+65h] [bp-DFh]
  void *ptr; // [sp+68h] [bp-DCh]
  int v56; // [sp+6Ch] [bp-D8h]
  _DWORD v57[4]; // [sp+70h] [bp-D4h] BYREF
  void *v58; // [sp+80h] [bp-C4h]
  char v59; // [sp+88h] [bp-BCh] BYREF
  char v60; // [sp+9Ch] [bp-A8h]
  void *v61; // [sp+A0h] [bp-A4h]
  char v62; // [sp+A8h] [bp-9Ch] BYREF
  char v63; // [sp+B8h] [bp-8Ch]
  void *v64; // [sp+BCh] [bp-88h]
  char v65; // [sp+C4h] [bp-80h] BYREF
  char v66; // [sp+D4h] [bp-70h]
  void *v67; // [sp+D8h] [bp-6Ch]
  char v68; // [sp+E0h] [bp-64h] BYREF
  char v69; // [sp+F0h] [bp-54h]
  int v70; // [sp+130h] [bp-14h]
  int v71; // [sp+134h] [bp-10h]
  _DWORD v72[3]; // [sp+138h] [bp-Ch]

  v7 = (_DWORD *)a1;
  if ( !sub_170CC4(a1) )
    goto LABEL_50;
  v50[0] = v51;
  if ( a3 )
    v8 = (int)&a3[strlen(a3)];
  else
    v8 = -1;
  v9 = sub_195F6C(v50, a3, v8);
  v11 = v50[0];
  v12 = 1;
  v53 = 0;
  v54 = 0;
  v13 = v50[0] == (_DWORD)v51;
  ptr = v57;
  v52 = 1;
  if ( (_DWORD *)v50[0] == v51 )
  {
    v10 = v57;
    v9 = (_BYTE *)v51[0];
    v12 = v51[1];
    v11 = v51[2];
    v14 = v51[3];
  }
  else
  {
    v14 = v51[0];
    ptr = (void *)v50[0];
  }
  if ( (_DWORD *)v50[0] == v51 )
  {
    *v10 = v9;
    v10[1] = v12;
    v10[2] = v11;
    v10[3] = v14;
  }
  if ( !v13 )
    v57[0] = v14;
  v72[0] = 0;
  v60 = 0;
  v63 = 0;
  v66 = 0;
  v69 = 0;
  v70 = 0;
  v71 = 0;
  *(_DWORD *)((char *)v72 + 3) = 0;
  v56 = v50[1];
  v15 = sub_194438(a2);
  v48 = &v52;
  v49 = (int (__fastcall *)(const char *, int *, _DWORD))sub_194570((int)v15, (int)&v52);
  v16 = sub_171258(v7);
  v17 = *(_DWORD *)(v16 + 24);
  v7 = (_DWORD *)v16;
  v18 = *(_WORD *)(v17 + 2) & 0x380;
  if ( v18 == 128 )
    v19 = *(__int16 **)(v17 + 28);
  else
    v19 = &word_3B4A2C;
  v20 = v19[2];
  if ( v20 > 0 )
  {
    v21 = 0;
    while ( 1 )
    {
      if ( v18 == 128 )
        v22 = *(__int16 **)(v17 + 28);
      else
        v22 = &word_3B4A2C;
      v23 = 12 * (v20 - v21) - 12;
      v24 = *(const char **)(*((_DWORD *)v22 + 8) + v23);
      if ( (!strncmp(v24, (const char *)&dword_3C439C, 2u) || !strncmp(v24, "op", 2u) || !strncmp(v24, "type", 4u))
        && (sub_3102B0(v24, v50, 2) || sub_3102B0(v24, v50, 0)) )
      {
        v24 = (const char *)v50;
      }
      if ( v49(v24, &v52, 0) )
      {
        v25 = v7[6];
        v26 = *(_WORD *)(v25 + 2) & 0x380;
        v27 = v26 == 128 ? *(__int16 **)(v25 + 28) : &word_3B4A2C;
        v28 = *(_DWORD *)(*((_DWORD *)v27 + 8) + v23 + 4);
        if ( v28 > 0 )
        {
          v29 = 0;
          v45 = v28 + 0xFFFFFFF;
          while ( 1 )
          {
            if ( v26 == 128 )
              v32 = *(__int16 **)(v25 + 28);
            else
              v32 = &word_3B4A2C;
            v33 = *(_DWORD *)(*((_DWORD *)v32 + 8) + v23 + 8);
            if ( (*(_BYTE *)(v33 + 16 * (v45 - v29) + 12) & 0x20) == 0 )
            {
              v34 = *a4;
              v46 = *(_DWORD *)(v33 + 16 * (v45 - v29));
              if ( !*a4 || (v30 = v34[1], v31 = *v34, v30 == *v34) )
              {
                v34 = sub_99FE0(v34, 1);
                v31 = *v34;
                v30 = v34[1];
                *a4 = v34;
              }
              if ( v30 <= v31 )
              {
LABEL_74:
                sub_94700(
                  (int)"linespec.c",
                  1270,
                  "%s: Assertion `%s' failed.",
                  "const char** VEC_const_char_ptr_quick_push(VEC_const_char_ptr*, const_char_ptr, const char*, unsigned int)",
                  "quick_push");
                v44 = sub_AF570((int)v48);
                sub_338FFC(v44);
              }
              *v34 = v31 + 1;
              v34[v31 + 2] = v46;
            }
            if ( v28 == ++v29 )
              break;
            v25 = v7[6];
            v26 = *(_WORD *)(v25 + 2) & 0x380;
          }
        }
      }
      if ( v20 == ++v21 )
        break;
      v17 = v7[6];
      v18 = *(_WORD *)(v17 + 2) & 0x380;
    }
  }
  if ( !v69 || (v69 = 0, v67 == &v68) )
  {
    if ( !v66 )
      goto LABEL_46;
  }
  else
  {
    sub_339E64(v67);
    if ( !v66 )
      goto LABEL_46;
  }
  v66 = 0;
  if ( v64 != &v65 )
  {
    sub_339E64(v64);
    if ( !v63 )
      goto LABEL_47;
    goto LABEL_70;
  }
LABEL_46:
  if ( !v63 )
    goto LABEL_47;
LABEL_70:
  v63 = 0;
  if ( v61 != &v62 )
  {
    sub_339E64(v61);
    if ( !v60 )
      goto LABEL_48;
    goto LABEL_63;
  }
LABEL_47:
  if ( !v60 )
    goto LABEL_48;
LABEL_63:
  v60 = 0;
  if ( v58 != &v59 )
  {
    sub_339E64(v58);
    v35 = ptr;
    if ( ptr == v57 )
      goto LABEL_50;
    goto LABEL_49;
  }
LABEL_48:
  v35 = ptr;
  if ( ptr != v57 )
LABEL_49:
    sub_339E64(v35);
LABEL_50:
  v36 = 0;
  for ( i = 0; ; ++i )
  {
    v40 = v7[6];
    v41 = (*(_WORD *)(v40 + 2) & 0x380) == 0x80 ? *(__int16 **)(v40 + 28) : &word_3B4A2C;
    if ( *v41 <= i )
      break;
    v42 = *a5;
    v43 = *(_DWORD *)(*(_DWORD *)(v40 + 24) + v36 + 12);
    if ( !*a5 || (v38 = v42[1], v39 = *v42, v38 == *v42) )
    {
      v42 = sub_99FE0(v42, 1);
      v39 = *v42;
      v38 = v42[1];
      *a5 = v42;
    }
    v36 += 24;
    if ( v39 >= v38 )
    {
      sub_94700(
        (int)"linespec.c",
        1277,
        "%s: Assertion `%s' failed.",
        "type** VEC_typep_quick_push(VEC_typep*, typep, const char*, unsigned int)",
        "quick_push");
      goto LABEL_74;
    }
    *v42 = v39 + 1;
    v42[v39 + 2] = v43;
  }
}
