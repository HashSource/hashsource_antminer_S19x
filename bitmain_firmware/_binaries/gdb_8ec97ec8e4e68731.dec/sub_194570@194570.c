int __fastcall sub_194570(int a1, int a2)
{
  int (__fastcall *v4)(int); // r3

  if ( off_46D5A4[0][2] == (char *)14 )
  {
    if ( !*(_BYTE *)(a2 + 60) )
    {
      sub_A3C94(a2 + 32, a2);
      *(_BYTE *)(a2 + 60) = 1;
    }
    if ( (*(_BYTE *)(a2 + 56) & 4) != 0 )
      return (*((int (__fastcall **)(int))off_46D5A4[0] + 36))(a2);
  }
  v4 = *(int (__fastcall **)(int))(a1 + 144);
  if ( v4 )
    return v4(a2);
  else
    return 1653432;
}
