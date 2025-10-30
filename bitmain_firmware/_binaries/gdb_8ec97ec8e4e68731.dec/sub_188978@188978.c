int __fastcall sub_188978(int a1)
{
  int result; // r0

  result = sub_CD288(a1);
  if ( !result )
  {
    result = sub_22EBBC(0);
    if ( result )
    {
      result = sub_CDAE0();
      if ( result )
      {
        sub_22F048(result);
        return sub_259F10(
                 "Cannot remove breakpoints because program is no longer writable.\n"
                 "Further execution is probably impossible.\n");
      }
    }
  }
  return result;
}
