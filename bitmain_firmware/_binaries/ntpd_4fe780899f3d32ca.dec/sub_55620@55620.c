int __fastcall sub_55620(char a1, int *a2, int a3)
{
  int v4; // r4
  int v5; // r2
  int result; // r0
  int v7; // r3

  v4 = *a2;
  v5 = *(_DWORD *)(*a2 + 48);
  if ( v5 <= 0 )
    return 0;
  *(_DWORD *)(v4 + 216 * *(_DWORD *)(v4 + 3292) + 2200) = *(_DWORD *)(v4 + 2116);
  result = sub_63DC0(v5, a1 & 0x7F);
  v7 = *(_DWORD *)(v4 + 216 * a3 + 2200);
  *(_DWORD *)(v4 + 3292) = a3;
  *(_DWORD *)(v4 + 2116) = v7;
  return result;
}
