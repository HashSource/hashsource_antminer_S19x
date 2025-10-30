const char *__fastcall sub_12C9C0(unsigned int a1)
{
  if ( (a1 & 0xFFFFFFF7) == 0x102 )
    a1 &= ~0x100u;
  if ( a1 > 0x1E )
    return "(unknown)";
  else
    return off_20FE68[a1];
}
