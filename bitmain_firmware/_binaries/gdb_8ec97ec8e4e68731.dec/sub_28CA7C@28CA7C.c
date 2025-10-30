int sub_28CA7C()
{
  int result; // r0
  int v1; // r3
  _DWORD *v2; // r1

  result = 0;
  v1 = off_470780;
  if ( *(_DWORD *)off_470780 )
    **(_BYTE **)off_470780 = 0;
  v2 = *(_DWORD **)(v1 + 4);
  dword_48AE2C = 0;
  dword_48AE04 = 0;
  dword_48AE34 = 0;
  dword_48AE30 = 0;
  if ( v2 )
  {
    v2[1] = 0;
    *v2 = 0;
  }
  dword_48AE38 = 0;
  return result;
}
