char *sub_3760()
{
  char *result; // r0

  result = &_bss_start__;
  if ( (unsigned int)(&unk_3127B - (_UNKNOWN *)&_bss_start__) > 6 )
  {
    if ( &ITM_deregisterTMCloneTable )
      return (char *)ITM_deregisterTMCloneTable();
  }
  return result;
}
