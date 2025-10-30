int __fastcall sub_7D31C(_DWORD *a1, char a2)
{
  int v3; // r2
  _DWORD *v4; // r4
  int v5; // r1
  int result; // r0
  int v7; // r1
  int v8; // r7
  int v9; // r5
  _DWORD *v10; // r2

  if ( (a2 & 1) != 0 )
  {
    v7 = a1[974];
    v4 = a1 + 968;
    ++*(_WORD *)v7;
    v8 = *(_DWORD *)(v7 + 20);
    v9 = *(_DWORD *)(v7 + 24);
    *(_DWORD *)(v7 + 4) = *(_DWORD *)(v7 + 16);
    *(_DWORD *)(v7 + 8) = v8;
    *(_DWORD *)(v7 + 12) = v9;
    v10 = (_DWORD *)a1[974];
    v10[4] = 0;
    v10[5] = 0;
    v10[6] = 0;
    result = sub_A6EEC();
  }
  else
  {
    v3 = a1[974];
    v4 = a1 + 970;
    v5 = a1[971];
    result = a1[970];
    *(_DWORD *)(v3 + 56) = v5;
    *(_DWORD *)(v3 + 52) = result;
    ++*(_WORD *)(a1[974] + 2);
  }
  *v4 = 0;
  v4[1] = 0;
  return result;
}
