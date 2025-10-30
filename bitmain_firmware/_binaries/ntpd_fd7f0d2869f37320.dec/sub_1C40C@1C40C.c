int sub_1C40C()
{
  _DWORD *v0; // r0
  _DWORD *v1; // r4
  int v3; // [sp+4h] [bp-8h]

  v0 = (_DWORD *)dword_BA3D8;
  if ( dword_BA3D8 )
  {
    do
    {
      v1 = (_DWORD *)*v0;
      sub_1C008(v0);
      v0 = v1;
    }
    while ( v1 );
  }
  dword_BA3D8 = 0;
  return v3;
}
