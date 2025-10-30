int __fastcall sub_A6F94(int a1)
{
  _DWORD *v2; // r3
  int v3; // r9
  int v4; // r6
  int v5; // r5
  int v6; // r7
  int v7; // r8
  int v8; // r2
  int v9; // r3
  __int16 v10; // r0
  _DWORD *v11; // r3
  int result; // r0
  int v13; // r2

  sub_7C4D4(a1 + 1616);
  v2 = *(_DWORD **)(a1 + 128);
  if ( v2 )
  {
    v3 = v2[101];
    v4 = v2[68];
    v5 = v2[69];
    v6 = v2[71];
    v7 = v2[70];
    sub_A6EEC(a1);
    sub_A6F14(a1);
    memset(*(void **)(a1 + 128), 0, 0x198u);
    v8 = *(_DWORD *)(a1 + 28);
    v9 = *(_DWORD *)(a1 + 128);
    *(_DWORD *)(v9 + 404) = v3;
    if ( v8 )
      *(_DWORD *)(v9 + 256) = 256;
    v10 = sub_8B860(a1);
    v11 = *(_DWORD **)(a1 + 128);
    if ( (v10 & 0x1000) != 0 )
    {
      v11[71] = v6;
      v11[70] = v7;
    }
    v11[68] = v4;
    v11[69] = v5;
  }
  result = sub_82358(a1);
  if ( result )
  {
    v13 = **(_DWORD **)(a1 + 4);
    if ( v13 == 0x1FFFF )
    {
      *(_DWORD *)a1 = 65277;
      return 1;
    }
    else
    {
      result = 1;
      if ( (*(_DWORD *)(a1 + 1260) & 0x8000) != 0 )
      {
        *(_DWORD *)a1 = 256;
        *(_DWORD *)(a1 + 1284) = 256;
      }
      else
      {
        *(_DWORD *)a1 = v13;
      }
    }
  }
  return result;
}
