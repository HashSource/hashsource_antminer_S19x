int __fastcall sub_281C4(int a1, int a2)
{
  int v2; // r4
  int result; // r0

  v2 = 0;
  result = sub_266F0(0);
  if ( result )
    goto LABEL_4;
  while ( ++v2 != 4 )
  {
    result = sub_266F0(v2);
    if ( result )
    {
LABEL_4:
      sub_77304((unsigned __int8)v2);
      if ( a2 )
        result = sub_76948((unsigned __int8)v2);
      else
        result = sub_769A0((unsigned __int8)v2);
    }
  }
  return result;
}
