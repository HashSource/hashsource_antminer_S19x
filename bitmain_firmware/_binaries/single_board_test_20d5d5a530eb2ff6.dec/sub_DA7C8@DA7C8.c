int __fastcall sub_DA7C8(int *a1, int a2, unsigned int *a3, int a4, int a5)
{
  int v6; // r0
  int (__fastcall *v7)(int *, int, unsigned int *, int, int); // r5
  unsigned int v11; // r0

  if ( a1 && (v6 = *a1) != 0 && (v7 = *(int (__fastcall **)(int *, int, unsigned int *, int, int))(v6 + 40)) != 0 )
  {
    if ( a1[4] == 8 )
    {
      if ( (*(_DWORD *)(v6 + 4) & 2) == 0 )
        return v7(a1, a2, a3, a4, a5);
      v11 = sub_D9AF8(a1[2]);
      if ( v11 )
      {
        if ( a2 )
        {
          if ( v11 <= *a3 )
          {
            v7 = *(int (__fastcall **)(int *, int, unsigned int *, int, int))(*a1 + 40);
            return v7(a1, a2, a3, a4, a5);
          }
          sub_D0048(6, 140, 155, (int)"crypto/evp/pmeth_fn.c", 65);
          return 0;
        }
        else
        {
          *a3 = v11;
          return 1;
        }
      }
      else
      {
        sub_D0048(6, 140, 163, (int)"crypto/evp/pmeth_fn.c", 65);
        return 0;
      }
    }
    else
    {
      sub_D0048(6, 140, 151, (int)"crypto/evp/pmeth_fn.c", 62);
      return -1;
    }
  }
  else
  {
    sub_D0048(6, 140, 150, (int)"crypto/evp/pmeth_fn.c", 58);
    return -2;
  }
}
