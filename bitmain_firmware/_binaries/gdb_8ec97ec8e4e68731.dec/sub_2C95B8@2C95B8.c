bool __fastcall sub_2C95B8(int a1)
{
  int v1; // r8
  int *v2; // r5
  unsigned int *v4; // r6
  unsigned int v6; // r3
  unsigned int v7; // r0
  int v8; // r7
  unsigned int v9; // r3
  int v10; // r0
  int v11; // r10
  unsigned int *v12; // r6
  int v13; // r11
  unsigned int v14; // r9
  _DWORD *v15; // t1
  _DWORD v16[14]; // [sp+Ch] [bp-38h] BYREF

  v1 = a1 + 4;
  v2 = *(int **)(a1 + 160);
  v4 = (unsigned int *)v2[16];
  sub_2C946C(a1 + 4, v2, v16);
  if ( sub_2A8A04(a1, 0, 0) || sub_2A8884((int)v16, 52, a1) != 52 )
    return 0;
  v6 = v2[12];
  v7 = v2[14];
  if ( v6 > 0xFFFE )
    *(_DWORD *)(*v4 + 32) = v6;
  if ( v7 >= 0xFF00 )
    v6 = *v4;
  v8 = 40 * v7;
  if ( v7 >= 0xFF00 )
    *(_DWORD *)(v6 + 24) = v7;
  v9 = v2[15];
  if ( v9 >= 0xFF00 )
    *(_DWORD *)(*v4 + 28) = v9;
  v10 = sub_2ACBF4(a1, 40 * v7);
  v11 = v10;
  if ( !v10 )
    return 0;
  if ( v2[14] )
  {
    v12 = v4 - 1;
    v13 = v10;
    v14 = 0;
    do
    {
      v15 = (_DWORD *)v12[1];
      ++v12;
      ++v14;
      sub_2C9248(v1, v15, v13);
      v13 += 40;
    }
    while ( v2[14] > v14 );
  }
  return !sub_2A8A04(a1, (unsigned int)v2[6], 0) && sub_2A8884(v11, v8, a1) == v8;
}
