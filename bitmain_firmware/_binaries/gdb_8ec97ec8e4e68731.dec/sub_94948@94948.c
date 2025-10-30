int __fastcall sub_94948(int result, int a2, int a3)
{
  int v3; // r2
  int v4; // r5
  int v5; // r7
  int v6; // r4
  int v8; // r0
  int v9; // lr
  int v10; // r8
  int v11; // r4
  int v12; // r12
  int *v13; // r3
  _DWORD *v14; // r12
  int v15; // r0
  int v16; // r1
  int v17; // r2
  int v18; // r3

  v3 = a3 - a2;
  if ( v3 > 0 )
  {
    v4 = v3 >> 4;
    v5 = result;
    v6 = dword_487D2C;
    v8 = sub_947B0(dword_487D2C + 40, v3 >> 4);
    v9 = 0;
    v10 = *(_DWORD *)(v6 + 40) + 16 * v8;
    v11 = v10;
    do
    {
      v12 = 16 * v9++;
      v13 = (int *)(a2 + v12);
      v14 = (_DWORD *)(v10 + v12);
      v15 = *v13;
      v16 = v13[1];
      v17 = v13[2];
      v18 = v13[3];
      v11 += 16;
      *v14 = v15;
      v14[1] = v16;
      v14[2] = v17;
      v14[3] = v18;
      *(_DWORD *)(v11 - 4) = v5;
    }
    while ( v4 > v9 );
    result = sub_22F158(&dword_475224);
    if ( !result )
      return sub_231B78(&dword_475224);
  }
  return result;
}
