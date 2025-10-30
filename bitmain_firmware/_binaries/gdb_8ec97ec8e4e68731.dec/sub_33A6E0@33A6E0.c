int __fastcall sub_33A6E0(unsigned int a1, int a2)
{
  unsigned int *v2; // r3
  unsigned int v3; // r2
  unsigned int v4; // r2
  int result; // r0
  void (__fastcall *v6)(int); // r3
  int v7; // r4

  if ( a1 > 1 )
    sub_339730(*(void (__fastcall **)(_DWORD))(a2 - 20));
  v2 = (unsigned int *)(a2 - 40);
  __dmb(0xBu);
  do
  {
    v3 = __ldrex(v2);
    v4 = v3 - 1;
    result = __strex(v4, v2);
  }
  while ( result );
  __dmb(0xBu);
  if ( !v4 )
  {
    v6 = *(void (__fastcall **)(int))(a2 - 28);
    v7 = a2 + 88;
    if ( v6 )
      v6(a2 + 88);
    return sub_33AB94(v7);
  }
  return result;
}
