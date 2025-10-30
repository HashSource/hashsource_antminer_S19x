unsigned int __fastcall sub_31E7B4(unsigned __int8 *a1, int a2, unsigned int a3)
{
  unsigned __int8 *v3; // r1
  int v4; // t1

  if ( a2 )
  {
    v3 = &a1[a2];
    do
    {
      v4 = *a1++;
      a3 = dword_433F24[v4 ^ HIBYTE(a3)] ^ (a3 << 8);
    }
    while ( a1 != v3 );
  }
  return a3;
}
