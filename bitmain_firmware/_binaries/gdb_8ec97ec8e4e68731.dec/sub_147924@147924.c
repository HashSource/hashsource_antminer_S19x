_DWORD *__fastcall sub_147924(int a1, _BYTE *a2, char *a3, int a4)
{
  int v7; // r2
  _BYTE *v8; // r0
  _DWORD *v9; // r12
  _DWORD *v10; // r2
  int v11; // r1
  bool v12; // zf
  _BYTE *v13; // r3
  _DWORD *v14; // r6
  int v15; // r0
  int v16; // r3
  int v17; // r0
  int v18; // r5
  int v20; // [sp+Ch] [bp-108h] BYREF
  _DWORD *v21; // [sp+10h] [bp-104h] BYREF
  int v22; // [sp+14h] [bp-100h]
  _BYTE *v23; // [sp+18h] [bp-FCh] BYREF
  int v24; // [sp+1Ch] [bp-F8h]
  _DWORD *v25; // [sp+20h] [bp-F4h] BYREF
  _BYTE *v26; // [sp+24h] [bp-F0h]
  int v27; // [sp+28h] [bp-ECh]
  int v28; // [sp+2Ch] [bp-E8h]
  int v29; // [sp+30h] [bp-E4h]
  char v30; // [sp+34h] [bp-E0h]
  char v31; // [sp+35h] [bp-DFh]
  void *ptr; // [sp+38h] [bp-DCh]
  int v33; // [sp+3Ch] [bp-D8h]
  _DWORD v34[4]; // [sp+40h] [bp-D4h] BYREF
  void *v35; // [sp+50h] [bp-C4h]
  char v36; // [sp+58h] [bp-BCh] BYREF
  char v37; // [sp+6Ch] [bp-A8h]
  void *v38; // [sp+70h] [bp-A4h]
  char v39; // [sp+78h] [bp-9Ch] BYREF
  char v40; // [sp+88h] [bp-8Ch]
  void *v41; // [sp+8Ch] [bp-88h]
  char v42; // [sp+94h] [bp-80h] BYREF
  char v43; // [sp+A4h] [bp-70h]
  void *v44; // [sp+A8h] [bp-6Ch]
  char v45; // [sp+B0h] [bp-64h] BYREF
  char v46; // [sp+C0h] [bp-54h]
  int v47; // [sp+100h] [bp-14h]
  int v48; // [sp+104h] [bp-10h]
  _DWORD v49[3]; // [sp+108h] [bp-Ch]

  ((void (*)(void))loc_11EB1C)();
  v21 = &v23;
  if ( a3 )
    v7 = (int)&a3[strlen(a3)];
  else
    v7 = -1;
  v8 = sub_12425C(&v21, a3, v7);
  v10 = v21;
  v11 = 1;
  v30 = 0;
  v31 = 0;
  v12 = v21 == &v23;
  ptr = v34;
  v29 = 1;
  if ( v21 == &v23 )
  {
    v9 = v34;
    v8 = v23;
    v11 = v24;
    v10 = v25;
    v13 = v26;
  }
  else
  {
    ptr = v21;
    v13 = v23;
  }
  if ( v21 == &v23 )
  {
    *v9 = v8;
    v9[1] = v11;
    v9[2] = v10;
    v9[3] = v13;
  }
  if ( !v12 )
    v34[0] = v13;
  v49[0] = 0;
  v14 = *(_DWORD **)(dword_4872D8 + 420);
  v37 = 0;
  v40 = 0;
  v43 = 0;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  *(_DWORD *)((char *)v49 + 3) = 0;
  v33 = v22;
  if ( !v14 )
    goto LABEL_27;
  v21 = v14;
  v23 = a2;
  v24 = a4;
  v26 = 0;
  v28 = 0;
  v22 = 1;
  v15 = sub_124404(v14, a3, &v25);
  v14 = 0;
  if ( v15 )
    v16 = *v25;
  else
    v25 = 0;
  if ( v15 )
    v27 = v16;
  else
    v27 = 0;
LABEL_18:
  v17 = sub_11E1D8(&v21);
  if ( v17 )
  {
    while ( 1 )
    {
      v20 = 0;
      v18 = sub_147398(v17);
      if ( sub_C2F00(
             *(_DWORD **)(*(_DWORD *)(v18 + 32) + 4 * (_DWORD)(a2 + 2)),
             a3,
             a4,
             (int (__fastcall *)(int, int))sub_C322C,
             (int)&v20) )
      {
        if ( sub_21B7F8() )
          break;
      }
      if ( !v20 )
        goto LABEL_18;
      if ( sub_21B7F8() )
        v14 = (_DWORD *)v18;
      v17 = sub_11E1D8(&v21);
      if ( !v17 )
        goto LABEL_25;
    }
    v14 = (_DWORD *)v18;
  }
LABEL_25:
  if ( v46 )
  {
    v46 = 0;
    if ( v44 != &v45 )
      sub_339E64(v44);
  }
  if ( v43 && (v43 = 0, v41 != &v42) )
  {
    sub_339E64(v41);
    if ( !v40 )
      goto LABEL_28;
  }
  else
  {
LABEL_27:
    if ( !v40 )
      goto LABEL_28;
  }
  v40 = 0;
  if ( v38 != &v39 )
  {
    sub_339E64(v38);
    if ( !v37 )
      goto LABEL_29;
    goto LABEL_36;
  }
LABEL_28:
  if ( !v37 )
    goto LABEL_29;
LABEL_36:
  v37 = 0;
  if ( v35 != &v36 )
    sub_339E64(v35);
LABEL_29:
  if ( ptr != v34 )
    sub_339E64(ptr);
  return v14;
}
