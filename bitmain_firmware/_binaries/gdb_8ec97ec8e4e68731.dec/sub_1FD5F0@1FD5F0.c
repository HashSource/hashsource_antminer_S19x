int *__fastcall sub_1FD5F0(int a1)
{
  int *result; // r0
  char buf; // [sp+7h] [bp-1h] BYREF

  do
  {
    do
      result = (int *)read(*(_DWORD *)(a1 + 4), &buf, 1u);
    while ( (int)result > 0 );
    if ( !result )
      break;
    result = _errno_location();
  }
  while ( *result == 4 );
  return result;
}
