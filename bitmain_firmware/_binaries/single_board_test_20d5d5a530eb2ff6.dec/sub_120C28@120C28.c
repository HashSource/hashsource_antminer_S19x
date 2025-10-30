int __fastcall sub_120C28(int a1, int a2, int a3)
{
  int v6; // r0
  char *v7; // r0

  sub_1205D8(a1);
  if ( (*(_DWORD *)(a1 + 128) & 0x80) == 0 )
  {
    if ( a2 == -1 )
      return 1;
    v6 = sub_120294(a2);
    if ( v6 != -1 )
    {
      v7 = sub_120238(v6);
      return (*((int (__fastcall **)(char *, int, int))v7 + 3))(v7, a1, a3);
    }
  }
  return -1;
}
