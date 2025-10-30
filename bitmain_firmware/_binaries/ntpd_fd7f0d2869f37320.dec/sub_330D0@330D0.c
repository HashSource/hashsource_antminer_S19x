_DWORD *sub_330D0()
{
  _DWORD *v0; // r4
  _DWORD *result; // r0

  v0 = (_DWORD *)peer_list;
  if ( peer_list )
  {
    do
    {
      result = sub_3304C(v0);
      v0 = (_DWORD *)*v0;
    }
    while ( v0 );
  }
  return result;
}
