_DWORD *sub_23E408()
{
  _DWORD *result; // r0
  int vars0; // [sp+4h] [bp+0h]
  int vars4; // [sp+8h] [bp+4h]
  int vars8; // [sp+Ch] [bp+8h]

  result = (_DWORD *)dword_48A4D4;
  if ( dword_48A4D4 )
  {
    do
    {
      if ( result[2] == vars0 && result[3] == vars4 && result[4] == vars8 )
        break;
      result = (_DWORD *)result[1];
    }
    while ( result );
  }
  return result;
}
