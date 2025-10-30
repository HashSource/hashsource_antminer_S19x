int __fastcall sub_41010(int a1, int a2, int a3)
{
  int v3; // r4
  int result; // r0

  v3 = 1;
  sigemptyset(&stru_4720B4);
  do
  {
    result = sub_99AEC(v3);
    if ( result < a2 )
    {
      if ( *(_BYTE *)(a3 + result) )
        result = sigaddset(&stru_4720B4, v3);
    }
    ++v3;
  }
  while ( v3 != 65 );
  return result;
}
