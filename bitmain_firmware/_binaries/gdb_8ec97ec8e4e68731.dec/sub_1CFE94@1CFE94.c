int __fastcall sub_1CFE94(char *a1, int a2, _DWORD *a3, int (__fastcall *a4)(_DWORD *, int, int), int a5, int a6)
{
  int v10; // r2
  _BYTE *v11; // r0
  int v12; // r1
  void *v13; // r2
  int v14; // r3
  int i; // r0
  int v16; // r4
  int v17; // r4
  _DWORD v19[2]; // [sp+0h] [bp-FCh] BYREF
  _DWORD v20[4]; // [sp+8h] [bp-F4h] BYREF
  int v21; // [sp+18h] [bp-E4h] BYREF
  char v22; // [sp+1Ch] [bp-E0h]
  char v23; // [sp+1Dh] [bp-DFh]
  void *ptr; // [sp+20h] [bp-DCh]
  int v25; // [sp+24h] [bp-D8h]
  _DWORD v26[4]; // [sp+28h] [bp-D4h] BYREF
  void *v27; // [sp+38h] [bp-C4h]
  char v28; // [sp+40h] [bp-BCh] BYREF
  char v29; // [sp+54h] [bp-A8h]
  void *v30; // [sp+58h] [bp-A4h]
  char v31; // [sp+60h] [bp-9Ch] BYREF
  char v32; // [sp+70h] [bp-8Ch]
  void *v33; // [sp+74h] [bp-88h]
  char v34; // [sp+7Ch] [bp-80h] BYREF
  char v35; // [sp+8Ch] [bp-70h]
  void *v36; // [sp+90h] [bp-6Ch]
  char v37; // [sp+98h] [bp-64h] BYREF
  char v38; // [sp+A8h] [bp-54h]
  int v39; // [sp+E8h] [bp-14h]
  int v40; // [sp+ECh] [bp-10h]
  _DWORD v41[3]; // [sp+F0h] [bp-Ch]

  v19[0] = v20;
  if ( a1 )
    v10 = (int)&a1[strlen(a1)];
  else
    v10 = -1;
  v11 = sub_1CF018(v19, a1, v10);
  v13 = (void *)v19[0];
  v22 = 0;
  v23 = 0;
  if ( (_DWORD *)v19[0] == v20 )
  {
    v11 = (_BYTE *)v20[0];
    v12 = v20[1];
    v13 = (void *)v20[2];
    v14 = v20[3];
  }
  else
  {
    v14 = v20[0];
  }
  ptr = v26;
  if ( (_DWORD *)v19[0] == v20 )
  {
    v26[0] = v11;
    v26[1] = v12;
    v26[2] = v13;
    v26[3] = v14;
  }
  else
  {
    ptr = v13;
  }
  if ( (_DWORD *)v19[0] != v20 )
    v26[0] = v14;
  v41[0] = 0;
  v21 = a6;
  v29 = 0;
  v32 = 0;
  v35 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  *(_DWORD *)((char *)v41 + 3) = 0;
  v25 = v19[1];
  for ( i = sub_C2900(a3, (int)&v21, v19); ; i = sub_C294C((int)&v21, (int)v19) )
  {
    v16 = i;
    if ( !i )
    {
      v17 = 0;
      if ( v38 )
        goto LABEL_25;
      goto LABEL_18;
    }
    if ( sub_21D9B0(*(_BYTE *)(i + 20) & 0x1F, *(_BYTE *)(i + 32) & 7, a2) && a4(a3, v16, a5) )
      break;
  }
  v17 = 1;
  if ( !v38 )
    goto LABEL_18;
LABEL_25:
  v38 = 0;
  if ( v36 == &v37 )
  {
LABEL_18:
    if ( v35 )
      goto LABEL_27;
    goto LABEL_19;
  }
  sub_339E64(v36);
  if ( !v35 )
    goto LABEL_19;
LABEL_27:
  v35 = 0;
  if ( v33 == &v34 )
  {
LABEL_19:
    if ( v32 )
      goto LABEL_29;
    goto LABEL_20;
  }
  sub_339E64(v33);
  if ( !v32 )
    goto LABEL_20;
LABEL_29:
  v32 = 0;
  if ( v30 == &v31 )
  {
LABEL_20:
    if ( !v29 )
      goto LABEL_21;
    goto LABEL_31;
  }
  sub_339E64(v30);
  if ( !v29 )
    goto LABEL_21;
LABEL_31:
  v29 = 0;
  if ( v27 != &v28 )
    sub_339E64(v27);
LABEL_21:
  if ( ptr != v26 )
    sub_339E64(ptr);
  return v17;
}
