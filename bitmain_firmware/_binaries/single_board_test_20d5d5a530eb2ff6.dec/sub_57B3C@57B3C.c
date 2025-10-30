int __fastcall sub_57B3C(int a1, int a2, unsigned int a3)
{
  int v3; // r4
  int v5; // r7
  int (__fastcall *v6)(int, const void *, int, size_t, size_t, int, int); // r5
  int (__fastcall *v7)(int, const void *, int, size_t, size_t, int, int); // r2
  int (__fastcall *v8)(int, const void *, int, size_t, size_t, int, int); // r3
  int v10; // r1
  int v11; // r0
  int v12; // r3
  unsigned int v13; // r2

  v3 = *(_DWORD *)(a1 + 100);
  if ( v3 )
  {
    if ( *(_DWORD *)(a1 + 76) == 1 )
    {
      if ( v3 + 8 <= a3 )
      {
        v5 = *(_DWORD *)(a1 + 48);
        if ( *(_DWORD *)(a1 + 168) == 1 )
        {
          v8 = (int (__fastcall *)(int, const void *, int, size_t, size_t, int, int))(sub_57078 + 1);
        }
        else
        {
          if ( v5 > 2 )
          {
            LOWORD(v6) = 29209;
            LOWORD(v7) = 29377;
          }
          else
          {
            LOWORD(v6) = 29213;
            LOWORD(v7) = 29453;
          }
          HIWORD(v6) = 5;
          HIWORD(v7) = 5;
          if ( *(_DWORD *)(a1 + 20) == 1 )
            v8 = v7;
          else
            v8 = v6;
        }
        v3 = sub_5718C(
               a2,
               *(const void **)(a1 + 96),
               *(_DWORD *)(a1 + 100),
               v8,
               *(_DWORD *)(a1 + 160),
               v5,
               *(_DWORD *)(a1 + 80),
               *(_DWORD *)(a1 + 44));
        v10 = *(_DWORD *)(a1 + 96);
        if ( !*(_DWORD *)(a1 + 20) )
        {
          v10 += *(_DWORD *)(a1 + 100);
          *(_DWORD *)(a1 + 96) = v10;
        }
        v11 = *(_DWORD *)(a1 + 92);
        v12 = *(_DWORD *)(a1 + 88);
        v13 = *(_DWORD *)(a1 + 84) + v10;
        *(_DWORD *)(a1 + 100) = 0;
        if ( v13 > v12 + v11 )
          *(_DWORD *)(a1 + 96) = sub_57360((_DWORD *)a1) + *(_DWORD *)(a1 + 92);
      }
      else
      {
        return -11;
      }
    }
    else
    {
      return -20;
    }
  }
  return v3;
}
