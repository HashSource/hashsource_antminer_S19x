void __fastcall sub_324D50(_DWORD *ptr)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r4

  v2 = (_DWORD *)ptr[2];
  if ( v2 )
  {
    do
    {
      v3 = (_DWORD *)*v2;
      free(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  free(ptr);
}
