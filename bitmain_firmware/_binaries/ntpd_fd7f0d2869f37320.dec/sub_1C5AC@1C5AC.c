_DWORD *sub_1C5AC()
{
  _DWORD *result; // r0

  result = (_DWORD *)dword_BA3D8;
  if ( dword_BA3D8 )
  {
    if ( *(_DWORD *)dword_BA3D8 )
    {
      dword_BA3D8 = *(_DWORD *)dword_BA3D8;
      sub_1C008(result);
      return &dword_0 + 1;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
