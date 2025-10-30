bool sub_1C24C()
{
  _DWORD *v0; // r5
  _BOOL4 v1; // r6
  _DWORD *v2; // r0
  int v3; // r6
  _DWORD *v4; // r4

  v0 = (_DWORD *)dword_B93D8;
  if ( !dword_B93D8 )
    return 0;
  v2 = *(_DWORD **)dword_B93D8;
  v3 = *(_DWORD *)(dword_B93D8 + 8);
  *(_DWORD *)(dword_B93D8 + 8) = 1;
  v1 = v3 == 0;
  if ( v2 )
  {
    do
    {
      v4 = (_DWORD *)*v2;
      sub_1BDD8(v2);
      v2 = v4;
    }
    while ( v4 );
  }
  *v0 = 0;
  return v1;
}
