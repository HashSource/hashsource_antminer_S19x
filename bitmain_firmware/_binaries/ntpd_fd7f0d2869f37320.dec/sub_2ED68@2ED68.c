int sub_2ED68()
{
  int result; // r0

  result = _stack_chk_guard;
  if ( pll_control )
  {
    if ( kern_enable )
      return sub_26294(13, 0, "kernel time sync disabled");
  }
  return result;
}
