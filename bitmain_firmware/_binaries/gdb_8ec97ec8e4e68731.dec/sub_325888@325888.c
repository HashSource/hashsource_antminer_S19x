int __fastcall sub_325888(int a1, int a2)
{
  int v4; // r5
  char *v5; // r1
  int v6; // r0
  int v7; // r2
  int result; // r0
  int v9; // [sp+0h] [bp-8h] BYREF
  int v10; // [sp+4h] [bp-4h] BYREF

  if ( *(_DWORD *)(a1 + 16) )
  {
    v4 = sub_324F30((int *)a1, 0, (int)&v9, (int)&v10);
    if ( v4 )
    {
      v5 = "r";
      if ( a2 )
        v5 = "rb";
      v6 = fopen64(*(_DWORD *)(a1 + 16), v5);
      v7 = *(_DWORD *)(a1 + 20);
      v4 = v6;
      *(_DWORD *)(a1 + 52) = v6;
      if ( v7 )
      {
        free(*(void **)(a1 + 16));
        v4 = *(_DWORD *)(a1 + 52);
        *(_DWORD *)(a1 + 20) = 0;
      }
      *(_DWORD *)(a1 + 16) = 0;
    }
    else
    {
      *_errno_location() = v10;
    }
    return v4;
  }
  if ( *(int *)(a1 + 12) <= 0 )
    return *(_DWORD *)(a1 + 16);
  result = (*(int (**)(void))(*(_DWORD *)(a1 + 68) + 24))();
  *(_DWORD *)(a1 + 52) = result;
  *(_DWORD *)(a1 + 12) = -1;
  return result;
}
