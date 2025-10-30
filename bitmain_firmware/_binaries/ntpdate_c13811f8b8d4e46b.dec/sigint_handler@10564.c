int __fastcall sigint_handler(int result)
{
  if ( off_33340 )
    return ((int (__fastcall *)(int))off_33340)(result);
  return result;
}
