int __fastcall sub_2FB95C(int a1, int a2, int a3)
{
  _DWORD *v6; // r0
  int v7; // r3
  int result; // r0

  v6 = (_DWORD *)sub_2ACBF4(a1, 8);
  *v6 = a2;
  v6[1] = a3;
  if ( a2 )
    v7 = *(_DWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 160) = v6;
  result = 0;
  if ( a2 )
    *(_DWORD *)(a1 + 40) = v7 | 0x200;
  return result;
}
