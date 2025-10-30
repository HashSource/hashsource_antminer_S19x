int __fastcall sub_26C464(int a1)
{
  int v1; // lr
  int v2; // r3
  int v3; // r1

  v1 = dword_48AA00;
  if ( !dword_48AA00 )
  {
LABEL_7:
    dword_48AA00 = 0;
    return v1;
  }
  v2 = *(_DWORD *)(dword_48AA00 + 88);
  if ( a1 != v2 )
  {
    v3 = dword_48AA00;
    while ( 1 )
    {
      *(_BYTE *)(v3 + 4) |= 0x10u;
      if ( !v2 )
        goto LABEL_7;
      v3 = v2;
      if ( *(_DWORD *)(v2 + 88) == a1 )
        goto LABEL_9;
      v2 = *(_DWORD *)(v2 + 88);
    }
  }
  v2 = dword_48AA00;
LABEL_9:
  dword_48AA00 = a1;
  *(_DWORD *)(v2 + 88) = 0;
  return v1;
}
