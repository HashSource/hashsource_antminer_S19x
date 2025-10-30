int __fastcall sub_8E488(int a1, int a2)
{
  int v4; // r1
  int result; // r0

  sub_8E450(a1);
  v4 = **(_DWORD **)(a1 + 1232);
  if ( v4 == *(_DWORD *)(a1 + 4) || (result = sub_8A564(a1, v4)) != 0 )
  {
    if ( a2 )
    {
      sub_8DBC8(a2);
      *(_DWORD *)(a1 + 1240) = *(_DWORD *)(a2 + 420);
    }
    sub_8D6A4(*(_DWORD *)(a1 + 1140));
    *(_DWORD *)(a1 + 1140) = a2;
    return 1;
  }
  return result;
}
