unsigned int __fastcall sub_2AB014(unsigned int a1)
{
  _DWORD *v1; // r3
  unsigned int i; // r2
  unsigned int v3; // t1

  v1 = &unk_411C28;
  for ( i = 31; i < a1; i = v3 )
  {
    if ( v1 == (_DWORD *)&unk_411C50 )
    {
      i = 65537;
      break;
    }
    v3 = v1[1];
    ++v1;
  }
  dword_4707F0 = i;
  return i;
}
