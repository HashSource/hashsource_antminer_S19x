int __fastcall sub_2943A0(int result, int a2)
{
  int v2; // r6

  v2 = result;
  if ( dword_4707A0 == -1 )
    result = sub_293F08((char *)dword_48AAF4);
  if ( v2 > 0 )
  {
    dword_49014C = v2;
    if ( a2 <= 0 )
    {
      a2 = dword_490144;
LABEL_7:
      dword_490130 = a2 * dword_49014C;
      return result;
    }
LABEL_5:
    dword_490144 = a2;
    if ( !dword_4707A0 )
      dword_490144 = --a2;
    goto LABEL_7;
  }
  if ( a2 > 0 )
    goto LABEL_5;
  return result;
}
