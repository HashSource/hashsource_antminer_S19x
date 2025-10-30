int __fastcall sub_11066C(int a1, unsigned int a2, int a3, int *a4, _QWORD *a5, _DWORD *a6, _DWORD *a7, _DWORD *a8)
{
  _QWORD **v10; // r0
  int v11; // r4
  void *v12; // r8
  size_t v13; // r6
  int v14; // r11
  int v15; // r10
  void *v16; // r0
  void *v17; // r3
  void **v18; // r6
  bool v19; // zf
  void *v20; // r8
  int v21; // r1
  int v22; // r5
  int v23; // r2
  int v24; // r3
  void **v25; // r4
  void **v26; // r4
  int v28; // r0
  void **v29; // r6
  int v30; // r6
  void **v31; // r10
  void **v32; // r7
  void *v33; // r11
  int v34; // r7
  int v35; // r0
  void *v36; // r8
  int v37; // r8
  void **v38; // r3
  void *v39; // r9
  void *v40; // r9
  __int64 v41; // [sp+8h] [bp-9Ch]
  void **v42; // [sp+8h] [bp-9Ch]
  void *v43; // [sp+8h] [bp-9Ch]
  int v44; // [sp+10h] [bp-94h]
  void **v45; // [sp+10h] [bp-94h]
  int v46; // [sp+14h] [bp-90h]
  void *v47; // [sp+18h] [bp-8Ch]
  int v49; // [sp+20h] [bp-84h] BYREF
  unsigned int v50; // [sp+24h] [bp-80h] BYREF
  void *src; // [sp+28h] [bp-7Ch] BYREF
  void *v52; // [sp+2Ch] [bp-78h]
  __int64 v53; // [sp+30h] [bp-74h]
  int v54; // [sp+38h] [bp-6Ch]
  int v55; // [sp+3Ch] [bp-68h]
  int v56; // [sp+40h] [bp-64h]
  int v57; // [sp+44h] [bp-60h]
  void *v58; // [sp+48h] [bp-5Ch]
  void *ptr[2]; // [sp+58h] [bp-4Ch] BYREF
  __int64 v60; // [sp+60h] [bp-44h]
  int v61; // [sp+68h] [bp-3Ch]
  int v62; // [sp+6Ch] [bp-38h]
  int v63; // [sp+70h] [bp-34h]
  int v64; // [sp+74h] [bp-30h]
  void *v65; // [sp+78h] [bp-2Ch]
  char v66; // [sp+99h] [bp-Bh]

  v50 = a2;
  v10 = (_QWORD **)((int (__fastcall *)(unsigned int *, int *))loc_110388)(&v50, &v49);
  v11 = (int)v10;
  if ( !v10 )
    sub_946E0("Could not compute CFA; needed to translate this expression");
  sub_10FC0C((int)&src, v50, *v10);
  sub_10EA4C((int)&src, v11);
  sub_10ED98((unsigned __int8 *)v11, *(char **)(*(_DWORD *)v11 + 40), *(_DWORD *)(*(_DWORD *)v11 + 44), a1, a2, &src);
  v12 = v52;
  v41 = v53;
  v13 = 24 * (_DWORD)v52;
  v44 = v54;
  v46 = v55;
  v14 = v56;
  v15 = v57;
  v47 = v58;
  v16 = sub_93028(24 * (_DWORD)v52);
  v17 = memcpy(v16, src, v13);
  v18 = (void **)v65;
  v60 = v41;
  v19 = v65 == 0;
  ptr[1] = v12;
  v63 = v14;
  v20 = ptr[0];
  v61 = v44;
  v62 = v46;
  v64 = v15;
  v65 = v47;
  ptr[0] = v17;
  if ( !v19 )
  {
    v31 = (void **)v18[8];
    if ( v31 )
    {
      v33 = v31[8];
      if ( v33 )
      {
        v38 = (void **)*((_DWORD *)v33 + 8);
        if ( v38 )
        {
          if ( v38[8] )
          {
            v45 = (void **)*((_DWORD *)v33 + 8);
            v43 = v38[8];
            sub_1118BC(v43);
            sub_33AC04(v43);
            v38 = v45;
          }
          if ( *v38 )
          {
            v42 = v38;
            free(*v38);
            v38 = v42;
          }
          sub_33AC04(v38);
        }
        if ( *(_DWORD *)v33 )
          free(*(void **)v33);
        sub_33AC04(v33);
      }
      if ( *v31 )
        free(*v31);
      sub_33AC04(v31);
    }
    if ( *v18 )
      free(*v18);
    sub_33AC04(v18);
  }
  if ( v20 )
    free(v20);
  sub_10ED98((unsigned __int8 *)v11, *(char **)(v11 + 12), *(_DWORD *)(v11 + 16), a1, a2, &src);
  if ( v56 == 1 )
  {
    v28 = sub_117648(a1, v21, v54, v55);
    v19 = v66 == 0;
    *a4 = v28;
    if ( !v19 )
    {
      v25 = (void **)v65;
      v22 = 1;
      v19 = v65 == 0;
      *a5 = -v53;
      if ( v19 )
        goto LABEL_10;
      goto LABEL_18;
    }
    v22 = 1;
    *a5 = v53;
  }
  else
  {
    if ( v56 != 2 )
    {
      sub_94700((int)"dwarf2-frame.c", 915, "Unknown CFA rule.");
      sub_1118BC(ptr);
      v35 = sub_1118BC(&src);
      sub_338FFC(v35);
    }
    v22 = 0;
    v23 = v57;
    v24 = v54;
    *a6 = v49;
    *a7 = v23;
    *a8 = v23 + v24;
  }
  v25 = (void **)v65;
  if ( !v65 )
    goto LABEL_10;
LABEL_18:
  v29 = (void **)v25[8];
  if ( v29 )
  {
    v32 = (void **)v29[8];
    if ( v32 )
    {
      v36 = (int)v32[8];
      if ( v36 )
      {
        v40 = *(void **)(v36 + 32);
        if ( v40 )
        {
          sub_1118BC(*(_DWORD *)(v36 + 32));
          sub_33AC04(v40);
        }
        if ( *(_DWORD *)v36 )
          free(*(void **)v36);
        sub_33AC04((void *)v36);
      }
      if ( *v32 )
        free(*v32);
      sub_33AC04(v32);
    }
    if ( *v29 )
      free(*v29);
    sub_33AC04(v29);
  }
  if ( *v25 )
    free(*v25);
  sub_33AC04(v25);
LABEL_10:
  if ( ptr[0] )
    free(ptr[0]);
  v26 = (void **)v58;
  if ( v58 )
  {
    v30 = *((_DWORD *)v58 + 8);
    if ( v30 )
    {
      v34 = *(_DWORD *)(v30 + 32);
      if ( v34 )
      {
        v37 = *(_DWORD *)(v34 + 32);
        if ( v37 )
        {
          v39 = *(void **)(v37 + 32);
          if ( v39 )
          {
            sub_1118BC(*(_DWORD *)(v37 + 32));
            sub_33AC04(v39);
          }
          if ( *(_DWORD *)v37 )
            free(*(void **)v37);
          sub_33AC04((void *)v37);
        }
        if ( *(_DWORD *)v34 )
          free(*(void **)v34);
        sub_33AC04((void *)v34);
      }
      if ( *(_DWORD *)v30 )
        free(*(void **)v30);
      sub_33AC04((void *)v30);
    }
    if ( *v26 )
      free(*v26);
    sub_33AC04(v26);
  }
  if ( src )
    free(src);
  return v22;
}
