_DWORD *__fastcall sub_A43A0(_DWORD *a1, char *a2)
{
  int v4; // r6
  size_t v5; // r0
  _BYTE *v6; // r0
  int v7; // r1
  int v8; // r3
  int v9; // r2
  int v10; // r4
  int v11; // t1
  _DWORD *i; // r6
  int (*v14)(void); // r5
  _DWORD v15[2]; // [sp+0h] [bp-FCh] BYREF
  _DWORD v16[4]; // [sp+8h] [bp-F4h] BYREF
  _BOOL4 v17; // [sp+18h] [bp-E4h] BYREF
  char v18; // [sp+1Ch] [bp-E0h]
  char v19; // [sp+1Dh] [bp-DFh]
  void *ptr; // [sp+20h] [bp-DCh]
  int v21; // [sp+24h] [bp-D8h]
  _DWORD v22[4]; // [sp+28h] [bp-D4h] BYREF
  void *v23; // [sp+38h] [bp-C4h]
  char v24; // [sp+40h] [bp-BCh] BYREF
  char v25; // [sp+54h] [bp-A8h]
  void *v26; // [sp+58h] [bp-A4h]
  char v27; // [sp+60h] [bp-9Ch] BYREF
  char v28; // [sp+70h] [bp-8Ch]
  void *v29; // [sp+74h] [bp-88h]
  char v30; // [sp+7Ch] [bp-80h] BYREF
  char v31; // [sp+8Ch] [bp-70h]
  void *v32; // [sp+90h] [bp-6Ch]
  char v33; // [sp+98h] [bp-64h] BYREF
  char v34; // [sp+A8h] [bp-54h]
  int v35; // [sp+E8h] [bp-14h]
  int v36; // [sp+ECh] [bp-10h]
  _DWORD v37[3]; // [sp+F0h] [bp-Ch]

  *a1 = 0;
  a1[1] = 0;
  v4 = sub_338BD4(a2, &dword_3C439C);
  v15[0] = v16;
  v5 = strlen(a2);
  v6 = sub_9D8E0(v15, a2, (int)&a2[v5]);
  v8 = v15[0];
  v18 = 0;
  ptr = v22;
  v17 = v4 != 0;
  if ( (_DWORD *)v15[0] == v16 )
  {
    v6 = *(_BYTE **)v15[0];
    v7 = *(_DWORD *)(v15[0] + 4);
    v9 = *(_DWORD *)(v15[0] + 8);
    v8 = *(_DWORD *)(v15[0] + 12);
  }
  else
  {
    v9 = v16[0];
    ptr = (void *)v15[0];
  }
  if ( (_DWORD *)v15[0] == v16 )
  {
    v22[0] = v6;
    v22[1] = v7;
    v22[2] = v9;
    v22[3] = v8;
  }
  else
  {
    v22[0] = v9;
  }
  v37[0] = 0;
  v19 = 0;
  v25 = 0;
  v28 = 0;
  v31 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  *(_DWORD *)((char *)v37 + 3) = 0;
  v21 = v15[1];
  v14 = (int (*)(void))sub_A4320((int)&v17);
  for ( i = *(_DWORD **)(dword_487D2C + 36); i; i = (_DWORD *)*i )
  {
    while ( 1 )
    {
      v10 = *(_DWORD *)(i[10] + 80);
      if ( *(_DWORD *)v10 )
        break;
LABEL_12:
      i = (_DWORD *)*i;
      if ( !i )
        goto LABEL_13;
    }
    while ( !v14() || (*(_BYTE *)(v10 + 32) & 0xF) == 7 )
    {
      v11 = *(_DWORD *)(v10 + 48);
      v10 += 48;
      if ( !v11 )
        goto LABEL_12;
    }
    *a1 = v10;
    a1[1] = i;
  }
LABEL_13:
  if ( !v34 || (v34 = 0, v32 == &v33) )
  {
    if ( !v31 )
      goto LABEL_15;
  }
  else
  {
    sub_339E64(v32);
    if ( !v31 )
      goto LABEL_15;
  }
  v31 = 0;
  if ( v29 != &v30 )
  {
    sub_339E64(v29);
    if ( !v28 )
      goto LABEL_16;
    goto LABEL_26;
  }
LABEL_15:
  if ( !v28 )
    goto LABEL_16;
LABEL_26:
  v28 = 0;
  if ( v26 != &v27 )
  {
    sub_339E64(v26);
    if ( !v25 )
      goto LABEL_17;
    goto LABEL_28;
  }
LABEL_16:
  if ( !v25 )
    goto LABEL_17;
LABEL_28:
  v25 = 0;
  if ( v23 != &v24 )
    sub_339E64(v23);
LABEL_17:
  if ( ptr != v22 )
    sub_339E64(ptr);
  return a1;
}
