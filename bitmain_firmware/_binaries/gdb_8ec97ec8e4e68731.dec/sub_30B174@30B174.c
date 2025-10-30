int __fastcall sub_30B174(int result)
{
  int v1; // r3
  int v2; // r2
  int v3; // r1
  __int16 v4; // lr
  int v5; // r12
  int v6; // r1
  int v7; // r1
  __int16 v8; // r4
  int v9; // lr
  int v10; // lr
  int v11; // r4
  int v12; // r1

  v1 = result + 4096;
  v2 = *(_DWORD *)(result + 5820);
  if ( v2 == 16 )
  {
    v7 = *(_DWORD *)(result + 20);
    v8 = *(_WORD *)(result + 5816);
    v9 = *(_DWORD *)(result + 8);
    *(_DWORD *)(result + 20) = v7 + 1;
    *(_BYTE *)(v9 + v7) = v8;
    v10 = *(_DWORD *)(result + 20);
    v11 = *(_DWORD *)(result + 8);
    v12 = HIBYTE(*(unsigned __int16 *)(result + 5816));
    *(_DWORD *)(result + 20) = v10 + 1;
    *(_BYTE *)(v11 + v10) = v12;
    *(_WORD *)(result + 5816) = 0;
    *(_DWORD *)(result + 5820) = 0;
  }
  else if ( v2 > 7 )
  {
    v3 = *(_DWORD *)(result + 20);
    v4 = *(_WORD *)(result + 5816);
    v5 = *(_DWORD *)(result + 8);
    *(_DWORD *)(result + 20) = v3 + 1;
    *(_BYTE *)(v5 + v3) = v4;
    v6 = HIBYTE(*(unsigned __int16 *)(result + 5816));
    result = *(_DWORD *)(result + 5820) - 8;
    *(_DWORD *)(v1 + 1724) = result;
    *(_WORD *)(v1 + 1720) = v6;
  }
  return result;
}
