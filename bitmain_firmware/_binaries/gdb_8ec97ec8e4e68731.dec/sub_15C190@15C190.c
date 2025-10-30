unsigned int __fastcall sub_15C190(unsigned __int8 *a1, int a2, int a3)
{
  unsigned __int8 *v3; // r12
  unsigned __int8 *v4; // r0
  unsigned __int8 v5; // t1
  int v6; // r1
  unsigned int v7; // r3
  int v8; // t1
  unsigned __int8 *v10; // r2
  int v11; // r1
  unsigned __int8 *v12; // r0
  int v13; // t1

  v3 = &a1[a2];
  if ( a2 > 8 )
    sub_946E0("That operation is not available on integers of more than %d bytes.", 8);
  if ( !a3 )
  {
    v5 = *a1;
    v4 = a1 + 1;
    v6 = ((unsigned __int64)(unsigned __int8)~(v5 ^ 0x7F) - 128) >> 32;
    v7 = (unsigned __int8)~(v5 ^ 0x7F) - 128;
    if ( v3 > v4 )
    {
      do
      {
        v8 = *v4++;
        v6 = (v6 << 8) | HIBYTE(v7);
        v7 = v8 | (v7 << 8);
      }
      while ( v3 != v4 );
    }
    return v7;
  }
  v10 = v3 - 2;
  v11 = ((unsigned __int64)(unsigned __int8)~(*(v3 - 1) ^ 0x7F) - 128) >> 32;
  v7 = (unsigned __int8)~(*(v3 - 1) ^ 0x7F) - 128;
  if ( a1 > v3 - 2 )
    return v7;
  v12 = a1 - 1;
  do
  {
    v13 = *v10--;
    v11 = (v11 << 8) | HIBYTE(v7);
    v7 = v13 | (v7 << 8);
  }
  while ( v10 != v12 );
  return v7;
}
