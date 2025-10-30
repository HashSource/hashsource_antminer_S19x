int sub_6A5D4()
{
  int result; // r0
  unsigned int v1; // r4

  result = sub_41BB4(0);
  if ( blocking_children_alloc )
  {
    v1 = 0;
    do
    {
      result = *(_DWORD *)(blocking_children + 4 * v1);
      if ( result )
        result = sub_6FA74(result);
      ++v1;
    }
    while ( blocking_children_alloc > v1 );
  }
  return result;
}
