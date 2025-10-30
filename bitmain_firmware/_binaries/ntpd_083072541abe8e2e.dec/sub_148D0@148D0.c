int __fastcall sub_148D0(_DWORD *a1, unsigned __int16 *a2)
{
  int v3; // r0
  int result; // r0
  int v5; // r3
  int *v6; // r1
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  _DWORD *v11; // t0
  int v12; // r6
  int v13; // r0
  _DWORD v14[2]; // [sp+8h] [bp-20h] BYREF
  _DWORD optval[5]; // [sp+10h] [bp-18h] BYREF

  v3 = *a2;
  if ( v3 == 2 )
  {
    v13 = a1[3];
    v14[0] = *((_DWORD *)a2 + 1);
    v14[1] = 0;
    if ( setsockopt(v13, 0, 35, v14, 8u) )
      return 0;
  }
  else if ( v3 == 10 )
  {
    v6 = (int *)(a2 + 4);
    v7 = *v6;
    v11 = v6 + 1;
    v8 = v6[1];
    v9 = *++v11;
    v10 = v11[1];
    v12 = a1[3];
    optval[0] = v7;
    optval[1] = v8;
    optval[2] = v9;
    optval[3] = v10;
    optval[4] = a1[44];
    if ( setsockopt(v12, 41, 20, optval, 0x14u) )
      return 0;
  }
  result = 1;
  v5 = a1[39] + 1;
  a1[36] |= 0x40u;
  a1[39] = v5;
  return result;
}
