_DWORD *sub_15AA00()
{
  _DWORD *result; // r0
  int v1; // r4

  result = (_DWORD *)sub_CDEA4();
  if ( result )
  {
    v1 = (int)result;
    if ( sub_CE130(result, (int)"dynamic")
      && sub_CE15C(v1, (int)"Dynamic engine loading support")
      && sub_CE190(v1, (int)sub_15A9FC)
      && sub_CE198(v1, (int)sub_15A3DC)
      && sub_CE1A0(v1, (int)sub_15A438)
      && sub_CE1A8(v1, 4)
      && sub_CE1B0(v1, (int)&unk_210884) )
    {
      sub_CE59C(v1);
      sub_CE00C(v1);
      return sub_D00F0();
    }
    else
    {
      return (_DWORD *)sub_CE00C(v1);
    }
  }
  return result;
}
