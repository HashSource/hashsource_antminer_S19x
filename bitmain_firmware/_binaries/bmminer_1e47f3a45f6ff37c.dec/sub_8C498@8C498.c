int __fastcall sub_8C498(int a1, int a2)
{
  int v2; // r0
  int v3; // r1
  _DWORD *i; // [sp+Ch] [bp-8h]

  v2 = (*(int (__fastcall **)(int))(a1 + 12))(a2);
  sub_8F7E4(v2, *(_DWORD *)(a1 + 8));
  for ( i = *(_DWORD **)(*(_DWORD *)(a1 + 4) + 4 * v3); i; i = (_DWORD *)i[4] )
  {
    if ( (*(int (__fastcall **)(int, _DWORD))(a1 + 16))(a2, i[1]) )
      return i[2];
  }
  return 0;
}
