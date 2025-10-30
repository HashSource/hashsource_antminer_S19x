int __fastcall sub_1AFE8(_DWORD *a1)
{
  unsigned int v1; // r3
  int v3; // r2
  int v4; // r1
  int v5; // r0
  void *v6; // r0
  int v7; // r2
  int v8; // r0
  void *v9; // r0
  int v10; // r2
  unsigned int v12; // r3
  int v13; // r0
  _DWORD v14[8]; // [sp+0h] [bp-40h] BYREF
  _BYTE src[32]; // [sp+20h] [bp-20h] BYREF

  v1 = a1[3];
  a1[6] = (unsigned __int8)v1 >> 4;
  v3 = (v1 >> 21) & 0xF;
  a1[5] = v3;
  v4 = (unsigned __int16)v1 >> 12;
  if ( ((v1 >> 21) & 0xD) != 9 || ((v1 >> 20) & 3) != 2 )
    goto LABEL_3;
  if ( (unsigned __int16)v1 >> 12 )
  {
    if ( ((v1 >> 12) & 1) == 0 )
    {
LABEL_3:
      v5 = 8;
      v14[0] = v4;
      v14[1] = 25;
      a1[8] = 2;
LABEL_4:
      v6 = (void *)sub_93028(v5);
      v7 = a1[8];
      a1[9] = v6;
      memcpy(v6, v14, 4 * v7);
      goto LABEL_5;
    }
    v12 = (unsigned __int16)v1 >> 12;
    while ( 1 )
    {
      v12 >>= 1;
      if ( !v12 )
        break;
      if ( (v12 & 1) == 0 )
        goto LABEL_3;
    }
  }
  if ( v3 == 9 )
  {
    v14[0] = 25;
    v5 = 4;
    a1[8] = 1;
    goto LABEL_4;
  }
  v13 = a1[8];
  if ( v13 )
  {
    v5 = 4 * v13;
    goto LABEL_4;
  }
LABEL_5:
  v8 = a1[7];
  if ( v8 )
  {
    v9 = (void *)sub_93028(8 * v8);
    v10 = a1[7];
    a1[10] = v9;
    memcpy(v9, src, 8 * v10);
  }
  return 0;
}
