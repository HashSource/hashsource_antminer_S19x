__int16 *sub_2F368()
{
  __int16 *result; // r0

  result = (__int16 *)_stack_chk_guard;
  if ( pll_control )
  {
    if ( kern_enable )
      return sub_25EE0((__int16 *)&byte_9[4], 0, "kernel time sync disabled");
  }
  return result;
}
