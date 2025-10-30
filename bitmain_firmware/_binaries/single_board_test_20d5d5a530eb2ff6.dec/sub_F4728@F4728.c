int __fastcall sub_F4728(int a1)
{
  int result; // r0

  result = sub_10C594(&unk_6E1AE0, sub_F3E68);
  if ( result )
  {
    result = dword_6E1ADC;
    if ( dword_6E1ADC )
    {
      sub_10C554(dword_6E1AD0);
      sub_CDDF8(dword_6E1AE8);
      dword_6E1AEC = a1;
      dword_6E1AE8 = 0;
      sub_10C564(dword_6E1AD0);
      return 1;
    }
  }
  return result;
}
