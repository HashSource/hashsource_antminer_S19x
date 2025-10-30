int __fastcall sub_6D7B0(int (__fastcall *a1)(_DWORD, _DWORD))
{
  int result; // r0

  if ( a1 )
  {
    off_107228 = a1;
    return sub_6D6F0(2, (void (*)(int))sigint_handler);
  }
  else
  {
    result = sub_6D6F0(2, 0);
    off_107228 = 0;
  }
  return result;
}
