int sub_1B7C38()
{
  int result; // r0

  result = *(_DWORD *)(dword_487D2C + 36);
  if ( result )
  {
    while ( *(int *)(*(_DWORD *)(result + 40) + 84) <= 0 )
    {
      result = *(_DWORD *)result;
      if ( !result )
        return result;
    }
    return 1;
  }
  return result;
}
