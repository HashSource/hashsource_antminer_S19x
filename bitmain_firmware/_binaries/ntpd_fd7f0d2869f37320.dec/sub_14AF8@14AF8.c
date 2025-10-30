int __fastcall sub_14AF8(_DWORD *a1, unsigned __int16 *a2)
{
  int v3; // r0
  int result; // r0
  int v5; // r3
  int *v6; // r1
  int v7; // r7
  int v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r3
  _DWORD *v12; // t0
  int v13; // r6
  int v14; // lr
  int v15; // r0
  _DWORD v16[2]; // [sp+8h] [bp-24h] BYREF
  _DWORD optval[5]; // [sp+10h] [bp-1Ch] BYREF

  v3 = *a2;
  if ( v3 == 2 )
  {
    v14 = *((_DWORD *)a2 + 1);
    v15 = a1[3];
    v16[1] = 0;
    v16[0] = v14;
    if ( setsockopt(v15, 0, 35, v16, 8u) )
      return 0;
  }
  else if ( v3 == 10 )
  {
    v6 = (int *)(a2 + 4);
    v7 = a1[3];
    v8 = *v6;
    v12 = v6 + 1;
    v9 = v6[1];
    v10 = *++v12;
    v11 = v12[1];
    v13 = a1[44];
    optval[0] = v8;
    optval[1] = v9;
    optval[2] = v10;
    optval[3] = v11;
    optval[4] = v13;
    if ( setsockopt(v7, 41, 20, optval, 0x14u) )
      return 0;
  }
  result = 1;
  v5 = a1[39];
  a1[36] |= 0x40u;
  a1[39] = v5 + 1;
  return result;
}
