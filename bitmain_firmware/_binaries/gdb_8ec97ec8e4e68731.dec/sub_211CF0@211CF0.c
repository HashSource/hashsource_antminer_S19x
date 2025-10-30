int __fastcall sub_211CF0(int a1, int a2, int a3)
{
  int result; // r0
  char *v4; // r3

  if ( a1 || (result = dword_48A514) != 0 )
  {
    if ( a2 )
    {
      return off_46DB94[0] != "off";
    }
    else
    {
      if ( a3 )
        v4 = "full";
      else
        v4 = "brief";
      return off_46DB94[0] == v4;
    }
  }
  return result;
}
