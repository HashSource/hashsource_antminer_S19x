int __fastcall sub_D0244(int a1, int a2, int a3, int a4, int a5)
{
  int result; // r0
  int v10; // r3
  _DWORD s[9]; // [sp+2Ch] [bp-28h] BYREF

  memset(s, 0, sizeof(s));
  ((void (__fastcall *)(int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, int, int))loc_D017C)(
    a1,
    a2,
    dword_487D2C,
    s[0],
    s[1],
    s[2],
    s[3],
    s[4],
    s[5],
    s[6],
    s[7],
    s[8],
    26,
    a5,
    dword_487D2C);
  result = a4;
  if ( a4 )
    result = sub_327254(a4);
  *(_DWORD *)(a1 + 100) = result;
  if ( a3 )
    v10 = 0;
  else
    v10 = 3;
  *(_DWORD *)(a1 + 20) = v10;
  return result;
}
