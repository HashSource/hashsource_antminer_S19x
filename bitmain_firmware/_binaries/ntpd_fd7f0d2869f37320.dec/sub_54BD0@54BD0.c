int __fastcall sub_54BD0(int a1, int a2)
{
  int v3; // r4
  _DWORD *v4; // t1
  int result; // r0

  v3 = *(_DWORD *)(a2 + 84);
  v4 = *(_DWORD **)v3;
  *v4 = 0;
  v4[1] = v3 + 56;
  if ( write(*(_DWORD *)(v3 + 28), "QTQDQMT", 6u) != 6 )
    sub_39C88(a2, 3);
  if ( *(_DWORD *)(v3 + 216) == *(_DWORD *)(v3 + 220) )
    return sub_39C88(a2, 1);
  sub_3A534(a2);
  result = sub_42D0C(a2 + 16, (const char *)(v3 + 56));
  ++*(_DWORD *)(v3 + 776);
  return result;
}
