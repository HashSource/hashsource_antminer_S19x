int __fastcall sub_F8B44(int a1)
{
  if ( a1 < 1024 )
    return 2;
  if ( a1 < 4096 )
    return 3;
  if ( a1 < 0x2000 )
    return 4;
  return 5;
}
