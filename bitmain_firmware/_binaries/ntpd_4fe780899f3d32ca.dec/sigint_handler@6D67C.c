int __fastcall sigint_handler(int result)
{
  if ( off_107228 )
    return ((int (__fastcall *)(int))off_107228)(result);
  return result;
}
