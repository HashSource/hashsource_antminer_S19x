int __fastcall sub_10B4B8(int result, _DWORD *a2)
{
  _DWORD *v2; // r7
  int v3; // r6
  _DWORD *v4; // r5
  int v5; // r4
  int v6; // t1

  v2 = a2;
  if ( a2 )
  {
    v3 = result;
    do
    {
      if ( (int)v2[1] > 0 )
      {
        v4 = v2 + 1;
        v5 = 0;
        do
        {
          v6 = v4[1];
          ++v4;
          ++v5;
          result = (*(int (__fastcall **)(int, int))(*(_DWORD *)(v3 + 4) + 8))(v3, v6);
        }
        while ( v2[1] > v5 );
      }
      v2 = (_DWORD *)*v2;
    }
    while ( v2 );
  }
  return result;
}
