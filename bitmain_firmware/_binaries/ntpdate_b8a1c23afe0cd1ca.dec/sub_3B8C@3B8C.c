int sub_3B8C()
{
  int result; // r0
  _DWORD *v1; // r4
  unsigned int v2; // r3

  result = _stack_chk_guard;
  ++current_time;
  v1 = (_DWORD *)sys_servers;
  if ( sys_servers )
  {
    do
    {
      while ( 1 )
      {
        v2 = v1[15];
        if ( v2 )
        {
          if ( v2 <= current_time )
            break;
        }
        v1 = (_DWORD *)*v1;
        if ( !v1 )
          return result;
      }
      result = sub_3A94((int)v1);
      v1 = (_DWORD *)*v1;
    }
    while ( v1 );
  }
  return result;
}
