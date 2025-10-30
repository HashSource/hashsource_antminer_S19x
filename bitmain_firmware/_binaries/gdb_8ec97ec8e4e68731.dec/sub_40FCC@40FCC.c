int *sub_40FCC()
{
  int *result; // r0

  ((void (*)(void))loc_40F84)();
  do
  {
    result = (int *)write(dword_46AF78, "+", 1u);
    if ( result != (int *)-1 )
      break;
    result = _errno_location();
  }
  while ( *result == 4 );
  return result;
}
