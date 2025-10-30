int __fastcall sub_122128(int a1, int a2)
{
  if ( *(__int16 *)(a2 + 12) > 2 )
  {
    if ( (*(_BYTE *)(a2 + 192) & 4) != 0 )
    {
      if ( (*(_BYTE *)(a2 + 192) & 8) != 0 )
        goto LABEL_4;
LABEL_6:
      if ( **(_WORD **)(a1 + 20) != 2 )
        return 1;
      return 3;
    }
    sub_11D77C(a2);
    if ( (*(_BYTE *)(a2 + 192) & 8) == 0 )
      goto LABEL_6;
  }
LABEL_4:
  if ( *(_WORD *)a1 != 28 )
    return 1;
  return 3;
}
