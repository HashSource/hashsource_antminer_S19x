int __fastcall sigint_handler(int result)
{
  if ( off_33344 )
    return ((int (__fastcall *)(int))off_33344)(result);
  return result;
}
