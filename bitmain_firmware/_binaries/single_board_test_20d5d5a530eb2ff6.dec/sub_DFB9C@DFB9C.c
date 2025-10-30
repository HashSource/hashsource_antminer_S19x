int __fastcall sub_DFB9C(int result, int (__fastcall *a2)(_DWORD, int), int a3)
{
  int v3; // r7
  int v4; // r8
  _DWORD *v5; // r9
  int v7; // r7
  _DWORD *v9; // r3
  _DWORD *v10; // r4

  if ( result )
  {
    v3 = *(_DWORD *)(result + 12);
    v4 = v3 - 1;
    if ( v3 - 1 >= 0 )
    {
      v5 = (_DWORD *)result;
      v7 = 4 * (v3 + 0x3FFFFFFF);
      do
      {
        v9 = *(_DWORD **)(*v5 + v7);
        if ( v9 )
        {
          do
          {
            v10 = (_DWORD *)v9[1];
            result = a2(*v9, a3);
            v9 = v10;
          }
          while ( v10 );
        }
        --v4;
        v7 -= 4;
      }
      while ( v4 != -1 );
    }
  }
  return result;
}
