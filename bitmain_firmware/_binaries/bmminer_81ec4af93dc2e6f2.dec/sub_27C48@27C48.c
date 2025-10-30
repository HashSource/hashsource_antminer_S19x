int __fastcall sub_27C48(int a1, int a2)
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
LABEL_4:
      result = sub_76E30((unsigned __int8)v2, a2, 0);
  }
  return result;
}
