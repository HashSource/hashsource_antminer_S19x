int __fastcall sub_1359DC(char *a1, int a2, int *a3, int a4)
{
  char *v4; // r5
  int v8; // r8
  int v9; // r3
  int v10; // r3
  int v11; // r3
  bool v12; // zf
  unsigned int v13; // r3
  int v14; // r2
  int v15; // r3
  int result; // r0
  char *v17; // r0
  char *v18; // r9
  size_t v19; // r0
  int v20; // r4
  size_t v21; // r5
  void *v22; // r0
  int v23; // r2
  char *v24; // r3
  char *v25; // r5
  int v26; // r1
  bool v27; // zf
  int v28; // r3
  size_t v29; // r0
  char *v30; // r0
  unsigned __int16 *v31; // r9
  int v32; // r2
  int v33; // r0
  int v34; // r11
  int v35; // r0
  int v36; // r0
  int v37; // r3
  int v38; // r5
  int v39; // r3
  int v40; // r3
  int v41; // r3
  void *v42; // r0
  int v43; // [sp+1Ch] [bp-80h]
  void *v44; // [sp+20h] [bp-7Ch] BYREF
  int *v45; // [sp+24h] [bp-78h] BYREF
  int v46[2]; // [sp+28h] [bp-74h] BYREF
  int (**v47)(); // [sp+30h] [bp-6Ch] BYREF
  void *src; // [sp+34h] [bp-68h]
  size_t n; // [sp+38h] [bp-64h]
  char v50; // [sp+3Ch] [bp-60h] BYREF
  _BYTE v51[64]; // [sp+4Ch] [bp-50h] BYREF
  int v52; // [sp+8Ch] [bp-10h]

  v4 = a1;
  v8 = *a3;
  if ( !a1 )
    v4 = sub_12FAF0((_WORD *)a2, a3);
  v9 = a3[16];
  if ( v9 == 14 || (v9 == 7 ? (v10 = a4 & 1) : (v10 = 0), v10) )
  {
    result = sub_12EA34(a2, a3);
    if ( result )
      return result;
  }
  if ( !v4 )
    return (int)v4;
  v11 = a3[16];
  v12 = v11 == 12;
  if ( v11 != 12 )
    v12 = v11 == 7;
  v13 = v11 - 4;
  v14 = v12;
  v15 = v13 <= 1 ? v14 | 1 : v14;
  if ( !v15 || !sub_1309F8(a2, (int)a3) )
    return (int)v4;
  sub_256760(&v47);
  src = &v50;
  n = 0;
  v47 = &off_3F2924;
  v50 = 0;
  v17 = sub_135408((unsigned __int16 *)a2, a3);
  if ( *v17 )
  {
    v18 = (char *)sub_122248(0, v17, v4, a4, a3 + 16);
    v19 = strlen(v18);
    sub_2564E4(&v47, v18, v19);
    free(v18);
  }
  else
  {
    v29 = strlen(v4);
    sub_2564E4(&v47, v4, v29);
  }
  if ( a3[16] != 4 )
    goto LABEL_25;
  if ( strchr(v4, 60) )
  {
LABEL_37:
    if ( !a4 || *(_WORD *)a2 != 46 )
      goto LABEL_39;
    goto LABEL_73;
  }
  v31 = *(unsigned __int16 **)(a2 + 12);
  *(_BYTE *)(a2 + 3) |= 1u;
  if ( !v31 )
  {
    *(_BYTE *)(a2 + 3) &= ~1u;
    goto LABEL_37;
  }
  v32 = 1;
  do
  {
    if ( (unsigned int)*v31 - 47 <= 1 )
    {
      if ( v32 )
        sub_2564E4(&v47, &word_364FA4, 1);
      else
        sub_2564E4(&v47, ", ", 2);
      if ( !sub_12E694((int)v31, 73, (int)a3) )
      {
        if ( dword_47AC88 > 0 )
          sub_F43B4(&off_46D334, "template parameter missing DW_AT_type");
        sub_2564E4(&v47, "UNKNOWN_TYPE", 12);
        goto LABEL_53;
      }
      v33 = sub_1345C4((int)v31, a3);
      v34 = v33;
      if ( *v31 == 47 )
      {
        sub_E9398(v33, "", (int)&v47, -1, 0, (int)"\a");
        goto LABEL_53;
      }
      v35 = sub_12E694((int)v31, 28, (int)a3);
      if ( !v35 )
      {
        if ( dword_47AC88 > 0 )
          sub_F43B4(&off_46D334, "template parameter missing DW_AT_const_value");
        sub_2564E4(&v47, "UNKNOWN_VALUE", 13);
        goto LABEL_53;
      }
      ((void (__fastcall *)(int, int, char *, int *, int *, int *, void **, int **))loc_12526C)(
        v35,
        v34 + 20,
        v4,
        a3 + 22,
        a3,
        v46,
        &v44,
        &v45);
      if ( (*(_BYTE *)(*(_DWORD *)(v34 + 24) + 1) & 2) != 0 )
        sub_E7C54(v46[0], v34, (int)&v47);
      if ( v45 )
      {
        v36 = sub_117D48(v34, 0, *v45, v45[1], v45[2]);
      }
      else
      {
        if ( v44 )
        {
          v43 = sub_26BB80(v34);
          v42 = (void *)sub_26E954(v43);
          memcpy(v42, v44, *(_DWORD *)(v34 + 20));
          goto LABEL_52;
        }
        v36 = sub_26DAF4(v34, 0, v46[0], v46[1]);
      }
      v43 = v36;
LABEL_52:
      sub_266628(v51, 100);
      v52 = 1;
      sub_266C84(v43, &v47, v51);
      sub_26C3B8(v43);
      ((void (__fastcall *)(int))loc_26C200)(v43);
LABEL_53:
      v32 = 0;
    }
    v31 = (unsigned __int16 *)*((_DWORD *)v31 + 4);
  }
  while ( v31 );
  *(_BYTE *)(a2 + 3) &= ~1u;
  if ( !v32 )
  {
    if ( n && *((char *)src + n - 1) == 62 )
      sub_60124((int)&v47, (char *)&word_433D04);
    else
      sub_2564E4(&v47, ">", 1);
  }
  v37 = a3[16];
  if ( a4 && *(_WORD *)a2 == 46 )
  {
    if ( v37 != 4 )
      goto LABEL_25;
LABEL_73:
    v38 = sub_132D94((unsigned __int16 *)a2, a3);
    sub_E93D0(v38, (int)&v47, 1, a3[16], (int)"\a");
    if ( a3[16] != 4 )
      goto LABEL_25;
    v39 = *(_DWORD *)(v38 + 24);
    if ( *(__int16 *)(v39 + 4) > 0 )
    {
      v40 = *(_DWORD *)(v39 + 24);
      if ( (*(_BYTE *)(v40 + 8) & 1) != 0 )
      {
        v41 = *(_DWORD *)(*(_DWORD *)(v40 + 12) + 24);
        if ( *(_BYTE *)v41 == 1 && (*(_DWORD *)(*(_DWORD *)(v41 + 20) + 16) & 1) != 0 )
        {
          sub_60124((int)&v47, " const");
          v37 = a3[16];
          goto LABEL_67;
        }
      }
    }
LABEL_39:
    v30 = sub_12413C((char *)src, a3 + 16, *(_DWORD *)(v8 + 40));
    v25 = v30;
    if ( !v30 || v30 == src )
      goto LABEL_25;
    goto LABEL_34;
  }
LABEL_67:
  if ( v37 == 4 )
    goto LABEL_39;
LABEL_25:
  v20 = *(_DWORD *)(v8 + 40);
  v21 = n;
  v22 = *(void **)(v20 + 12);
  if ( n + 1 > *(_DWORD *)(v20 + 16) - (int)v22 )
  {
    obstack_newchunk(*(struct obstack **)(v8 + 40), n + 1);
    v22 = *(void **)(v20 + 12);
  }
  memcpy(v22, src, v21);
  v23 = *(_DWORD *)(v20 + 12);
  *(_DWORD *)(v20 + 12) = v23 + v21 + 1;
  *(_BYTE *)(v23 + v21) = 0;
  v24 = *(char **)(v20 + 12);
  v25 = *(char **)(v20 + 8);
  v26 = *(_DWORD *)(v20 + 16);
  v27 = v24 == v25;
  if ( v24 == v25 )
    LOBYTE(v23) = *(_BYTE *)(v20 + 40);
  v28 = (unsigned int)&v24[*(_DWORD *)(v20 + 24)] & ~*(_DWORD *)(v20 + 24);
  *(_DWORD *)(v20 + 12) = v28;
  if ( v27 )
    *(_BYTE *)(v20 + 40) = v23 | 2;
  if ( v28 - *(_DWORD *)(v20 + 4) > (unsigned int)(v26 - *(_DWORD *)(v20 + 4)) )
  {
    v28 = v26;
    *(_DWORD *)(v20 + 12) = v26;
  }
  *(_DWORD *)(v20 + 8) = v28;
LABEL_34:
  sub_256478(&v47);
  return (int)v25;
}
