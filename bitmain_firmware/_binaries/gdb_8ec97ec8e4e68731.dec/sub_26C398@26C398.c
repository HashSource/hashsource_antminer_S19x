int __fastcall sub_26C398(int result)
{
  int v1; // r4

  if ( result )
  {
    do
    {
      v1 = *(_DWORD *)(result + 88);
      ((void (*)(void))loc_26C200)();
      result = v1;
    }
    while ( v1 );
  }
  return result;
}
