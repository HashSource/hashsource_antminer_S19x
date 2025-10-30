int __fastcall sub_A692C(char *a1, _QWORD *a2, int a3)
{
  _BYTE *v5; // r0
  char **v6; // r2
  int v7; // r1
  int v8; // r3
  int v9; // r0
  int v10; // r4
  void *v11; // r0
  void *v12; // r8
  int v13; // r4
  int v14; // r0
  char **v16[2]; // [sp+8h] [bp-F8h] BYREF
  _DWORD v17[4]; // [sp+10h] [bp-F0h] BYREF
  int v18; // [sp+20h] [bp-E0h] BYREF
  char v19; // [sp+24h] [bp-DCh]
  char v20; // [sp+25h] [bp-DBh]
  void *ptr; // [sp+28h] [bp-D8h]
  char **v22; // [sp+2Ch] [bp-D4h]
  _DWORD v23[4]; // [sp+30h] [bp-D0h] BYREF
  void *v24; // [sp+40h] [bp-C0h]
  char v25; // [sp+48h] [bp-B8h] BYREF
  char v26; // [sp+5Ch] [bp-A4h]
  void *v27; // [sp+60h] [bp-A0h]
  char v28; // [sp+68h] [bp-98h] BYREF
  char v29; // [sp+78h] [bp-88h]
  void *v30; // [sp+7Ch] [bp-84h]
  char v31; // [sp+84h] [bp-7Ch] BYREF
  char v32; // [sp+94h] [bp-6Ch]
  void *v33; // [sp+98h] [bp-68h]
  char v34; // [sp+A0h] [bp-60h] BYREF
  char v35; // [sp+B0h] [bp-50h]
  int v36; // [sp+F0h] [bp-10h]
  int v37; // [sp+F4h] [bp-Ch]
  _DWORD v38[2]; // [sp+F8h] [bp-8h]

  if ( !a1 )
    a3 = -1;
  v16[0] = (char **)v17;
  if ( a1 )
    a3 = (int)&a1[strlen(a1)];
  v5 = sub_9D8E0(v16, a1, a3);
  v6 = v16[0];
  v7 = 1;
  v19 = 0;
  v20 = 0;
  v18 = 1;
  if ( v16[0] == v17 )
  {
    v5 = (_BYTE *)v17[0];
    v7 = v17[1];
    v6 = (char **)v17[2];
    v8 = v17[3];
  }
  else
  {
    v8 = v17[0];
  }
  ptr = v23;
  if ( v16[0] == v17 )
  {
    v23[0] = v5;
    v23[1] = v7;
    v23[2] = v6;
    v23[3] = v8;
  }
  else
  {
    ptr = v6;
  }
  if ( v16[0] != v17 )
    v23[0] = v8;
  v38[0] = 0;
  v26 = 0;
  v29 = 0;
  v32 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  *(_DWORD *)((char *)v38 + 3) = 0;
  v22 = v16[1];
  v9 = sub_20F388(0);
  v10 = sub_A4A9C((int)&v18, v9, (char *)1, v16, 1);
  v11 = sub_9253C(634200, (int)v16[0]);
  v12 = v11;
  if ( v10 == 1 )
  {
    v13 = sub_26118C(*v16[0], v16[0][1]);
    sub_92620(v12);
    if ( !v35 )
      goto LABEL_15;
  }
  else
  {
    sub_92620(v11);
    v13 = 0;
    if ( !v35 )
      goto LABEL_15;
  }
  v35 = 0;
  if ( v33 != &v34 )
  {
    sub_339E64(v33);
    if ( !v32 )
      goto LABEL_16;
    goto LABEL_26;
  }
LABEL_15:
  if ( !v32 )
    goto LABEL_16;
LABEL_26:
  v32 = 0;
  if ( v30 != &v31 )
  {
    sub_339E64(v30);
    if ( !v29 )
      goto LABEL_17;
    goto LABEL_28;
  }
LABEL_16:
  if ( !v29 )
    goto LABEL_17;
LABEL_28:
  v29 = 0;
  if ( v27 != &v28 )
  {
    sub_339E64(v27);
    if ( !v26 )
      goto LABEL_18;
    goto LABEL_30;
  }
LABEL_17:
  if ( !v26 )
    goto LABEL_18;
LABEL_30:
  v26 = 0;
  if ( v24 != &v25 )
    sub_339E64(v24);
LABEL_18:
  if ( ptr != v23 )
    sub_339E64(ptr);
  if ( v13 )
  {
    v14 = v13;
    v13 = 1;
    *a2 = sub_26EB1C(v14);
  }
  return v13;
}
