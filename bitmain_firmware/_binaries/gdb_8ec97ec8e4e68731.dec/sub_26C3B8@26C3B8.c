int __fastcall sub_26C3B8(int result)
{
  int v1; // r2
  int v2; // r3
  char v3; // r3
  char v4; // r1

  v1 = dword_48AA00;
  if ( dword_48AA00 == result )
  {
    v4 = *(_BYTE *)(dword_48AA00 + 4);
    result = *(_DWORD *)(dword_48AA00 + 88);
    *(_DWORD *)(dword_48AA00 + 88) = 0;
    *(_BYTE *)(v1 + 4) = v4 | 0x10;
    dword_48AA00 = result;
  }
  else if ( dword_48AA00 )
  {
    v2 = *(_DWORD *)(dword_48AA00 + 88);
    if ( result == v2 )
    {
      v2 = dword_48AA00;
LABEL_8:
      *(_DWORD *)(v2 + 88) = *(_DWORD *)(result + 88);
      v3 = *(_BYTE *)(result + 4);
      *(_DWORD *)(result + 88) = 0;
      *(_BYTE *)(result + 4) = v3 | 0x10;
    }
    else
    {
      while ( v2 )
      {
        if ( *(_DWORD *)(v2 + 88) == result )
          goto LABEL_8;
        v2 = *(_DWORD *)(v2 + 88);
      }
    }
  }
  return result;
}
