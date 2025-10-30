int *sub_126E78()
{
  int *v0; // r11
  int *v1; // r7
  char *v3; // r0
  char *v4; // r5
  void *v5; // r9
  int v6; // r0
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r12
  int *v11; // lr
  bool v12; // zf
  int v13; // r3
  size_t v14; // r2
  int v15; // r0
  int v16; // r1
  int v17; // r2
  int **v18; // r12
  int *v19; // r3
  int *v20; // lr
  bool v21; // zf
  _BYTE *v22; // r3
  int v23; // r2
  void *v24; // r7
  unsigned __int8 *v25; // r2
  int v26; // r8
  int v27; // r1
  int v28; // r3
  char v29; // r2
  _DWORD *v30; // r7
  _DWORD *v31; // r3
  int v32; // r0
  bool v33; // zf
  int v34; // r3
  void *v35; // r0
  void *v36; // r7
  const char *v37; // r0
  int v38; // r0
  int v39; // r0
  const char *v40; // r0
  int v41; // [sp+4h] [bp-78h]
  int v42; // [sp+Ch] [bp-70h] BYREF
  void *v43; // [sp+10h] [bp-6Ch] BYREF
  void *ptr; // [sp+14h] [bp-68h] BYREF
  void *v45; // [sp+18h] [bp-64h] BYREF
  int *v46; // [sp+1Ch] [bp-60h]
  _DWORD v47[4]; // [sp+20h] [bp-5Ch] BYREF
  void *v48[2]; // [sp+30h] [bp-4Ch] BYREF
  char v49; // [sp+38h] [bp-44h] BYREF
  void *v50; // [sp+48h] [bp-34h] BYREF
  int v51; // [sp+4Ch] [bp-30h]
  _DWORD v52[4]; // [sp+50h] [bp-2Ch] BYREF
  void *v53; // [sp+60h] [bp-1Ch] BYREF
  int *v54; // [sp+64h] [bp-18h]
  _DWORD v55[4]; // [sp+68h] [bp-14h] BYREF

  v1 = *(int **)(dword_4872D8 + 412);
  if ( v1 )
    return v1;
  ((void (__fastcall *)(_DWORD))loc_2A6C48)(0);
  v3 = (char *)sub_2AD238(*(_DWORD *)(*(_DWORD *)(dword_4872D8 + 344) + 36), &v42, &v43);
  v4 = v3;
  if ( !v3 )
  {
    v38 = sub_2A6910(0);
    if ( v38 )
    {
      v39 = sub_2A6910(v38);
      v40 = (const char *)sub_2A6920(v39);
      sub_946E0("could not read '.gnu_debugaltlink' section: %s", v40);
    }
    return v1;
  }
  v46 = 0;
  LOBYTE(v47[0]) = 0;
  v45 = v47;
  v5 = v43;
  v41 = v42;
  if ( *v3 == 47 )
  {
    v24 = v3;
    goto LABEL_33;
  }
  v6 = sub_1B87A8(*(_DWORD *)(dword_4872D8 + 344));
  sub_984A4((int *)&ptr, v6);
  sub_25AF84(v48, ptr);
  if ( v48[1] == (void *)0x7FFFFFFF )
    sub_33D184("basic_string::append");
  v7 = sub_33C320(v48, &word_398974, 1);
  v50 = v52;
  v10 = v7;
  v11 = (int *)(v7 + 8);
  v12 = *(_DWORD *)v7 == v7 + 8;
  if ( *(_DWORD *)v7 == v7 + 8 )
  {
    v7 = *v11;
    v1 = v52;
    v8 = v11[1];
    v9 = v11[2];
    v13 = v11[3];
  }
  else
  {
    v50 = *(void **)v7;
    v13 = *(_DWORD *)(v7 + 8);
  }
  if ( v12 )
  {
    *v1 = v7;
    v1[1] = v8;
    v1[2] = v9;
    v1[3] = v13;
  }
  else
  {
    v52[0] = v13;
  }
  v51 = *(_DWORD *)(v10 + 4);
  *(_DWORD *)(v10 + 4) = 0;
  *(_BYTE *)(v10 + 8) = 0;
  *(_DWORD *)v10 = v11;
  v14 = strlen(v4);
  if ( 0x7FFFFFFF - v51 < v14 )
    sub_33D184("basic_string::append");
  v15 = sub_33C320(&v50, v4, v14);
  v53 = v55;
  v18 = (int **)v15;
  v20 = (int *)(v15 + 8);
  v19 = *(int **)v15;
  v21 = *(_DWORD *)v15 == v15 + 8;
  if ( *(_DWORD *)v15 == v15 + 8 )
  {
    v0 = v55;
    v16 = *(_DWORD *)(v15 + 12);
    v17 = *(_DWORD *)(v15 + 16);
    v19 = *(int **)(v15 + 20);
    v15 = *v20;
  }
  else
  {
    v53 = *(void **)v15;
  }
  if ( v21 )
  {
    *v0 = v15;
    v0[1] = v16;
    v0[2] = v17;
    v0[3] = (int)v19;
  }
  else
  {
    v19 = v18[2];
  }
  if ( !v21 )
    v55[0] = v19;
  v54 = v18[1];
  *v18 = v20;
  v18[1] = 0;
  *((_BYTE *)v18 + 8) = 0;
  v22 = v45;
  if ( v53 == v55 )
  {
    sub_33B48C(&v45, &v53);
    v22 = v53;
    goto LABEL_25;
  }
  if ( v45 == v47 )
  {
    v45 = v53;
    v46 = v54;
    v47[0] = v55[0];
    goto LABEL_61;
  }
  v45 = v53;
  v46 = v54;
  v23 = v47[0];
  v47[0] = v55[0];
  if ( !v22 )
  {
LABEL_61:
    v53 = v55;
    v22 = v55;
    goto LABEL_25;
  }
  v53 = v22;
  v55[0] = v23;
LABEL_25:
  v54 = 0;
  *v22 = 0;
  if ( v53 != v55 )
    sub_339E64(v53);
  if ( v50 != v52 )
    sub_339E64(v50);
  if ( v48[0] != &v49 )
    sub_339E64(v48[0]);
  v24 = v45;
  if ( ptr )
    free(ptr);
LABEL_33:
  ((void (__fastcall *)(void **, void *, int, int))loc_16298C)(&v50, v24, dword_47ACA8, -1);
  v25 = (unsigned __int8 *)v43;
  if ( !v50 )
  {
LABEL_54:
    sub_E43DC((const char ***)&v53, v41, v25);
    v36 = v53;
    if ( v50 )
      ((void (*)(void))loc_1625A8)();
    v50 = v36;
    v26 = *(_DWORD *)(dword_4872D8 + 344);
    if ( !v36 )
    {
      v37 = (const char *)sub_1B87A8(v26);
      sub_946E0("could not find '.gnu_debugaltlink' file for %s", v37);
    }
    goto LABEL_37;
  }
  if ( !sub_E4358((const char **)v50, v41, v43) )
  {
    v25 = (unsigned __int8 *)v43;
    v50 = 0;
    goto LABEL_54;
  }
  if ( !v50 )
  {
    v25 = (unsigned __int8 *)v43;
    goto LABEL_54;
  }
  v26 = *(_DWORD *)(dword_4872D8 + 344);
LABEL_37:
  v27 = *(_DWORD *)(v26 + 64);
  v28 = *(_DWORD *)(v26 + 60);
  v29 = v27 - v28;
  if ( (unsigned int)(v27 - v28) <= 0x8F )
  {
    obstack_newchunk((struct obstack *)(v26 + 48), 144);
    v28 = *(_DWORD *)(v26 + 60);
    v27 = *(_DWORD *)(v26 + 64);
  }
  v30 = *(_DWORD **)(v26 + 56);
  v31 = (_DWORD *)(v28 + 144);
  v32 = *(_DWORD *)(v26 + 72);
  *(_DWORD *)(v26 + 60) = v31;
  v33 = v31 == v30;
  if ( v31 == v30 )
    v29 = *(_BYTE *)(v26 + 88);
  v34 = ((unsigned int)v31 + v32) & ~v32;
  *(_DWORD *)(v26 + 60) = v34;
  if ( v33 )
    *(_BYTE *)(v26 + 88) = v29 | 2;
  if ( v34 - *(_DWORD *)(v26 + 52) > (unsigned int)(v27 - *(_DWORD *)(v26 + 52)) )
  {
    v34 = v27;
    *(_DWORD *)(v26 + 60) = v27;
  }
  *(_DWORD *)(v26 + 56) = v34;
  memset(v30, 0, 0x90u);
  v35 = v50;
  v50 = 0;
  v30[35] = v35;
  sub_2ADCFC(v35, sub_11EC70, v30);
  sub_163200(*(_DWORD *)(*(_DWORD *)(dword_4872D8 + 344) + 36), v30[35]);
  v12 = v50 == 0;
  *(_DWORD *)(dword_4872D8 + 412) = v30;
  if ( !v12 )
    ((void (*)(void))loc_1625A8)();
  if ( v45 != v47 )
    sub_339E64(v45);
  if ( v5 )
    free(v5);
  free(v4);
  return v30;
}
