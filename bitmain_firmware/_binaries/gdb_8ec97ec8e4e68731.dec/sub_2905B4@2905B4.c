int sub_2905B4()
{
  const char *v0; // r0
  int result; // r0
  int v2; // r3
  int v3; // r7
  int v4; // r3
  int v5; // r2
  int v6; // r8
  char *v7; // r8

  if ( !dword_48AE34
    || dword_48AE04
    || (v2 = *(_DWORD *)(*(_DWORD *)(off_470780 + 4) + 4 * dword_48AE34),
        v3 = *(unsigned __int8 *)(*(_DWORD *)off_470780 + v2),
        *(_BYTE *)(*(_DWORD *)off_470780 + v2)) )
  {
    v0 = sub_28D00C((const char *)dword_48AE34);
  }
  else
  {
    v0 = sub_28D00C((const char *)--dword_48AE34);
    if ( dword_4707A0 )
    {
      v4 = *(_DWORD *)(off_470780 + 4);
      v5 = *(_DWORD *)(v4 + 4 * dword_48AE34);
      v0 = (const char *)(*(_DWORD *)(v4 + 4 * (dword_48AE34 + 1)) - v5);
      if ( v0 == (const char *)dword_490144 )
      {
        v6 = *(_DWORD *)off_470780;
        dword_48AEF8 = -1;
        v7 = (char *)(v6 + v5);
        sub_28CCC8((unsigned int)(v0 - 1), v7);
        sub_28D6E8(v3);
        v0 = (const char *)IO_putc((unsigned __int8)v7[dword_490144 - 1], (_IO_FILE *)dword_48AAB0);
      }
    }
  }
  dword_48AE34 = 0;
  sub_2945A8(v0);
  result = fflush((FILE *)dword_48AAB0);
  ++dword_48AEF0;
  return result;
}
