int __fastcall sub_8C3DC(int a1, int a2)
{
  int v2; // r0
  int v3; // r1
  int i; // [sp+Ch] [bp-8h]

  v2 = (*(int (__fastcall **)(int))(a1 + 12))(a2);
  sub_8F7E4(v2, *(_DWORD *)(a1 + 8));
  for ( i = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * v3); i; i = *(_DWORD *)(i + 16) )
  {
    if ( (*(int (__fastcall **)(int, _DWORD))(a1 + 16))(a2, *(_DWORD *)(i + 4)) )
      return i;
  }
  return 0;
}
