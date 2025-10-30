int sub_28CC28()
{
  int v0; // r12
  _BYTE *v1; // r3
  _DWORD *v2; // r0
  void (__fastcall *v3)(_DWORD *); // r1

  v0 = off_470780;
  v1 = *(_BYTE **)off_470780;
  if ( *(_DWORD *)off_470780 )
  {
    if ( !*v1 )
      goto LABEL_5;
    do
      *v1++ = 0;
    while ( *v1 );
    v1 = *(_BYTE **)v0;
    if ( *(_DWORD *)v0 )
LABEL_5:
      *v1 = 0;
  }
  v2 = *(_DWORD **)(v0 + 4);
  v3 = (void (__fastcall *)(_DWORD *))off_470784;
  dword_48AE2C = 0;
  dword_48AE04 = 0;
  dword_48AE34 = 0;
  if ( v2 )
  {
    v2[1] = 0;
    *v2 = 0;
  }
  dword_48AE30 = 0;
  dword_48AE38 = 0;
  ++dword_48AE40;
  v3(v2);
  return 0;
}
