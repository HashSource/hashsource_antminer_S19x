bool __fastcall sub_A6B40(int a1, int a2, int a3, int a4)
{
  int (__fastcall *v7)(int, int, _DWORD); // r8
  _DWORD *i; // r4
  _BYTE *v9; // r3
  int v10; // r0
  char *v12; // r11
  int v13; // r2
  _BYTE *v14; // r0
  _DWORD *v15; // r3
  _DWORD *v16; // r1
  int v17; // r2
  int v18; // r2
  void *v19; // r0
  unsigned int v20; // [sp+8h] [bp-104h]
  _DWORD v22[2]; // [sp+10h] [bp-FCh] BYREF
  _DWORD v23[4]; // [sp+18h] [bp-F4h] BYREF
  int v24; // [sp+28h] [bp-E4h] BYREF
  char v25; // [sp+2Ch] [bp-E0h]
  char v26; // [sp+2Dh] [bp-DFh]
  void *ptr; // [sp+30h] [bp-DCh]
  int v28; // [sp+34h] [bp-D8h]
  _DWORD v29[4]; // [sp+38h] [bp-D4h] BYREF
  void *v30; // [sp+48h] [bp-C4h]
  char v31; // [sp+50h] [bp-BCh] BYREF
  char v32; // [sp+64h] [bp-A8h]
  void *v33; // [sp+68h] [bp-A4h]
  char v34; // [sp+70h] [bp-9Ch] BYREF
  char v35; // [sp+80h] [bp-8Ch]
  void *v36; // [sp+84h] [bp-88h]
  char v37; // [sp+8Ch] [bp-80h] BYREF
  char v38; // [sp+9Ch] [bp-70h]
  void *v39; // [sp+A0h] [bp-6Ch]
  char v40; // [sp+A8h] [bp-64h] BYREF
  char v41; // [sp+B8h] [bp-54h]
  int v42; // [sp+F8h] [bp-14h]
  int v43; // [sp+FCh] [bp-10h]
  _DWORD v44[3]; // [sp+100h] [bp-Ch]

  v20 = (unsigned int)(*(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 8)) >> 3;
  if ( *(_DWORD *)a3 == 2 )
  {
    v7 = (int (__fastcall *)(int, int, _DWORD))sub_9AA4C;
  }
  else if ( *(_BYTE *)(a3 + 4) )
  {
    v7 = (int (__fastcall *)(int, int, _DWORD))sub_A4604;
  }
  else
  {
    v7 = (int (__fastcall *)(int, int, _DWORD))sub_A4320(a3);
  }
  for ( i = (_DWORD *)sub_C2618(a2); i; i = (_DWORD *)i[4] )
  {
    if ( i[5] || *i && *(_BYTE *)*i )
      continue;
    v9 = (_BYTE *)i[1];
    if ( v9 )
    {
      if ( *v9 )
        continue;
    }
    v10 = i[2];
    i[5] = 1;
    if ( !v10 )
      v10 = i[3];
    if ( !v7(v10, a3, 0) )
      goto LABEL_14;
    v12 = (char *)i[3];
    v22[0] = v23;
    if ( v12 )
      v13 = (int)&v12[strlen(v12)];
    else
      v13 = -1;
    v14 = sub_9D8E0(v22, v12, v13);
    v15 = (_DWORD *)v22[0];
    v16 = v23;
    v17 = *(_DWORD *)a3;
    ptr = v29;
    if ( (_DWORD *)v22[0] == v23 )
      v15 = v23;
    v24 = v17;
    if ( (_DWORD *)v22[0] == v23 )
    {
      v14 = (_BYTE *)*v15;
      v16 = (_DWORD *)v15[1];
      v18 = v15[2];
      v15 = (_DWORD *)v15[3];
    }
    else
    {
      v18 = v23[0];
      ptr = v15;
    }
    if ( (_DWORD *)v22[0] == v23 )
    {
      v29[0] = v14;
      v29[1] = v16;
      v29[2] = v18;
      v29[3] = v15;
    }
    else
    {
      v29[0] = v18;
    }
    v44[0] = 0;
    v25 = 0;
    v26 = 0;
    v32 = 0;
    v35 = 0;
    v38 = 0;
    v41 = 0;
    v42 = 0;
    v43 = 0;
    *(_DWORD *)((char *)v44 + 3) = 0;
    v28 = v22[1];
    sub_A48FC(a1, a2, (int)&v24, a4, 1, 0);
    if ( !v41 || (v41 = 0, v39 == &v40) )
    {
      if ( !v38 )
        goto LABEL_30;
    }
    else
    {
      sub_339E64(v39);
      if ( !v38 )
      {
LABEL_30:
        if ( !v35 )
          goto LABEL_31;
        goto LABEL_34;
      }
    }
    v38 = 0;
    if ( v36 == &v37 )
      goto LABEL_30;
    sub_339E64(v36);
    if ( !v35 )
    {
LABEL_31:
      if ( v32 )
        goto LABEL_43;
      goto LABEL_32;
    }
LABEL_34:
    v35 = 0;
    if ( v33 == &v34 )
      goto LABEL_31;
    sub_339E64(v33);
    if ( v32 )
    {
LABEL_43:
      v32 = 0;
      if ( v30 != &v31 )
      {
        sub_339E64(v30);
        v19 = ptr;
        if ( ptr == v29 )
          goto LABEL_14;
LABEL_33:
        sub_339E64(v19);
        goto LABEL_14;
      }
    }
LABEL_32:
    v19 = ptr;
    if ( ptr != v29 )
      goto LABEL_33;
LABEL_14:
    i[5] = 0;
  }
  return v20 != (unsigned int)(*(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 8)) >> 3;
}
