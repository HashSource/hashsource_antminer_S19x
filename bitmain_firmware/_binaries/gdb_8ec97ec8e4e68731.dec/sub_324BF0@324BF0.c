_DWORD *sub_324BF0()
{
  _DWORD *v0; // r4
  _DWORD *v1; // r0
  _DWORD *v2; // r3
  __int64 v3; // r0
  void *v5; // r0

  v0 = malloc(0xCu);
  if ( v0 )
  {
    v1 = malloc(0xFE0u);
    v2 = v1;
    v0[2] = v1;
    if ( v1 )
    {
      LODWORD(v3) = v1 + 2;
      HIDWORD(v3) = 4056;
      *v2 = 0;
      v2[1] = 0;
      *(_QWORD *)v0 = v3;
    }
    else
    {
      v5 = v0;
      v0 = 0;
      free(v5);
    }
  }
  return v0;
}
