int __fastcall sub_DAE14(int *a1, int a2, unsigned int *a3)
{
  int v4; // r3
  unsigned int v7; // r0
  int (__fastcall *v8)(int *, int, unsigned int *); // r3

  if ( a1 && (v4 = *a1) != 0 && *(_DWORD *)(v4 + 96) )
  {
    if ( a1[4] == 1024 )
    {
      if ( (*(_DWORD *)(v4 + 4) & 2) == 0 )
      {
        v8 = *(int (__fastcall **)(int *, int, unsigned int *))(v4 + 96);
        return v8(a1, a2, a3);
      }
      v7 = sub_D9AF8(a1[2]);
      if ( v7 )
      {
        if ( a2 )
        {
          if ( v7 <= *a3 )
          {
            v8 = *(int (__fastcall **)(int *, int, unsigned int *))(*a1 + 96);
            return v8(a1, a2, a3);
          }
          sub_D0048(6, 153, 155, (int)"crypto/evp/pmeth_fn.c", 295);
          return 0;
        }
        else
        {
          *a3 = v7;
          return 1;
        }
      }
      else
      {
        sub_D0048(6, 153, 163, (int)"crypto/evp/pmeth_fn.c", 295);
        return 0;
      }
    }
    else
    {
      sub_D0048(6, 153, 151, (int)"crypto/evp/pmeth_fn.c", 292);
      return -1;
    }
  }
  else
  {
    sub_D0048(6, 153, 150, (int)"crypto/evp/pmeth_fn.c", 288);
    return -2;
  }
}
