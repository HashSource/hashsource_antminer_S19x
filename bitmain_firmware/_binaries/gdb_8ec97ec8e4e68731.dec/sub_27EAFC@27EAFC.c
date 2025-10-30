__sighandler_t sub_27EAFC()
{
  __sighandler_t result; // r0

  if ( dword_48AA9C )
  {
    result = signal(2, (__sighandler_t)dword_48AA98);
    dword_48AA9C = 0;
  }
  return result;
}
