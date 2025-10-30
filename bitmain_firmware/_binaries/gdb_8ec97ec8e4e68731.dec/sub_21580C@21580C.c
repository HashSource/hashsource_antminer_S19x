void sub_21580C()
{
  _DWORD *v0; // r0
  _DWORD *v1; // r0
  int v2; // r3
  _DWORD *v3; // r3
  int v4; // r6
  int v5; // r0
  _DWORD *v6; // r0
  const char **v7; // r3
  int v8; // r1
  int v9; // r3
  const char **v10; // r4
  const char *v11; // r5
  int v12; // r3
  const char *v13; // r8
  int v14; // r0
  _DWORD *v15; // r4
  const void *v16; // r1
  unsigned int v17; // r5
  int v18; // r3
  int *v19; // r0
  _DWORD *v20; // r4
  _DWORD *v21; // r0
  _DWORD *v22; // r3
  _DWORD *v23; // r1
  _DWORD *v24; // r4
  size_t v25; // r7
  void *v26; // r0
  int v27; // r2
  int v28; // r3
  int v29; // r1
  int v30; // r0
  bool v31; // zf
  _DWORD *v32; // r7
  int v33; // r3
  int v34; // r0
  _DWORD *v35; // r4
  int v36; // r1
  int v37; // r3
  char v38; // r2
  _DWORD *v39; // r0
  int v40; // r12
  int v41; // r3
  int v42; // lr
  bool v43; // zf
  int v44; // r3
  void *v45; // r0
  _DWORD *v46; // r0
  _DWORD *v47; // r3
  _DWORD *v48; // r0
  _DWORD **v49; // r0
  int v50; // r1
  void *v51; // r3
  int v52; // r0
  __int64 v53; // r4
  int v54; // t1
  int v55; // r0
  const char *v56; // r0
  const char *v57; // r4
  int v58; // r0
  const char *v59; // r0
  _DWORD *dest; // [sp+8h] [bp-BCh] BYREF
  int *v61; // [sp+Ch] [bp-B8h]
  void (*v62)(); // [sp+10h] [bp-B4h]
  const char *v63; // [sp+14h] [bp-B0h]
  _DWORD *v64; // [sp+18h] [bp-ACh]
  int v65; // [sp+1Ch] [bp-A8h]
  _DWORD *v66; // [sp+24h] [bp-A0h]
  int v67; // [sp+28h] [bp-9Ch] BYREF
  __int64 ptr; // [sp+2Ch] [bp-98h] BYREF
  int v69; // [sp+34h] [bp-90h]
  _BYTE v70[80]; // [sp+38h] [bp-8Ch] BYREF
  int v71; // [sp+88h] [bp-3Ch]

  ptr = 0;
  v0 = *(_DWORD **)(dword_487D2C + 36);
  v69 = 0;
  v66 = v0;
  if ( !v0 )
    return;
  v63 = "`%s' has changed; re-reading symbols.\n";
  v62 = sub_2131D8;
  v61 = &dword_47ACA8;
  do
  {
    while ( 1 )
    {
      v2 = v0[9];
      if ( !v2 || v0[45] )
        goto LABEL_3;
      v3 = *(_DWORD **)(v2 + 140);
      if ( v3 )
        break;
      v55 = sub_1B87A8((int)v0);
      v31 = _xstat64(3, v55, v70) == 0;
      v1 = v66;
      if ( v31 )
        goto LABEL_10;
LABEL_51:
      v56 = (const char *)sub_1B87A8((int)v1);
      sub_259858("`%s' has disappeared; keeping its symbols.\n", v56);
LABEL_3:
      v1 = v66;
LABEL_4:
      v0 = (_DWORD *)*v1;
      v66 = v0;
      if ( !v0 )
        goto LABEL_42;
    }
    v31 = _xstat64(3, *v3, v70) == 0;
    v1 = v66;
    if ( !v31 )
      goto LABEL_51;
LABEL_10:
    v4 = v71;
    if ( v1[11] == v71 )
      goto LABEL_4;
    v5 = sub_1B87A8((int)v1);
    sub_259858(v63, v5);
    dest = v66;
    v64 = sub_9253C((int)v62, 0);
    v6 = v66;
    v7 = *(const char ***)(dword_487D2C + 8);
    if ( v7 )
    {
      v8 = j_strcmp(*(const char **)v66[9], *v7);
      v6 = v66;
      if ( !v8 )
      {
        sub_94D50(*(const char **)v66[9], 0);
        v6 = v66;
      }
    }
    sub_1B77DC((int)v6);
    sub_26CEFC(v66);
    v9 = v66[33];
    if ( v9 )
      (*(void (**)(void))(v9 + 16))();
    sub_1B6B00();
    v10 = (const char **)v66[9];
    v11 = *v10;
    ((void (__fastcall *)(int *, const char *, int, int))loc_16298C)(&v67, *v10, *v61, -1);
    v12 = v67;
    v67 = 0;
    v66[9] = v12;
    if ( !v12 )
      sub_946E0("Can't open %s to read symbols.", v11);
    ((void (__fastcall *)(const char **))loc_1625A8)(v10);
    v13 = (const char *)sub_327254(v66[1]);
    sub_9253C(2165736, (int)v13);
    v14 = sub_2AA86C(v66[9], 1);
    v15 = v66;
    if ( !v14 )
    {
      v57 = (const char *)sub_1B87A8((int)v66);
      v58 = sub_2A6910(v57);
      v59 = (const char *)sub_2A6920(v58);
      sub_946E0("Can't read symbols from %s: %s.", v57, v59);
    }
    v16 = (const void *)v66[36];
    v65 = v66[37];
    v17 = 4 * v65;
    memcpy(&dest, v16, 4 * v65);
    v18 = v15[30];
    v19 = (int *)v15[23];
    v15[28] = v15[27];
    v15[31] = v18;
    sub_1D055C(v19);
    v20 = v66;
    v21 = sub_1D0528();
    v22 = v66;
    v20[23] = v21;
    obstack_free((struct obstack *)(v22 + 12), 0);
    v23 = v66;
    v66[42] = 0;
    v23[5] = 0;
    v23[6] = 0;
    v23[7] = 0;
    v23[8] = 0;
    v23[52] = 0;
    obstack_begin((struct obstack *)(v23 + 12), 0, 0, (void *(*)(int))sub_93028, sub_210BE8);
    sub_1B6B2C((int)v66);
    v24 = v66;
    v25 = strlen(v13);
    v26 = (void *)v66[15];
    if ( v25 + 1 > v66[16] - (int)v26 )
    {
      obstack_newchunk((struct obstack *)(v66 + 12), v25 + 1);
      v26 = (void *)v24[15];
    }
    memcpy(v26, v13, v25);
    v27 = v24[15];
    v24[15] = v27 + v25 + 1;
    *(_BYTE *)(v27 + v25) = 0;
    v28 = v24[15];
    v29 = v24[14];
    v30 = v24[16];
    v31 = v28 == v29;
    v32 = v66;
    if ( v28 == v29 )
      LOBYTE(v27) = *((_BYTE *)v24 + 88);
    v33 = (v28 + v24[18]) & ~v24[18];
    v24[1] = v29;
    v24[15] = v33;
    if ( v31 )
      *((_BYTE *)v24 + 88) = v27 | 2;
    if ( v33 - v24[13] > (unsigned int)(v30 - v24[13]) )
    {
      v33 = v30;
      v24[15] = v30;
    }
    v24[14] = v33;
    v34 = sub_211A54(*(_DWORD *)(v32[9] + 4));
    ((void (__fastcall *)(_DWORD *, int))loc_21775C)(v32, v34);
    sub_1B6DCC((int)v66);
    sub_1B28A0((int)v66);
    v35 = v66;
    v36 = v66[16];
    v37 = v66[15];
    v38 = v36 - v37;
    if ( v17 > v36 - v37 )
    {
      obstack_newchunk((struct obstack *)(v66 + 12), v17);
      v37 = v35[15];
      v36 = v35[16];
    }
    v39 = v66;
    v40 = v35[14];
    v41 = v37 + v17;
    v42 = v35[18];
    v35[15] = v41;
    v43 = v41 == v40;
    v35[36] = v40;
    if ( v41 == v40 )
      v38 = *((_BYTE *)v35 + 88);
    v44 = (v41 + v42) & ~v42;
    v35[15] = v44;
    if ( v43 )
      *((_BYTE *)v35 + 88) = v38 | 2;
    v45 = (void *)v39[36];
    if ( v44 - v35[13] > (unsigned int)(v36 - v35[13]) )
    {
      v44 = v36;
      v35[15] = v36;
    }
    v35[14] = v44;
    memcpy(v45, &dest, v17);
    v46 = v66;
    v47 = *(_DWORD **)(dword_487D2C + 32);
    v66[37] = v65;
    if ( v46 == v47 )
    {
      (*(void (**)(void))v46[33])();
      v46 = v66;
    }
    (*(void (**)(void))(v46[33] + 4))();
    sub_F441C(&off_46D334, 1, 1);
    v66[3] &= ~0x10u;
    sub_1B85D4();
    sub_2137D8((int)v66, 0);
    if ( !sub_1B7AA4(v66) )
    {
      sub_259B58("");
      sub_259858("(no debugging symbols found)\n");
      sub_259B58("");
    }
    sub_F441C(&off_46D334, 0, 1);
    sub_15D778();
    sub_92640(v64);
    v48 = v66;
    v66[11] = v4;
    sub_210DCC((int)v48);
    if ( HIDWORD(ptr) == v69 )
    {
      sub_21622C(&ptr);
      goto LABEL_3;
    }
    v49 = (_DWORD **)v66;
    v50 = HIDWORD(ptr) + 4;
    if ( HIDWORD(ptr) )
    {
      *(_DWORD *)HIDWORD(ptr) = v66;
      v49 = (_DWORD **)v66;
    }
    HIDWORD(ptr) = v50;
    v0 = *v49;
    v66 = v0;
  }
  while ( v0 );
LABEL_42:
  v51 = (void *)HIDWORD(ptr);
  if ( (_DWORD)ptr != HIDWORD(ptr) )
  {
    sub_213188((char)v0);
    v53 = ptr;
    while ( HIDWORD(v53) != (_DWORD)v53 )
    {
      v54 = *(_DWORD *)v53;
      LODWORD(v53) = v53 + 4;
      v52 = sub_1B968C(v54);
    }
    sub_1B92D0(v52);
    v51 = (void *)ptr;
  }
  if ( v51 )
    sub_339E64(v51);
}
