int __fastcall sub_A52F4(int a1, unsigned int a2)
{
  if ( a2 > 4 )
  {
    sub_D0048(20, 550, 232, "ssl/t1_lib.c", 2912);
    return 0;
  }
  else
  {
    *(_BYTE *)(a1 + 1472) = a2;
    return 1;
  }
}
