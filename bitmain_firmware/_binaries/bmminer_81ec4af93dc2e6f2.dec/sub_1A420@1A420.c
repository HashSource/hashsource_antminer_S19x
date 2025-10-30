int sub_1A420()
{
  int v0; // r5
  int v1; // r7
  int i; // r4
  int v4; // [sp+4h] [bp-8h] BYREF

  v0 = 0;
  v1 = 0;
  for ( i = 0; i != 4; ++i )
  {
    if ( sub_266F0(i) && !sub_1A2CC(i, (unsigned __int8)dword_B413C, &v4) )
    {
      ++v0;
      v1 += v4;
    }
  }
  if ( v0 )
    return sub_8C218(v1, v0);
  return v0;
}
