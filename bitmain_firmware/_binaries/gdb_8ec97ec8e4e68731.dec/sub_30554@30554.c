void __fastcall sub_30554(int a1, _DWORD *ptr)
{
  _DWORD *v3; // r0
  _DWORD *v4; // r4

  if ( ptr[10] )
  {
    sub_323B84();
    ptr[10] = 0;
  }
  v3 = (_DWORD *)ptr[11];
  if ( v3 )
  {
    do
    {
      v4 = (_DWORD *)*v3;
      sub_200A30();
      v3 = v4;
    }
    while ( v4 );
  }
  free(ptr);
}
