int __fastcall sub_16950(int a1, int a2)
{
  unsigned int *v2; // r3
  unsigned int v3; // r1

  if ( a2 && *(_DWORD *)(a2 + 4) != -1 )
  {
    v2 = (unsigned int *)(a2 + 4);
    do
      v3 = __ldrex(v2);
    while ( __strex(v3 + 1, v2) );
    __dmb(0xBu);
  }
  return sub_7BA38(a1, "result");
}
