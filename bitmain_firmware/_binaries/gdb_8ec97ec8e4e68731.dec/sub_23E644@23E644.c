int sub_23E644()
{
  int result; // r0
  int vars0; // [sp+4h] [bp+0h]
  int vars4; // [sp+8h] [bp+4h]
  int vars8; // [sp+Ch] [bp+8h]

  result = dword_48A4D4;
  if ( dword_48A4D4 )
  {
    while ( *(_DWORD *)(result + 8) != vars0 || *(_DWORD *)(result + 12) != vars4 || *(_DWORD *)(result + 16) != vars8 )
    {
      result = *(_DWORD *)(result + 4);
      if ( !result )
        return result;
    }
    return 1;
  }
  return result;
}
