int __fastcall sub_A5400(char *a1, int a2, char *a3, char ***a4)
{
  int v8; // r4
  size_t v9; // r0
  _BYTE *v10; // r0
  int v11; // r1
  void *v12; // r3
  _BOOL4 v13; // r4
  int v14; // r2
  int v15; // r4
  _DWORD v17[2]; // [sp+8h] [bp-8h] BYREF
  _DWORD v18[4]; // [sp+10h] [bp+0h] BYREF
  _BOOL4 v19; // [sp+20h] [bp+10h] BYREF
  char v20; // [sp+24h] [bp+14h]
  char v21; // [sp+25h] [bp+15h]
  void *ptr; // [sp+28h] [bp+18h]
  int v23; // [sp+2Ch] [bp+1Ch]
  _DWORD v24[4]; // [sp+30h] [bp+20h] BYREF
  void *v25; // [sp+40h] [bp+30h]
  char v26; // [sp+48h] [bp+38h] BYREF
  char v27; // [sp+5Ch] [bp+4Ch]
  void *v28; // [sp+60h] [bp+50h]
  char v29; // [sp+68h] [bp+58h] BYREF
  char v30; // [sp+78h] [bp+68h]
  void *v31; // [sp+7Ch] [bp+6Ch]
  char v32; // [sp+84h] [bp+74h] BYREF
  char v33; // [sp+94h] [bp+84h]
  void *v34; // [sp+98h] [bp+88h]
  char v35; // [sp+A0h] [bp+90h] BYREF
  char v36; // [sp+B0h] [bp+A0h]
  int v37; // [sp+F0h] [bp+E0h]
  int v38; // [sp+F4h] [bp+E4h]
  _DWORD v39[2]; // [sp+F8h] [bp+E8h]

  v8 = sub_338BD4(a1, &dword_3C439C);
  v17[0] = v18;
  v9 = strlen(a1);
  v10 = sub_9D8E0(v17, a1, (int)&a1[v9]);
  v12 = (void *)v17[0];
  v13 = v8 != 0;
  v20 = 0;
  v21 = 0;
  if ( (_DWORD *)v17[0] == v18 )
  {
    v10 = *(_BYTE **)v17[0];
    v11 = *(_DWORD *)(v17[0] + 4);
    v14 = *(_DWORD *)(v17[0] + 8);
    v12 = *(void **)(v17[0] + 12);
  }
  else
  {
    v14 = v18[0];
  }
  if ( (_DWORD *)v17[0] == v18 )
  {
    v24[0] = v10;
    v24[1] = v11;
    v24[2] = v14;
    v24[3] = v12;
  }
  ptr = v24;
  if ( (_DWORD *)v17[0] != v18 )
  {
    ptr = v12;
    v24[0] = v14;
  }
  v39[0] = 0;
  v19 = v13;
  v27 = 0;
  v30 = 0;
  v33 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  *(_DWORD *)((char *)v39 + 3) = 0;
  v23 = v17[1];
  v15 = sub_A4A9C((int)&v19, a2, a3, a4, 1);
  if ( !v36 || (v36 = 0, v34 == &v35) )
  {
    if ( !v33 )
      goto LABEL_10;
  }
  else
  {
    sub_339E64(v34);
    if ( !v33 )
      goto LABEL_10;
  }
  v33 = 0;
  if ( v31 != &v32 )
  {
    sub_339E64(v31);
    if ( !v30 )
      goto LABEL_11;
    goto LABEL_19;
  }
LABEL_10:
  if ( !v30 )
    goto LABEL_11;
LABEL_19:
  v30 = 0;
  if ( v28 != &v29 )
  {
    sub_339E64(v28);
    if ( !v27 )
      goto LABEL_12;
    goto LABEL_21;
  }
LABEL_11:
  if ( !v27 )
    goto LABEL_12;
LABEL_21:
  v27 = 0;
  if ( v25 != &v26 )
    sub_339E64(v25);
LABEL_12:
  if ( ptr != v24 )
    sub_339E64(ptr);
  return v15;
}
