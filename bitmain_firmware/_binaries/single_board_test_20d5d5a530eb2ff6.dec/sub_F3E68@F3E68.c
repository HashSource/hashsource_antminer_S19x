int __fastcall sub_F3E68(int a1)
{
  int result; // r0
  int v2; // r0

  result = sub_10C510(a1);
  dword_6E1ACC = result;
  if ( result )
  {
    v2 = sub_10C510(result);
    dword_6E1AD0 = v2;
    if ( v2 )
    {
      dword_6E1AD4 = sub_10C510(v2);
      if ( dword_6E1AD4 )
      {
        if ( sub_F4BE8() )
        {
          result = 1;
          dword_6E1AD8 = 1;
          goto LABEL_6;
        }
        sub_10C574(dword_6E1AD4);
        dword_6E1AD4 = 0;
      }
      sub_10C574(dword_6E1AD0);
      dword_6E1AD0 = 0;
    }
    sub_10C574(dword_6E1ACC);
    result = 0;
    dword_6E1ACC = 0;
  }
LABEL_6:
  dword_6E1ADC = result;
  return result;
}
