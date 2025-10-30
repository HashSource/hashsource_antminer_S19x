int __fastcall sub_CE130(_DWORD *a1, int a2)
{
  int v2; // r4

  if ( a2 )
  {
    v2 = 1;
    *a1 = a2;
  }
  else
  {
    v2 = 0;
    sub_D0048(38, 129, 67, "crypto/engine/eng_lib.c", 199);
  }
  return v2;
}
