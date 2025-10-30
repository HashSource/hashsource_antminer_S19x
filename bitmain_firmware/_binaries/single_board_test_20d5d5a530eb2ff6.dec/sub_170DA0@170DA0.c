int __fastcall sub_170DA0(int a1, unsigned int *a2)
{
  unsigned int v3; // r4
  unsigned int v4; // r7
  _BOOL4 v7; // r0

  v3 = *a2;
  if ( a1 < 0 )
    v4 = 0x7FFFFFFF;
  else
    v4 = a1;
  if ( (v3 & 1) != 0 )
  {
    v7 = !sub_BDB10(v4, 4);
    if ( v4 == 32 )
      v7 = 0;
    if ( v7 )
      v3 &= ~1u;
  }
  if ( (v3 & 2) != 0 && !sub_BDB10(v4, 2048) )
    v3 &= ~2u;
  if ( (v3 & 0x10) != 0 && (v4 & 0xFFFFFF80) != 0 )
    v3 &= ~0x10u;
  if ( (((unsigned int)a1 > 0xFF) & (v3 >> 2)) != 0 )
    v3 &= ~4u;
  if ( (v3 & 0x800) != 0 )
  {
    if ( (unsigned int)a1 < 0x10000 )
    {
LABEL_15:
      *a2 = v3;
      return 1;
    }
    v3 &= ~0x800u;
  }
  if ( v3 )
    goto LABEL_15;
  return -1;
}
