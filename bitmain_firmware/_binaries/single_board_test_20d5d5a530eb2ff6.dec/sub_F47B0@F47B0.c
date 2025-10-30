int sub_F47B0()
{
  int result; // r0
  _UNKNOWN **v1; // r4
  int v2; // r0
  int v3; // r4
  int v4; // r0

  result = sub_10C594(&unk_6E1AE0, sub_F3E68);
  if ( result )
  {
    v1 = (_UNKNOWN **)dword_6E1ADC;
    if ( dword_6E1ADC )
    {
      v2 = sub_10C554(dword_6E1AD0);
      v1 = (_UNKNOWN **)dword_6E1AEC;
      if ( !dword_6E1AEC )
      {
        v3 = sub_15B918(v2);
        if ( v3 && (v4 = sub_15B928()) != 0 )
        {
          dword_6E1AE8 = v3;
          v1 = (_UNKNOWN **)v4;
          dword_6E1AEC = v4;
        }
        else
        {
          sub_CDDF8(v3);
          v1 = &rand_meth;
          dword_6E1AEC = (int)&rand_meth;
        }
      }
      sub_10C564(dword_6E1AD0);
    }
    return (int)v1;
  }
  return result;
}
