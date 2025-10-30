int __fastcall sub_12F8E8(_DWORD *a1, _DWORD *a2, int a3, int a4)
{
  _DWORD *v4; // r5
  _DWORD *v5; // r6
  int v6; // r4

  if ( a3 <= 0 )
    return 0;
  if ( (a3 & 0xFFFFFFFC) == 0 )
    goto LABEL_6;
  v4 = a2 + 4;
  v5 = a1 + 4;
  do
  {
    v6 = *(v4 - 4);
    a3 -= 4;
    a2 = v4;
    a1 = v5;
    v4 += 4;
    v5 += 4;
    *(v5 - 8) = v6 * a4;
    *(v5 - 7) = *(v4 - 7) * a4;
    *(v5 - 6) = *(v4 - 6) * a4;
    *(v5 - 5) = *(v4 - 5) * a4;
  }
  while ( (a3 & 0xFFFFFFFC) != 0 );
  if ( a3 )
  {
LABEL_6:
    *a1 = *a2 * a4;
    if ( a3 != 1 )
    {
      a1[1] = a2[1] * a4;
      if ( a3 != 2 )
        a1[2] = a4 * a2[2];
    }
  }
  return 0;
}
