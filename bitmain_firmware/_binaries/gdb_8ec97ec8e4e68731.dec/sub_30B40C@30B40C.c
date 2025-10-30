int __fastcall sub_30B40C(int result)
{
  int v1; // r3
  __int16 v2; // r1
  int v3; // r3
  int v4; // r5
  int v5; // r1
  int v6; // r4
  int v7; // r3
  int v8; // r3
  int v9; // r3
  int v10; // r3
  __int16 v11; // r4
  int v12; // r12
  int v13; // r12
  int v14; // r4
  int v15; // r3

  v1 = *(_DWORD *)(result + 5820);
  v2 = *(_WORD *)(result + 5816) | (2 << v1);
  if ( v1 <= 13 )
  {
    v8 = v1 + 3;
    *(_WORD *)(result + 5816) = v2;
    *(_DWORD *)(result + 5820) = v8;
  }
  else
  {
    v3 = *(_DWORD *)(result + 20);
    v4 = *(_DWORD *)(result + 8);
    *(_WORD *)(result + 5816) = v2;
    *(_DWORD *)(result + 20) = v3 + 1;
    *(_BYTE *)(v4 + v3) = v2;
    v5 = *(_DWORD *)(result + 20);
    v6 = *(_DWORD *)(result + 8);
    LOBYTE(v3) = HIBYTE(*(_WORD *)(result + 5816));
    *(_DWORD *)(result + 20) = v5 + 1;
    *(_BYTE *)(v6 + v5) = v3;
    v7 = *(_DWORD *)(result + 5820);
    LOBYTE(v5) = 16 - v7;
    v8 = v7 - 13;
    *(_DWORD *)(result + 5820) = v8;
    *(_WORD *)(result + 5816) = 2 >> v5;
  }
  if ( v8 > 9 )
  {
    v10 = *(_DWORD *)(result + 20);
    v11 = *(_WORD *)(result + 5816);
    v12 = *(_DWORD *)(result + 8);
    *(_DWORD *)(result + 20) = v10 + 1;
    *(_BYTE *)(v12 + v10) = v11;
    v13 = *(_DWORD *)(result + 20);
    v14 = *(_DWORD *)(result + 8);
    LOBYTE(v10) = HIBYTE(*(_WORD *)(result + 5816));
    *(_DWORD *)(result + 20) = v13 + 1;
    *(_BYTE *)(v14 + v13) = v10;
    v15 = *(_DWORD *)(result + 5820);
    *(_WORD *)(result + 5816) = 0;
    v9 = v15 - 9;
  }
  else
  {
    v9 = v8 + 7;
  }
  *(_DWORD *)(result + 5820) = v9;
  return sub_30B174(result);
}
