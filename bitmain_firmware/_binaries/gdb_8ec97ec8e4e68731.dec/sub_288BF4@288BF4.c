int __fastcall sub_288BF4(int result, int a2)
{
  int v2; // r3
  void *v3; // r2
  int v4; // r2
  unsigned int v5; // r3
  char *v6; // lr

  v2 = result;
  if ( result >= 0 )
  {
    v3 = off_46DED0;
    if ( (unsigned int)(result - 128) <= 0x7F && dword_46DED8 )
    {
      if ( *((_BYTE *)off_46DED0 + 216) == 1 )
      {
        v4 = *((_DWORD *)off_46DED0 + 55);
        v5 = result & 0xFFFFFF7F;
        *(_BYTE *)(v4 + 8 * v5) = 0;
        *(_DWORD *)(v4 + 8 * v5 + 4) = a2;
        return 0;
      }
    }
    else
    {
      v6 = (char *)off_46DED0 + 8 * result;
      *((_BYTE *)off_46DED0 + 8 * v2) = 0;
      dword_490100 = (int)v3;
      *((_DWORD *)v6 + 1) = a2;
      return 0;
    }
  }
  return result;
}
