int __fastcall sub_DFB5C(int result, int (__fastcall *a2)(_DWORD))
{
  int v2; // r6
  int v3; // r7
  _DWORD *v4; // r8
  int v6; // r6
  _DWORD *v7; // r3
  _DWORD *v8; // r4

  if ( result )
  {
    v2 = *(_DWORD *)(result + 12);
    v3 = v2 - 1;
    if ( v2 - 1 >= 0 )
    {
      v4 = (_DWORD *)result;
      v6 = 4 * (v2 + 0x3FFFFFFF);
      do
      {
        v7 = *(_DWORD **)(*v4 + v6);
        if ( v7 )
        {
          do
          {
            v8 = (_DWORD *)v7[1];
            result = a2(*v7);
            v7 = v8;
          }
          while ( v8 );
        }
        --v3;
        v6 -= 4;
      }
      while ( v3 != -1 );
    }
  }
  return result;
}
