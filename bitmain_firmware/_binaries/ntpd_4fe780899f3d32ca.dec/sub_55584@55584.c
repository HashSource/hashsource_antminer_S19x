int __fastcall sub_55584(int *a1)
{
  int v1; // r4
  int v2; // r3
  int v3; // r0
  int v4; // r0
  int result; // r0

  v1 = *a1;
  v2 = *(_DWORD *)(*a1 + 2124);
  v3 = *(_DWORD *)(*a1 + 2116);
  if ( v2 )
  {
    if ( v2 <= 100 )
      goto LABEL_5;
    v4 = v3 - 4;
    if ( v4 < 0 )
    {
      *(_DWORD *)(v1 + 2116) = 0;
      goto LABEL_5;
    }
  }
  else
  {
    v4 = v3 + 4;
    if ( v4 > 255 )
      v4 = 255;
  }
  *(_DWORD *)(v1 + 2116) = v4;
LABEL_5:
  result = sub_612E0();
  *(_DWORD *)(v1 + 2124) = 0;
  return result;
}
