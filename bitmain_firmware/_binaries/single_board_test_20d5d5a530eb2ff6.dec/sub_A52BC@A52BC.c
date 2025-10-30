int __fastcall sub_A52BC(int a1, unsigned int a2)
{
  if ( a2 > 4 )
  {
    sub_D0048(20, 551, 232, "ssl/t1_lib.c", 2899);
    return 0;
  }
  else
  {
    *(_BYTE *)(a1 + 348) = a2;
    return 1;
  }
}
