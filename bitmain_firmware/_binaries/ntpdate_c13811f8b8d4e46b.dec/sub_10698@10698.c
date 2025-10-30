int __fastcall sub_10698(int (__fastcall *a1)(_DWORD, _DWORD))
{
  int result; // r0

  if ( a1 )
  {
    off_33340 = a1;
    return sub_105D8(2, (void (*)(int))sigint_handler);
  }
  else
  {
    result = sub_105D8(2, 0);
    off_33340 = 0;
  }
  return result;
}
