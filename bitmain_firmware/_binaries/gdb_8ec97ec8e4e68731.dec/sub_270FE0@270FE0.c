_DWORD *__fastcall sub_270FE0(char *a1, _BYTE *a2, int a3, int a4)
{
  _DWORD *v8; // r5
  _DWORD *v9; // r4
  _BOOL4 v10; // r0
  int i; // r5
  int v12; // r10
  int v13; // r0
  unsigned int v14; // r0
  int *v15; // r11
  int v16; // r10
  int v17; // r12
  int v18; // r0
  int v19; // r1
  int v20; // r2
  int v21; // r3
  int v22; // r0
  size_t v23; // r0
  int v25; // r2
  void **v26; // r10
  void *v27; // r3
  void *v28; // r0
  _DWORD *v29; // r3
  unsigned int v30; // r10
  bool v31; // cc
  int v32; // r10
  int v33; // r2
  size_t v34; // r0
  size_t v35; // r0
  _DWORD *v36; // r6
  int v37; // r1
  int v38; // r2
  int v39; // r3
  int v40; // r8
  int v41; // r0
  void *v42; // r6
  int v43; // r5
  _DWORD *v44; // r0
  int v45; // r3
  int v46; // r0
  int *v47; // r0
  void *v48; // [sp+Ch] [bp-40h]
  _DWORD v49[6]; // [sp+10h] [bp-3Ch] BYREF
  _BYTE *v50; // [sp+28h] [bp-24h] BYREF
  void *ptr; // [sp+2Ch] [bp-20h] BYREF
  int v52; // [sp+30h] [bp-1Ch] BYREF
  int v53; // [sp+34h] [bp-18h] BYREF
  int v54; // [sp+38h] [bp-14h]
  int v55; // [sp+3Ch] [bp-10h]
  int v56; // [sp+40h] [bp-Ch]
  int v57; // [sp+44h] [bp-8h]

  v8 = sub_9836C(0x30u);
  *v8 = 0;
  v8[1] = 0;
  v8[2] = 0;
  v8[3] = 0;
  v8[4] = 0;
  v8[5] = 0;
  v8[6] = 0;
  v8[7] = 0;
  *((_BYTE *)v8 + 32) = 0;
  v8[9] = 0;
  v8[10] = 0;
  v8[11] = 0;
  *((_BYTE *)v8 + 33) = 1;
  v9 = sub_9836C(0x9Cu);
  sub_26FFD0((int)v9, (int)v8);
  if ( !a2 )
    goto LABEL_14;
  v53 = 0;
  v54 = 0;
  v55 = 0;
  v56 = 0;
  v57 = 0;
  v10 = sub_15D504(0);
  i = v10;
  if ( !v10 )
  {
    if ( a4 == 2 )
    {
      v16 = 0;
      v15 = 0;
      *(_BYTE *)(v9[26] + 32) = 1;
      goto LABEL_19;
    }
    goto LABEL_18;
  }
  if ( (unsigned int)(a4 - 1) > 1 )
  {
    if ( a3 )
    {
      for ( i = sub_15F70C(v10); i; i = ((int (__fastcall *)(int))loc_15FA88)(i) )
      {
        v12 = sub_15D898(i);
        v13 = sub_15ECB4(i);
        v14 = ((int (__fastcall *)(int))loc_16666C)(v13);
        if ( v14 <= 0x1F )
          v12 &= ~(-1 << v14);
        if ( a3 == v12 )
          goto LABEL_11;
      }
    }
LABEL_18:
    i = 0;
    v16 = 0;
    v15 = 0;
    goto LABEL_19;
  }
  v46 = sub_15F7E8(0);
  i = v46;
  if ( a4 == 2 )
    *(_BYTE *)(v9[26] + 32) = 1;
  if ( !v46 )
    goto LABEL_18;
LABEL_11:
  v15 = sub_C32A8(i, 0);
  v16 = sub_15DDFC(i);
LABEL_19:
  v50 = a2;
  dword_487CE0 = 0;
  v48 = sub_92E28();
  v25 = v16;
  v26 = (void **)v9[26];
  sub_1C427C((char **)&ptr, &v50, v25, (void ***)v15, 0);
  v27 = ptr;
  ptr = 0;
  v28 = *v26;
  *v26 = v27;
  if ( v28 )
    free(v28);
  if ( ptr )
    free(ptr);
  sub_92E40((int)v48);
  v29 = (_DWORD *)v9[26];
  v30 = *(_DWORD *)(*v29 + 16);
  v31 = v30 > 0x58;
  if ( v30 != 88 )
    v31 = v30 - 93 > 1;
  v32 = !v31;
  if ( !v31 )
  {
    v47 = (int *)sub_242FB4();
    sub_2594B0(*v47, "Attempt to use a type name as an expression.\n");
    goto LABEL_36;
  }
  v33 = dword_487CE0;
  v9[27] = v32;
  v29[1] = v33;
  v34 = strlen(a2);
  sub_33BC54((int)v9, v32, v9[1], a2, v34);
  v35 = strlen(a2);
  sub_33BC54((int)(v9 + 6), 0, v9[7], a2, v35);
  if ( dword_487CE0 )
  {
    if ( !i )
      sub_946E0("Failed to find the specified frame");
    v36 = (_DWORD *)v9[26];
    ((void (__fastcall *)(_DWORD *, int))loc_15CFA0)(v49, i);
    v37 = v49[1];
    v38 = v49[2];
    v39 = v49[3];
    v40 = v9[26];
    v36[2] = v49[0];
    v36[3] = v37;
    v36[4] = v38;
    v36[5] = v39;
    v36[6] = v49[4];
    *(_DWORD *)(v40 + 28) = sub_23E578();
    v41 = sub_15F7E8(0);
    ((void (__fastcall *)(int *, int))loc_15CFA0)(&v53, v41);
    sub_15E10C(i);
  }
  v42 = sub_92E28();
  v43 = sub_14CD3C(*(int **)v9[26]);
  sub_92E40((int)v42);
  if ( v43 )
  {
    v52 = 0;
    v44 = (_DWORD *)sub_26EDE8(v43, 0, &v52);
    v45 = v52;
    v9[19] = v44;
    if ( v45 )
      v43 = sub_2647C8(v44, v43);
  }
  else
  {
    v43 = 0;
  }
  *(_DWORD *)(v9[26] + 36) = *(_DWORD *)(**(_DWORD **)v9[26] + 156);
  sub_270830((int)v9, v43, 1);
  v17 = v57;
  v18 = v53;
  v19 = v54;
  v20 = v55;
  v21 = v56;
  *(_DWORD *)(v9[26] + 40) = v9;
  if ( sub_15CD58(v18, v19, v20, v21, v17) )
  {
    v22 = sub_15FE8C(v53, v54, v55, v56, v57);
    sub_15E10C(v22);
  }
LABEL_14:
  if ( !a1 )
    return v9;
  v23 = strlen(a1);
  sub_33BC54((int)(v9 + 12), 0, v9[13], a1, v23);
  if ( sub_26FA70(v9) )
    return v9;
LABEL_36:
  sub_2700DC((int)v9);
  sub_33AC04(v9);
  return 0;
}
