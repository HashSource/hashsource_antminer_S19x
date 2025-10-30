int sub_1C1CC()
{
  _DWORD *v0; // r0
  _DWORD *v1; // r4
  int v3; // [sp+4h] [bp-8h]

  v0 = (_DWORD *)dword_B93D8;
  if ( dword_B93D8 )
  {
    do
    {
      v1 = (_DWORD *)*v0;
      sub_1BDD8(v0);
      v0 = v1;
    }
    while ( v1 );
  }
  dword_B93D8 = 0;
  return v3;
}
