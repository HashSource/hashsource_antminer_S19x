_DWORD *sub_7B5F0()
{
  int v0; // r0
  int v1; // r3
  _DWORD *v2; // r0
  int v4; // r3

  v0 = dword_474F58;
  v1 = *(_DWORD *)dword_474F58;
  if ( *(int *)dword_474F58 <= 99 )
  {
    *(_DWORD *)dword_474F58 = v1 + 1;
    return (_DWORD *)(v0 + 16 * v1 + 8);
  }
  else
  {
    v2 = *(_DWORD **)(dword_474F58 + 4);
    if ( !v2 )
    {
      v2 = (_DWORD *)sub_93028(1608);
      v4 = dword_474F58;
      v2[1] = 0;
      *(_DWORD *)(v4 + 4) = v2;
    }
    dword_474F58 = (int)v2;
    *v2 = 0;
    *v2 = 1;
    return v2 + 2;
  }
}
