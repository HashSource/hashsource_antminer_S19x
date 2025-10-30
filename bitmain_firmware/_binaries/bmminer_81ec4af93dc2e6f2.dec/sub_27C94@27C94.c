int __fastcall sub_27C94(int a1, int a2, int a3, int a4)
{
  int v4; // r4
  int result; // r0

  v4 = 0;
  result = sub_266F0(0);
  if ( result )
    goto LABEL_4;
  while ( ++v4 != 4 )
  {
    result = sub_266F0(v4);
    if ( result )
LABEL_4:
      result = sub_76E6C((unsigned __int8)v4, a2, a3, a4);
  }
  return result;
}
