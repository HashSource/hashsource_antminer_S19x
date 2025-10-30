int __fastcall sub_1E98C(_DWORD *a1)
{
  unsigned int v1; // r5
  int v3; // r3
  int v4; // r0
  int v5; // r0
  void *v6; // r0
  int v7; // r2
  int v8; // r0
  int v10; // r3
  int v11; // r0
  void *v12; // r0
  int v13; // r2
  int v14; // r3
  _DWORD v15[2]; // [sp+0h] [bp-4Ch] BYREF
  int src[8]; // [sp+8h] [bp-44h] BYREF
  int v17; // [sp+28h] [bp-24h] BYREF
  int v18; // [sp+2Ch] [bp-20h]

  v1 = a1[3];
  v15[0] = 0;
  v15[1] = 0;
  v3 = (v1 >> 11) & 3;
  v4 = a1[1];
  switch ( v3 )
  {
    case 3:
      src[0] = (v1 >> 8) & 7;
      a1[8] = 1;
      goto LABEL_7;
    case 1:
      a1[8] = 1;
      src[0] = v1 & 7;
LABEL_7:
      v5 = 4;
      goto LABEL_8;
    case 2:
      ((void (__fastcall *)(int, int, _DWORD *))loc_1DF9FC)(v4, 13, v15);
      v14 = v15[0];
      v17 = 4;
      a1[7] = 1;
      v18 = v14 + 4 * (unsigned __int8)v1;
      break;
    default:
      ((void (__fastcall *)(int, unsigned int, _DWORD *))loc_1DF9FC)(v4, (v1 >> 3) & 7, v15);
      v10 = v15[0];
      v17 = 2;
      a1[7] = 1;
      v18 = v10 + 2 * ((v1 >> 6) & 0x1F);
      break;
  }
  v11 = a1[8];
  if ( !v11 )
  {
    v8 = a1[7];
    goto LABEL_13;
  }
  v5 = 4 * v11;
LABEL_8:
  v6 = (void *)sub_93028(v5);
  v7 = a1[8];
  a1[9] = v6;
  memcpy(v6, src, 4 * v7);
  v8 = a1[7];
  if ( !v8 )
    return 0;
LABEL_13:
  v12 = (void *)sub_93028(8 * v8);
  v13 = a1[7];
  a1[10] = v12;
  memcpy(v12, &v17, 8 * v13);
  return 0;
}
