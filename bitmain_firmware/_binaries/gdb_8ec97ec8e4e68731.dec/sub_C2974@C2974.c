_BYTE *__fastcall sub_C2974(_DWORD *a1, const char *a2, size_t a3, int a4)
{
  size_t v8; // r0
  int v9; // r1
  size_t v10; // r4
  _DWORD *v11; // r2
  void *v12; // r2
  int v13; // r3
  _BYTE *v14; // r5
  _BYTE *v15; // r4
  _DWORD *v17; // r0
  int v18; // r4
  int v19; // r1
  _DWORD *v20; // [sp+0h] [bp-F8h] BYREF
  size_t v21; // [sp+4h] [bp-F4h]
  _DWORD v22[4]; // [sp+8h] [bp-F0h] BYREF
  size_t v23; // [sp+18h] [bp-E0h] BYREF
  char v24; // [sp+1Ch] [bp-DCh]
  char v25; // [sp+1Dh] [bp-DBh]
  void *ptr; // [sp+20h] [bp-D8h]
  size_t v27; // [sp+24h] [bp-D4h]
  _DWORD v28[4]; // [sp+28h] [bp-D0h] BYREF
  void *v29; // [sp+38h] [bp-C0h]
  char v30; // [sp+40h] [bp-B8h] BYREF
  char v31; // [sp+54h] [bp-A4h]
  void *v32; // [sp+58h] [bp-A0h]
  char v33; // [sp+60h] [bp-98h] BYREF
  char v34; // [sp+70h] [bp-88h]
  void *v35; // [sp+74h] [bp-84h]
  char v36; // [sp+7Ch] [bp-7Ch] BYREF
  char v37; // [sp+8Ch] [bp-6Ch]
  void *v38; // [sp+90h] [bp-68h]
  char v39; // [sp+98h] [bp-60h] BYREF
  char v40; // [sp+A8h] [bp-50h]
  int v41; // [sp+E8h] [bp-10h]
  int v42; // [sp+ECh] [bp-Ch]
  _DWORD v43[2]; // [sp+F0h] [bp-8h]

  v20 = v22;
  if ( !a2 )
    sub_33D0B8("basic_string::_M_construct null not valid");
  v8 = strlen(a2);
  v10 = v8;
  v23 = v8;
  if ( v8 > 0xF )
  {
    v17 = (_DWORD *)sub_33B2BC(&v20, &v23, 0);
    v20 = v17;
    v22[0] = v23;
LABEL_26:
    v8 = (size_t)memcpy(v17, a2, v10);
    v10 = v23;
    v11 = v20;
    goto LABEL_5;
  }
  if ( v8 == 1 )
  {
    v11 = v22;
    LOBYTE(v22[0]) = *a2;
    goto LABEL_5;
  }
  if ( v8 )
  {
    v17 = v22;
    goto LABEL_26;
  }
  v11 = v22;
LABEL_5:
  v21 = v10;
  *((_BYTE *)v11 + v10) = 0;
  v12 = v20;
  v24 = 0;
  v25 = 0;
  ptr = v28;
  if ( v20 == v22 )
  {
    v8 = v22[0];
    v9 = v22[1];
    v12 = (void *)v22[2];
    v13 = v22[3];
  }
  else
  {
    v13 = v22[0];
  }
  v14 = (_BYTE *)a1[2];
  if ( v20 != v22 )
  {
    ptr = v12;
    v28[0] = v13;
  }
  v23 = a3;
  if ( v20 == v22 )
  {
    v28[0] = v8;
    v28[1] = v9;
    v28[2] = v12;
    v28[3] = v13;
  }
  v43[0] = 0;
  v27 = v21;
  v31 = 0;
  v34 = 0;
  v37 = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  *(_DWORD *)((char *)v43 + 3) = 0;
  if ( v14 )
  {
    v15 = (_BYTE *)sub_C2900(a1, (int)&v23, &v20);
    if ( v15 )
    {
      v14 = 0;
      do
      {
        if ( sub_21D9B0(v15[20] & 0x1F, v15[32] & 7, a4) )
        {
          v14 = v15;
          if ( (v15[33] & 2) == 0 )
            break;
        }
        v15 = (_BYTE *)sub_C294C((int)&v23, (int)&v20);
      }
      while ( v15 );
      goto LABEL_18;
    }
LABEL_44:
    v14 = 0;
    goto LABEL_18;
  }
  v18 = sub_C2900(a1, (int)&v23, &v20);
  if ( !v18 )
    goto LABEL_44;
  while ( 1 )
  {
    v19 = *(_BYTE *)(v18 + 32) & 7;
    if ( v19 == a4 )
      break;
    if ( sub_21D9B0(*(_BYTE *)(v18 + 20) & 0x1F, v19, a4) )
      v14 = (_BYTE *)v18;
    v18 = sub_C294C((int)&v23, (int)&v20);
    if ( !v18 )
      goto LABEL_18;
  }
  v14 = (_BYTE *)v18;
LABEL_18:
  if ( v40 )
  {
    v40 = 0;
    if ( v38 != &v39 )
      sub_339E64(v38);
  }
  if ( v37 )
  {
    v37 = 0;
    if ( v35 != &v36 )
      sub_339E64(v35);
  }
  if ( v34 )
  {
    v34 = 0;
    if ( v32 != &v33 )
      sub_339E64(v32);
  }
  if ( v31 )
  {
    v31 = 0;
    if ( v29 != &v30 )
      sub_339E64(v29);
  }
  if ( ptr != v28 )
    sub_339E64(ptr);
  return v14;
}
