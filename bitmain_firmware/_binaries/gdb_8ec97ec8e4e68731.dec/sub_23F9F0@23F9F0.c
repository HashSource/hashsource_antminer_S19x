int sub_23F9F0()
{
  int i; // r0
  int vars0; // [sp+4h] [bp+0h]
  __int64 vars4; // [sp+8h] [bp+4h]

  if ( dword_475848 != vars0 || vars4 != qword_47584C )
  {
    for ( i = dword_48A4D4; i; i = *(_DWORD *)(i + 4) )
    {
      if ( vars0 == *(_DWORD *)(i + 8) && vars4 == *(_QWORD *)(i + 12) )
        break;
    }
    JUMPOUT(0x23F928);
  }
  return sub_23D818();
}
