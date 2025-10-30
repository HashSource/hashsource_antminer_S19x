int __fastcall sub_7015C(_DWORD *a1, int a2, int a3)
{
  int v4; // r0

  if ( !a1 )
    return 0;
  v4 = sub_703F4(*a1);
  if ( !v4 )
    return 0;
  sub_708F0(*(_DWORD *)(v4 + 20), a3);
  return 1;
}
