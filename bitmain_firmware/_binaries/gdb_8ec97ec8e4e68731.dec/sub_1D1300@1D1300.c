int __fastcall sub_1D1300(_DWORD *a1, int a2, int a3, int a4)
{
  bool v4; // zf
  char *v5; // r6
  _BOOL4 v8; // r9
  int v9; // r3
  int v10; // r4
  int v11; // r11
  int v12; // r10
  int v13; // r0
  int v14; // r0
  _DWORD v17[2]; // [sp+10h] [bp-FCh] BYREF
  _DWORD v18[3]; // [sp+18h] [bp-F4h] BYREF
  int v19; // [sp+24h] [bp-E8h]
  int v20; // [sp+28h] [bp-E4h]
  char v21; // [sp+2Ch] [bp-E0h]
  char v22; // [sp+2Dh] [bp-DFh]
  void *ptr; // [sp+30h] [bp-DCh]
  int v24; // [sp+34h] [bp-D8h]
  _DWORD v25[4]; // [sp+38h] [bp-D4h] BYREF
  void *v26; // [sp+48h] [bp-C4h]
  char v27; // [sp+50h] [bp-BCh] BYREF
  char v28; // [sp+64h] [bp-A8h]
  void *v29; // [sp+68h] [bp-A4h]
  char v30; // [sp+70h] [bp-9Ch] BYREF
  char v31; // [sp+80h] [bp-8Ch]
  void *v32; // [sp+84h] [bp-88h]
  char v33; // [sp+8Ch] [bp-80h] BYREF
  char v34; // [sp+9Ch] [bp-70h]
  void *v35; // [sp+A0h] [bp-6Ch]
  char v36; // [sp+A8h] [bp-64h] BYREF
  char v37; // [sp+B8h] [bp-54h]
  int v38; // [sp+F8h] [bp-14h]
  int v39; // [sp+FCh] [bp-10h]
  _DWORD v40[3]; // [sp+100h] [bp-Ch]

  v5 = (char *)a3;
  v4 = a3 == 0;
  v8 = a2 == 0;
  if ( !a3 )
    a3 = -1;
  v17[0] = v18;
  if ( !v4 )
    a3 = (int)&v5[strlen(v5)];
  sub_1CF018(v17, v5, a3);
  v21 = 0;
  v22 = 0;
  ptr = v25;
  v20 = 1;
  if ( (_DWORD *)v17[0] == v18 )
  {
    v9 = v19;
    v25[0] = v18[0];
    v25[1] = v18[1];
    v25[2] = v18[2];
    v25[3] = v19;
  }
  else
  {
    v9 = v18[0];
    ptr = (void *)v17[0];
  }
  if ( (_DWORD *)v17[0] != v18 )
    v25[0] = v9;
  v40[0] = 0;
  v28 = 0;
  v31 = 0;
  v34 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  *(_DWORD *)((char *)v40 + 3) = 0;
  v24 = v17[1];
  v10 = sub_1D0878(a1, 1)[6];
  if ( !v10 )
  {
    v11 = 0;
    goto LABEL_21;
  }
  v11 = 0;
  while ( 1 )
  {
    if ( *(_BYTE *)(v10 + 52) || !sub_1D0098((int)a1, (_DWORD *)v10, v5, v8, a4) )
      goto LABEL_12;
    v17[0] = 0;
    v12 = sub_1CE1F0((int)a1, v10);
    v13 = sub_C2F00(
            *(_DWORD **)(*(_DWORD *)(v12 + 32) + 4 * (a2 + 2)),
            v5,
            a4,
            (int (__fastcall *)(int, int))sub_C322C,
            (int)v17);
    if ( v13 )
    {
      if ( sub_21B7F8(v13) )
        break;
    }
    if ( v17[0] )
    {
      v14 = sub_21B7F8(v17[0]);
      v10 = *(_DWORD *)v10;
      if ( v14 )
        v11 = v12;
      if ( !v10 )
        goto LABEL_21;
    }
    else
    {
LABEL_12:
      v10 = *(_DWORD *)v10;
      if ( !v10 )
        goto LABEL_21;
    }
  }
  v11 = v12;
LABEL_21:
  if ( !v37 || (v37 = 0, v35 == &v36) )
  {
    if ( v34 )
      goto LABEL_30;
    goto LABEL_23;
  }
  sub_339E64(v35);
  if ( !v34 )
    goto LABEL_23;
LABEL_30:
  v34 = 0;
  if ( v32 == &v33 )
  {
LABEL_23:
    if ( v31 )
      goto LABEL_32;
    goto LABEL_24;
  }
  sub_339E64(v32);
  if ( v31 )
  {
LABEL_32:
    v31 = 0;
    if ( v29 != &v30 )
    {
      sub_339E64(v29);
      if ( v28 )
        goto LABEL_34;
      goto LABEL_25;
    }
  }
LABEL_24:
  if ( v28 )
  {
LABEL_34:
    v28 = 0;
    if ( v26 != &v27 )
      sub_339E64(v26);
  }
LABEL_25:
  if ( ptr != v25 )
    sub_339E64(ptr);
  return v11;
}
