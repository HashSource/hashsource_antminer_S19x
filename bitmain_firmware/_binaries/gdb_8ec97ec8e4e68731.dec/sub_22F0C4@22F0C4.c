int sub_22F0C4()
{
  int result; // r0
  void (*v1)(); // r3
  bool v2; // zf
  void (*v3)(); // r3
  bool v4; // zf

  result = dword_4899A0;
  if ( dword_4899A0 )
  {
    v1 = *(void (**)())(dword_4899A0 + 180);
    v2 = v1 == nullsub_70;
    if ( v1 != nullsub_70 )
      v2 = (char *)v1 == (char *)sub_222DCC;
    if ( v2 )
    {
      while ( 1 )
      {
        result = *(_DWORD *)result;
        if ( !result )
          break;
        v3 = *(void (**)())(result + 180);
        v4 = v3 == nullsub_70;
        if ( v3 != nullsub_70 )
          v4 = (char *)v3 == (char *)sub_222DCC;
        if ( !v4 )
          return 1;
      }
    }
    else
    {
      return 1;
    }
  }
  return result;
}
