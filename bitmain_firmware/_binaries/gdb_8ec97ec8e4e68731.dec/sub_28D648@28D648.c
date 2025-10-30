int __fastcall sub_28D648(int a1)
{
  int v2; // r4
  int v3; // r2
  int *v4; // lr
  int result; // r0

  sub_29451C(a1);
  if ( a1 <= 0 )
  {
    result = sub_29451C(a1);
  }
  else
  {
    v2 = 0;
    do
    {
      ++v2;
      IO_putc(32, (_IO_FILE *)dword_48AAB0);
    }
    while ( a1 != v2 );
    sub_29451C(v2);
    v3 = 0;
    v4 = (int *)off_470780;
    do
    {
      ++v3;
      result = *v4;
      --dword_48AE04;
      *(_BYTE *)(result + dword_48AE04) = 0;
    }
    while ( v3 != v2 );
  }
  ++dword_48AEF0;
  return result;
}
