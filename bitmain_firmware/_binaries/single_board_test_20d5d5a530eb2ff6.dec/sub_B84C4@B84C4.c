void __fastcall sub_B84C4(int a1, int a2, int a3, int a4)
{
  int v4; // r0
  int v5; // r5
  int v6; // r4
  int v7; // r5
  int v8; // r7
  int v9; // r0
  int v10; // r6
  int v11; // r0
  int *v12; // r1
  int *v13; // r0
  int *v14; // r3
  int v15; // r2
  int v16; // r5

  if ( a2 != a3 )
  {
    v4 = *(_DWORD *)(a3 + 4);
    v5 = *(_DWORD *)(a2 + 4);
    v6 = *(_DWORD *)(a3 + 12);
    *(_DWORD *)(a2 + 4) = v4;
    v7 = v5 ^ v4;
    v8 = *(_DWORD *)(a2 + 16);
    v9 = *(_DWORD *)(a3 + 16);
    v10 = *(_DWORD *)(a2 + 12);
    *(_DWORD *)(a3 + 4) ^= v7;
    *(_DWORD *)(a2 + 12) = v6;
    v11 = ((unsigned __int8)v9 ^ (unsigned __int8)v8) & 4;
    *(_DWORD *)(a3 + 12) ^= v6 ^ v10;
    *(_DWORD *)(a2 + 16) = v8 ^ v11;
    *(_DWORD *)(a3 + 16) ^= v11;
    if ( a4 > 0 )
    {
      v12 = *(int **)a2;
      v13 = *(int **)a3;
      v14 = &v12[a4];
      do
      {
        v15 = *v13;
        v16 = *v12;
        *v12++ = *v13;
        *v13++ ^= v15 ^ v16;
      }
      while ( v12 != v14 );
    }
  }
}
