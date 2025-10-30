int __fastcall sub_B6D58(_DWORD *a1, int a2, int a3)
{
  int (__fastcall *v5)(_DWORD *, int); // r8
  int (__fastcall *v7)(_DWORD *, int, int, int, _DWORD, _DWORD, int, _DWORD); // r4
  int result; // r0
  int (__fastcall *v9)(_DWORD *, int, int, int, _DWORD, int); // r8
  int (__fastcall *v10)(_DWORD *, int, int, int, _DWORD, _DWORD, int, int *); // r4
  int v11; // [sp+14h] [bp-4h] BYREF

  v11 = 0;
  if ( !a1 || !*a1 || !*(_DWORD *)(*a1 + 28) )
  {
    sub_D0048(32, 104, 121, "crypto/bio/bio_lib.c", 438);
    return -2;
  }
  if ( a3 < 0 )
  {
    sub_D0048(32, 104, 125, "crypto/bio/bio_lib.c", 443);
    return 0;
  }
  v5 = (int (__fastcall *)(_DWORD *, int))a1[1];
  v7 = (int (__fastcall *)(_DWORD *, int, int, int, _DWORD, _DWORD, int, _DWORD))a1[2];
  if ( !v5 )
  {
    if ( !v7 )
      goto LABEL_9;
    goto LABEL_7;
  }
  if ( v7 )
  {
LABEL_7:
    result = v7(a1, 5, a2, a3, 0, 0, 1, 0);
    goto LABEL_8;
  }
  result = v5(a1, 5);
LABEL_8:
  if ( result <= 0 )
    return result;
LABEL_9:
  if ( !a1[4] )
  {
    sub_D0048(32, 104, 120, "crypto/bio/bio_lib.c", 454);
    return -2;
  }
  result = (*(int (__fastcall **)(_DWORD *, int, int))(*a1 + 28))(a1, a2, a3);
  v9 = (int (__fastcall *)(_DWORD *, int, int, int, _DWORD, int))a1[1];
  if ( result > 0 )
  {
    v11 = result;
    result = 1;
  }
  v10 = (int (__fastcall *)(_DWORD *, int, int, int, _DWORD, _DWORD, int, int *))a1[2];
  if ( !v9 )
  {
    if ( !v10 )
      goto LABEL_15;
    goto LABEL_14;
  }
  if ( v10 )
  {
LABEL_14:
    result = v10(a1, 133, a2, a3, 0, 0, result, &v11);
LABEL_15:
    if ( result <= 0 )
      return result;
    result = v11;
    goto LABEL_17;
  }
  if ( result == 1 )
    result = v11;
  result = v9(a1, 133, a2, a3, 0, result);
  if ( result > 0 )
  {
LABEL_17:
    if ( result > (unsigned int)a3 )
      return -1;
  }
  return result;
}
