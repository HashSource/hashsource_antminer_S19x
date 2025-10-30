int sub_694B8()
{
  int result; // r0
  unsigned int v1; // r4
  int v2; // r3

  result = blocking_child_ready_seen;
  if ( blocking_child_ready_seen != blocking_child_ready_done )
  {
    blocking_child_ready_done = blocking_child_ready_seen;
    if ( blocking_children_alloc )
    {
      v1 = 0;
      do
      {
        result = *(_DWORD *)(blocking_children + 4 * v1);
        if ( result )
        {
          v2 = *(_DWORD *)(result + 68);
          if ( v2 != *(_DWORD *)(result + 72) )
          {
            *(_DWORD *)(result + 72) = v2;
            result = sub_693BC(result);
          }
        }
        ++v1;
      }
      while ( blocking_children_alloc > v1 );
    }
  }
  return result;
}
