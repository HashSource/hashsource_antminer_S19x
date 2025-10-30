_DWORD *sub_32B9C()
{
  _DWORD *v0; // r4
  _DWORD *result; // r0

  v0 = (_DWORD *)peer_list;
  if ( peer_list )
  {
    do
    {
      result = sub_32B18(v0);
      v0 = (_DWORD *)*v0;
    }
    while ( v0 );
  }
  return result;
}
