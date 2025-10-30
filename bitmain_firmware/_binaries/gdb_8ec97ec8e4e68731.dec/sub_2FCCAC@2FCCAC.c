int __fastcall sub_2FCCAC(int result)
{
  int v1; // r3
  int *v2; // lr
  int *v3; // r12
  int v4; // r1
  int v5; // r2
  int v6; // r1
  bool v7; // zf

  v1 = *(_DWORD *)(result + 28);
  v2 = (int *)(result + 28);
  v3 = (int *)(result + 28);
  if ( v1 )
  {
    while ( 1 )
    {
      v4 = *(_DWORD *)(v1 + 16);
      v5 = *(_BYTE *)(v1 + 12) & 0xFD;
      if ( (*(_BYTE *)(v1 + 12) & 0xFD) == 0 )
        break;
LABEL_6:
      v3 = (int *)(v1 + 16);
      v1 = v4;
      if ( !v4 )
        return result;
    }
    while ( 1 )
    {
      *v3 = v4;
      v6 = *(_DWORD *)(result + 32);
      *(_DWORD *)(v1 + 16) = v5;
      if ( v6 == v1 )
        break;
      v1 = *v3;
      if ( !*v3 )
        return result;
      v4 = *(_DWORD *)(v1 + 16);
      v5 = *(_BYTE *)(v1 + 12) & 0xFD;
      if ( (*(_BYTE *)(v1 + 12) & 0xFD) != 0 )
        goto LABEL_6;
    }
    v7 = v3 == v2;
    if ( v3 == v2 )
      *(_DWORD *)(result + 32) = v5;
    else
      v3 -= 4;
    if ( !v7 )
      *(_DWORD *)(result + 32) = v3;
  }
  return result;
}
