int __fastcall sub_1E3318(int a1)
{
  int v1; // r0
  int result; // r0
  int v3; // r0

  v1 = sub_16F654(a1);
  ((void (__fastcall *)(int))loc_1E2770)(v1);
  if ( *(_DWORD *)(dword_488C94 + 28) && *(_DWORD *)(dword_488C94 + 48) )
  {
    result = sub_25A3E4("The target is not responding to interrupt requests.\nStop debugging it? ");
    if ( result )
    {
      sub_231E3C(2);
      v3 = sub_92F64(12, "Disconnected from target.");
      return sub_1E3390(v3);
    }
  }
  else
  {
    result = sub_25A3E4("Interrupted while waiting for the program.\nGive up waiting? ");
    if ( result )
      return sub_258B6C();
  }
  return result;
}
