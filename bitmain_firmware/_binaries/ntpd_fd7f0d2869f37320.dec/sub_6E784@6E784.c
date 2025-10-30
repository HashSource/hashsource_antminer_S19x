int __fastcall sub_6E784(int (__fastcall *a1)(_DWORD, _DWORD))
{
  int result; // r0

  if ( a1 )
  {
    off_10824C = a1;
    return sub_6E6C4(2, (void (*)(int))sigint_handler);
  }
  else
  {
    result = sub_6E6C4(2, 0);
    off_10824C = 0;
  }
  return result;
}
