int __fastcall sub_B6890(int a1, int a2, int a3, int *a4)
{
  int (__fastcall *v6)(int, int); // r9
  int (__fastcall *v9)(int, int, int, int, _DWORD, _DWORD, int, _DWORD); // r7
  int v11; // r0
  int (__fastcall *v12)(int, int, int, int, _DWORD, int); // r9
  int (__fastcall *v13)(int, int, int, int, _DWORD, _DWORD, int, int *); // r7
  int v14; // r0

  if ( !a1 || !*(_DWORD *)a1 || !*(_DWORD *)(*(_DWORD *)a1 + 16) )
  {
    sub_D0048(32, 120, 121, "crypto/bio/bio_lib.c", 256);
    return 0;
  }
  v6 = *(int (__fastcall **)(int, int))(a1 + 4);
  v9 = *(int (__fastcall **)(int, int, int, int, _DWORD, _DWORD, int, _DWORD))(a1 + 8);
  if ( v6 )
  {
    if ( !v9 )
    {
      if ( a3 < 0 || v6(a1, 2) <= 0 )
        return 0;
      goto LABEL_11;
    }
  }
  else if ( !v9 )
  {
    goto LABEL_11;
  }
  if ( v9(a1, 2, a2, a3, 0, 0, 1, 0) <= 0 )
    return 0;
LABEL_11:
  if ( !*(_DWORD *)(a1 + 16) )
  {
    sub_D0048(32, 120, 120, "crypto/bio/bio_lib.c", 266);
    return 0;
  }
  v11 = (*(int (__fastcall **)(int, int, int, int *))(*(_DWORD *)a1 + 16))(a1, a2, a3, a4);
  if ( v11 > 0 )
    *(_QWORD *)(a1 + 56) += (unsigned int)*a4;
  v12 = *(int (__fastcall **)(int, int, int, int, _DWORD, int))(a1 + 4);
  v13 = *(int (__fastcall **)(int, int, int, int, _DWORD, _DWORD, int, int *))(a1 + 8);
  if ( !v12 )
  {
    if ( !v13 )
      goto LABEL_24;
    goto LABEL_23;
  }
  if ( v13 )
  {
LABEL_23:
    v11 = v13(a1, 130, a2, a3, 0, 0, v11, a4);
LABEL_24:
    if ( v11 > 0 )
    {
      v14 = *a4;
      goto LABEL_26;
    }
    return 0;
  }
  if ( a3 < 0 )
    return 0;
  if ( v11 > 0 )
  {
    v11 = *a4;
    if ( *a4 < 0 )
      return 0;
  }
  v14 = v12(a1, 130, a2, a3, 0, v11);
  if ( v14 <= 0 )
    return 0;
  *a4 = v14;
LABEL_26:
  if ( a3 < (unsigned int)v14 )
  {
    sub_D0048(32, 120, 68, "crypto/bio/bio_lib.c", 281);
    return 0;
  }
  return 1;
}
