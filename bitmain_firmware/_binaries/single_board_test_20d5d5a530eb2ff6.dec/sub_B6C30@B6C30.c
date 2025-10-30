int __fastcall sub_B6C30(int a1, int a2)
{
  int (__fastcall *v3)(int, int); // r7
  int (__fastcall *v5)(int, int, int, _DWORD, _DWORD, _DWORD, int, _DWORD); // r6
  int result; // r0
  __int64 v7; // r2
  __int64 v8; // r2
  int (__fastcall *v9)(int, int, int, _DWORD, _DWORD, int); // r7
  int (__fastcall *v10)(int, int, int, _DWORD, _DWORD, _DWORD, int, int *); // r6
  int v11; // [sp+14h] [bp-8h] BYREF

  v11 = 0;
  if ( !a1 || !*(_DWORD *)a1 || !*(_DWORD *)(*(_DWORD *)a1 + 24) )
  {
    sub_D0048(32, 110, 121, "crypto/bio/bio_lib.c", 393);
    return -2;
  }
  v3 = *(int (__fastcall **)(int, int))(a1 + 4);
  v5 = *(int (__fastcall **)(int, int, int, _DWORD, _DWORD, _DWORD, int, _DWORD))(a1 + 8);
  if ( v3 )
  {
    if ( !v5 )
    {
      result = v3(a1, 4);
      if ( result <= 0 )
        return result;
      goto LABEL_10;
    }
  }
  else if ( !v5 )
  {
    goto LABEL_10;
  }
  result = v5(a1, 4, a2, 0, 0, 0, 1, 0);
  if ( result <= 0 )
    return result;
LABEL_10:
  if ( !*(_DWORD *)(a1 + 16) )
  {
    sub_D0048(32, 110, 120, "crypto/bio/bio_lib.c", 404);
    return -2;
  }
  result = (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 24))(a1, a2);
  if ( result > 0 )
  {
    v7 = *(_QWORD *)(a1 + 64);
    v11 = result;
    v8 = v7 + result;
    result = 1;
    *(_QWORD *)(a1 + 64) = v8;
  }
  v9 = *(int (__fastcall **)(int, int, int, _DWORD, _DWORD, int))(a1 + 4);
  v10 = *(int (__fastcall **)(int, int, int, _DWORD, _DWORD, _DWORD, int, int *))(a1 + 8);
  if ( !v9 )
  {
    if ( !v10 )
    {
LABEL_22:
      if ( result <= 0 )
        return result;
      result = v11;
      goto LABEL_24;
    }
LABEL_21:
    result = v10(a1, 132, a2, 0, 0, 0, result, &v11);
    goto LABEL_22;
  }
  if ( v10 )
    goto LABEL_21;
  if ( result == 1 )
  {
    result = v11;
    if ( v11 < 0 )
      return -1;
  }
  result = v9(a1, 132, a2, 0, 0, result);
  if ( result > 0 )
  {
    v11 = result;
LABEL_24:
    if ( result < 0 )
    {
      sub_D0048(32, 110, 102, "crypto/bio/bio_lib.c", 422);
      return -1;
    }
  }
  return result;
}
