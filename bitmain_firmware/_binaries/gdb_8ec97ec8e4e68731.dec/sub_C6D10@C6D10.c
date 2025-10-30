int __fastcall sub_C6D10(int result)
{
  int v1; // r3
  bool v2; // zf
  int v3; // r3
  char v4; // r3

  v1 = *(_DWORD *)(*(_DWORD *)(result + 8) + 12);
  v2 = v1 == 20;
  if ( v1 == 20 )
    v3 = 31156;
  else
    v3 = 0;
  if ( v2 )
    HIWORD(v3) = 72;
  else
    *(_BYTE *)(result + 25) = v3;
  if ( v2 )
  {
    v4 = *(_BYTE *)v3;
    *(_BYTE *)(result + 25) = v4;
    *(_BYTE *)(result + 24) = v4;
  }
  return result;
}
