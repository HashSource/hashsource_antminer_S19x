int __fastcall sub_DACE0(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v3; // r3
  int (__fastcall *v5)(_DWORD *, int, int, _DWORD *); // r6
  int v6; // r2
  bool v7; // zf
  int v8; // r2
  _DWORD *v9; // r3
  _DWORD *v10; // r6
  int result; // r0

  if ( a1
    && (v3 = (_DWORD *)*a1) != 0
    && (v3[24] || v3[20] || v3[22])
    && (v5 = (int (__fastcall *)(_DWORD *, int, int, _DWORD *))v3[25]) != 0 )
  {
    v6 = a1[4];
    v7 = v6 == 1024;
    if ( v6 != 1024 )
      v7 = ((v6 - 256) & 0xFFFFFEFF) == 0;
    v8 = !v7;
    if ( v7 )
    {
      result = v5(a1, 2, v8, a2);
      if ( result > 0 )
      {
        if ( result == 2 )
        {
          return 1;
        }
        else
        {
          v9 = (_DWORD *)a1[2];
          if ( v9 )
          {
            if ( *v9 == *a2 )
            {
              if ( sub_D9B28((int)a2) || sub_D9B38((_DWORD *)a1[2], a2) )
              {
                sub_DA240(a1[3]);
                v10 = (_DWORD *)*a1;
                a1[3] = a2;
                result = ((int (__fastcall *)(_DWORD *, int, int, _DWORD *))v10[25])(a1, 2, 1, a2);
                if ( result > 0 )
                {
                  sub_D9C08((int)a2);
                  return 1;
                }
                else
                {
                  a1[3] = 0;
                }
              }
              else
              {
                sub_D0048(6, 155, 153, (int)"crypto/evp/pmeth_fn.c", 266);
                return -1;
              }
            }
            else
            {
              sub_D0048(6, 155, 101, (int)"crypto/evp/pmeth_fn.c", 253);
              return -1;
            }
          }
          else
          {
            sub_D0048(6, 155, 154, (int)"crypto/evp/pmeth_fn.c", 248);
            return -1;
          }
        }
      }
    }
    else
    {
      sub_D0048(6, 155, 151, (int)"crypto/evp/pmeth_fn.c", 235);
      return -1;
    }
  }
  else
  {
    sub_D0048(6, 155, 150, (int)"crypto/evp/pmeth_fn.c", 228);
    return -2;
  }
  return result;
}
