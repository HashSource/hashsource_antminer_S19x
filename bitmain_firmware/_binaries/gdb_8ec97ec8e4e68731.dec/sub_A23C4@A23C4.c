const char *__fastcall sub_A23C4(int a1)
{
  if ( (unsigned int)(a1 - 100) > 0xA )
    return "<?>";
  else
    return *(const char **)&asc_373FF8[4 * a1 - 332];
}
