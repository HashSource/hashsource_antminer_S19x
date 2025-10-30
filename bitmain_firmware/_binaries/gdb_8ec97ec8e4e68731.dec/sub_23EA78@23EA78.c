_DWORD *sub_23EA78()
{
  _DWORD *result; // r0
  int vars0; // [sp+4h] [bp+0h]
  int vars4; // [sp+8h] [bp+4h]
  int vars8; // [sp+Ch] [bp+8h]

  result = (_DWORD *)dword_48A4D4;
  if ( dword_48A4D4 )
  {
    while ( result[2] != vars0 || vars4 != result[3] || vars8 != result[4] )
    {
      result = (_DWORD *)result[1];
      if ( !result )
        return result;
    }
    return (_DWORD *)result[81];
  }
  return result;
}
