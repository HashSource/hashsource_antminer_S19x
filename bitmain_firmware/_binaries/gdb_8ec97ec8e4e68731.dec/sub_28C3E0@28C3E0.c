int __fastcall sub_28C3E0(int result)
{
  int v1; // r6
  int v2; // r4

  v1 = result;
  if ( result > 0 )
  {
    v2 = 0;
    do
    {
      ++v2;
      result = IO_putc(32, (_IO_FILE *)dword_48AAB0);
    }
    while ( v1 != v2 );
  }
  dword_48AE04 += v1;
  return result;
}
