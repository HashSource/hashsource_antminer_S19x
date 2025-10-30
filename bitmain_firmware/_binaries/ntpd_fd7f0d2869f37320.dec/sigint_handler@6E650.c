int __fastcall sigint_handler(int result)
{
  if ( off_10824C )
    return ((int (__fastcall *)(int))off_10824C)(result);
  return result;
}
