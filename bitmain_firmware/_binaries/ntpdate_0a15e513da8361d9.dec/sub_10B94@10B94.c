int __fastcall sub_10B94(int (__fastcall *a1)(_DWORD, _DWORD))
{
  int result; // r0

  if ( a1 )
  {
    off_33344 = a1;
    return sub_10AD4(2, (void (*)(int))sigint_handler);
  }
  else
  {
    result = sub_10AD4(2, 0);
    off_33344 = 0;
  }
  return result;
}
