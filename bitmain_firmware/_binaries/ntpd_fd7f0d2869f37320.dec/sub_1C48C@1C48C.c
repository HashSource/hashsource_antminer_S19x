unsigned int sub_1C48C()
{
  _DWORD *v0; // r5
  _DWORD *v1; // r0
  unsigned int v2; // r6
  unsigned int v3; // r6
  _DWORD *v4; // r4

  v0 = (_DWORD *)dword_BA3D8;
  if ( !dword_BA3D8 )
    return 0;
  v1 = *(_DWORD **)dword_BA3D8;
  v2 = __clz(*(_DWORD *)(dword_BA3D8 + 8));
  *(_DWORD *)(dword_BA3D8 + 8) = 1;
  v3 = v2 >> 5;
  if ( v1 )
  {
    do
    {
      v4 = (_DWORD *)*v1;
      sub_1C008(v1);
      v1 = v4;
    }
    while ( v4 );
  }
  *v0 = 0;
  return v3;
}
