int __fastcall sub_CE15C(int a1, int a2)
{
  int v2; // r4

  if ( a2 )
  {
    v2 = 1;
    *(_DWORD *)(a1 + 4) = a2;
  }
  else
  {
    v2 = 0;
    sub_D0048(38, 130, 67, "crypto/engine/eng_lib.c", 209);
  }
  return v2;
}
