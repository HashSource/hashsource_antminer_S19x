int __fastcall sub_1E358C(int a1)
{
  _DWORD *v3; // r1
  int *v4; // r0
  int v5; // r1
  int v6; // r1

  sub_259F10("The %s is %ld. ", *(const char **)a1, *(_DWORD *)(a1 + 4));
  v3 = (_DWORD *)(a1 + 8);
  v4 = (int *)(a1 + 4);
  if ( *(_DWORD *)(a1 + 8) )
  {
    v6 = sub_1E3454(v4, v3);
    return sub_259F10("Packets are fixed at %ld bytes.\n", v6);
  }
  else
  {
    v5 = sub_1E3454(v4, v3);
    return sub_259F10("Packets are limited to %ld bytes.\n", v5);
  }
}
