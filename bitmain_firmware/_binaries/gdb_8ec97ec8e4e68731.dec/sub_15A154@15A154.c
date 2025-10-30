int __fastcall sub_15A154(char *a1, unsigned __int8 *a2)
{
  int result; // r0
  int v3; // r3
  unsigned __int8 *v4; // r2
  bool v5; // zf
  int v6; // t1

  v5 = "dos-based" == a1;
  result = (int)a2;
  if ( !v5 )
    return sub_3245A4(a2);
  v3 = *a2;
  if ( (word_438898[v3] & 0x88) != 0 && a2[1] == 58 )
  {
    v3 = a2[2];
    result = (int)(a2 + 2);
  }
  if ( v3 )
  {
    v4 = (unsigned __int8 *)(result + 1);
    do
    {
      v5 = v3 == 92;
      if ( v3 != 92 )
        v5 = v3 == 47;
      if ( v5 )
        result = (int)v4;
      v6 = *v4++;
      v3 = v6;
    }
    while ( v6 );
  }
  return result;
}
