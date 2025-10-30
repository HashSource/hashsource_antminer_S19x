int __fastcall sub_69FD4(_DWORD *a1, int a2, int a3)
{
  int v4; // r0

  if ( !a1 )
    return 0;
  v4 = sub_6A408(*a1);
  if ( !v4 )
    return 0;
  sub_6AC04(*(_DWORD *)(v4 + 20), a3);
  return 1;
}
