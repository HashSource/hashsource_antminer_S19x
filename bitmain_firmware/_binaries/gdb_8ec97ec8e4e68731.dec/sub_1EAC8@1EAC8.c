int __fastcall sub_1EAC8(_DWORD *a1)
{
  unsigned int v1; // r5
  int v3; // r0
  int v4; // r0
  void *v5; // r0
  int v6; // r2
  int v7; // r0
  int v8; // r0
  int v10; // r3
  int v11; // r5
  bool v12; // zf
  void *v13; // r0
  int v14; // r2
  _DWORD v15[2]; // [sp+0h] [bp-4Ch] BYREF
  int src[8]; // [sp+8h] [bp-44h] BYREF
  _DWORD v17[9]; // [sp+28h] [bp-24h] BYREF

  v1 = a1[3];
  v15[0] = 0;
  v15[1] = 0;
  v3 = a1[1];
  if ( (v1 & 0x1800) != 0 )
  {
    v4 = 4;
    src[0] = v1 & 7;
    a1[8] = 1;
  }
  else
  {
    ((void (__fastcall *)(int, unsigned int, _DWORD *))loc_1DF9FC)(v3, (v1 >> 3) & 7, v15);
    v10 = v15[0];
    v8 = a1[8];
    v17[0] = 4;
    a1[7] = 1;
    v11 = v10 + 4 * ((v1 >> 6) & 0x1F);
    v12 = v8 == 0;
    if ( !v8 )
      v8 = 8;
    v17[1] = v11;
    if ( v12 )
      goto LABEL_10;
    v4 = 4 * v8;
  }
  v5 = (void *)sub_93028(v4);
  v6 = a1[8];
  a1[9] = v5;
  memcpy(v5, src, 4 * v6);
  v7 = a1[7];
  if ( !v7 )
    return 0;
  v8 = 8 * v7;
LABEL_10:
  v13 = (void *)sub_93028(v8);
  v14 = a1[7];
  a1[10] = v13;
  memcpy(v13, v17, 8 * v14);
  return 0;
}
