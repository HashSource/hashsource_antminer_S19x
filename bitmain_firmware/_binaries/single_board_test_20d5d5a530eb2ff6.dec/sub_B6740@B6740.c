int __fastcall sub_B6740(int a1, int a2, int a3)
{
  int (__fastcall *v6)(int, int); // r8
  int (__fastcall *v7)(int, int, int, int, _DWORD, _DWORD, int, _DWORD); // r7
  int result; // r0
  int (__fastcall *v9)(int, int, int, int, _DWORD, int); // r9
  int (__fastcall *v10)(int, int, int, int, _DWORD, _DWORD, int, _DWORD *); // r7
  _DWORD v11[9]; // [sp+14h] [bp-24h] BYREF

  if ( a3 < 0 )
    return 0;
  if ( !a1 || !*(_DWORD *)a1 || !*(_DWORD *)(*(_DWORD *)a1 + 16) )
  {
    sub_D0048(32, 120, 121, "crypto/bio/bio_lib.c", 256);
    return -2;
  }
  v6 = *(int (__fastcall **)(int, int))(a1 + 4);
  v7 = *(int (__fastcall **)(int, int, int, int, _DWORD, _DWORD, int, _DWORD))(a1 + 8);
  if ( !v6 )
  {
    if ( !v7 )
      goto LABEL_9;
    goto LABEL_7;
  }
  if ( v7 )
  {
LABEL_7:
    result = v7(a1, 2, a2, a3, 0, 0, 1, 0);
    goto LABEL_8;
  }
  result = v6(a1, 2);
LABEL_8:
  if ( result <= 0 )
    return result;
LABEL_9:
  if ( !*(_DWORD *)(a1 + 16) )
  {
    sub_D0048(32, 120, 120, "crypto/bio/bio_lib.c", 266);
    return -2;
  }
  result = (*(int (__fastcall **)(int, int, int, _DWORD *))(*(_DWORD *)a1 + 16))(a1, a2, a3, v11);
  if ( result > 0 )
    *(_QWORD *)(a1 + 56) += v11[0];
  v9 = *(int (__fastcall **)(int, int, int, int, _DWORD, int))(a1 + 4);
  v10 = *(int (__fastcall **)(int, int, int, int, _DWORD, _DWORD, int, _DWORD *))(a1 + 8);
  if ( !v9 )
  {
    if ( !v10 )
      goto LABEL_15;
    goto LABEL_14;
  }
  if ( v10 )
  {
LABEL_14:
    result = v10(a1, 130, a2, a3, 0, 0, result, v11);
LABEL_15:
    if ( result <= 0 )
      return result;
    result = v11[0];
    goto LABEL_17;
  }
  if ( result > 0 )
  {
    result = v11[0];
    if ( v11[0] < 0 )
      return -1;
  }
  result = v9(a1, 130, a2, a3, 0, result);
  if ( result > 0 )
  {
    v11[0] = result;
LABEL_17:
    if ( a3 < (unsigned int)result )
    {
      sub_D0048(32, 120, 68, "crypto/bio/bio_lib.c", 281);
      return -1;
    }
  }
  return result;
}
