_DWORD *__fastcall sub_126070(_DWORD *result, _DWORD *a2, int a3, int (__fastcall **a4)(int, int))
{
  _DWORD *v4; // r5
  size_t v5; // r7
  _DWORD *v7; // r4
  int v8; // r10
  int v9; // r6
  int v10; // r11
  int v11; // r0
  _DWORD *v12; // r0

  if ( result != a2 )
  {
    v4 = result + 2;
    if ( result + 2 != a2 )
    {
      v5 = 2;
      v7 = result;
      do
      {
        while ( 1 )
        {
          v10 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a3 + 4))(a3, v4[1]);
          v11 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a3 + 4))(a3, v7[1]);
          if ( (*a4)(v10 + v7[v5], v11 + *v7) < 0 )
            break;
          v12 = v4;
          v4 += 2;
          v5 += 2;
          result = (_DWORD *)sub_125E00(v12, a3, a4);
          if ( v4 == a2 )
            return result;
        }
        result = (_DWORD *)((char *)v4 + 8 - v5 * 4);
        v8 = v7[v5];
        v9 = v4[1];
        if ( v7 != v4 )
          result = memmove(result, v7, v5 * 4);
        v4 += 2;
        *v7 = v8;
        v7[1] = v9;
        v5 += 2;
      }
      while ( v4 != a2 );
    }
  }
  return result;
}
