int __fastcall sub_DA984(int *a1, int a2, unsigned int *a3, int a4, int a5)
{
  int v6; // r0
  int (__fastcall *v7)(int *, int, unsigned int *, int, int); // r5
  unsigned int v11; // r0

  if ( a1 && (v6 = *a1) != 0 && (v7 = *(int (__fastcall **)(int *, int, unsigned int *, int, int))(v6 + 56)) != 0 )
  {
    if ( a1[4] == 32 )
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
            v7 = *(int (__fastcall **)(int *, int, unsigned int *, int, int))(*a1 + 56);
            return v7(a1, a2, a3, a4, a5);
          }
          sub_D0048(6, 144, 155, (int)"crypto/evp/pmeth_fn.c", 132);
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
        sub_D0048(6, 144, 163, (int)"crypto/evp/pmeth_fn.c", 132);
        return 0;
      }
    }
    else
    {
      sub_D0048(6, 144, 151, (int)"crypto/evp/pmeth_fn.c", 129);
      return -1;
    }
  }
  else
  {
    sub_D0048(6, 144, 150, (int)"crypto/evp/pmeth_fn.c", 125);
    return -2;
  }
}
