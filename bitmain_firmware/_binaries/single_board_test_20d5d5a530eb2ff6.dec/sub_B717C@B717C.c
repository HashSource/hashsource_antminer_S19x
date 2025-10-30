int __fastcall sub_B717C(int result)
{
  int v1; // r3
  int v2; // r5
  int v3; // r4

  if ( result )
  {
    v1 = result;
    do
    {
      __dmb(0xBu);
      v2 = *(_DWORD *)(v1 + 48);
      __dmb(0xBu);
      v3 = *(_DWORD *)(v1 + 40);
      result = BIO_vfree_0(v1);
      v1 = v3;
    }
    while ( v2 <= 1 && v3 );
  }
  return result;
}
