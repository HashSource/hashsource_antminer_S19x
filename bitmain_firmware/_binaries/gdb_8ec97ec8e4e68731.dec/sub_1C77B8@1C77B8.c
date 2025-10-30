int __fastcall sub_1C77B8(int result)
{
  _DWORD *v1; // r3

  v1 = (_DWORD *)dword_487CEC;
  if ( !dword_487CEC )
    return sub_259858("No display number %d.\n", result);
  if ( result != *(_DWORD *)(dword_487CEC + 12) )
  {
    do
    {
      v1 = (_DWORD *)*v1;
      if ( !v1 )
        return sub_259858("No display number %d.\n", result);
    }
    while ( v1[3] != result );
  }
  v1[8] = 0;
  return result;
}
