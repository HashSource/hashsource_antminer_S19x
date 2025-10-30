int __fastcall sub_30B0EC(int result)
{
  int v1; // r2
  int v2; // r2
  __int16 v3; // r12
  int v4; // r1
  int v5; // r1
  __int16 v6; // lr
  int v7; // r12
  int v8; // r1
  int v9; // r12
  int v10; // r2

  v1 = *(_DWORD *)(result + 5820);
  if ( v1 > 8 )
  {
    v5 = *(_DWORD *)(result + 20);
    v6 = *(_WORD *)(result + 5816);
    v7 = *(_DWORD *)(result + 8);
    *(_DWORD *)(result + 20) = v5 + 1;
    *(_BYTE *)(v7 + v5) = v6;
    v8 = *(_DWORD *)(result + 20);
    v9 = *(_DWORD *)(result + 8);
    v10 = HIBYTE(*(unsigned __int16 *)(result + 5816));
    *(_DWORD *)(result + 20) = v8 + 1;
    *(_BYTE *)(v9 + v8) = v10;
  }
  else if ( v1 > 0 )
  {
    v2 = *(_DWORD *)(result + 20);
    v3 = *(_WORD *)(result + 5816);
    v4 = *(_DWORD *)(result + 8);
    *(_DWORD *)(result + 20) = v2 + 1;
    *(_BYTE *)(v4 + v2) = v3;
  }
  *(_WORD *)(result + 5816) = 0;
  *(_DWORD *)(result + 5820) = 0;
  return result;
}
