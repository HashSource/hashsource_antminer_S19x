int __fastcall sub_B6ECC(int result, int a2, int a3, int a4)
{
  _DWORD *v4; // r4
  int (__fastcall *v8)(int, int); // r9
  int (__fastcall *v9)(int, int, int, _DWORD, int, int, int, _DWORD); // r8
  int (__fastcall *v10)(_DWORD *, int, int, int, int, int); // r9
  int (__fastcall *v11)(_DWORD *, int, int, _DWORD, int, int, int, _DWORD); // r8

  v4 = (_DWORD *)result;
  if ( !result )
    return result;
  if ( !*(_DWORD *)result || !*(_DWORD *)(*(_DWORD *)result + 32) )
  {
    sub_D0048(32, 103, 121, "crypto/bio/bio_lib.c", 518);
    return -2;
  }
  v8 = *(int (__fastcall **)(int, int))(result + 4);
  v9 = *(int (__fastcall **)(int, int, int, _DWORD, int, int, int, _DWORD))(result + 8);
  if ( !v8 )
  {
    if ( !v9 )
    {
      result = (*(int (__fastcall **)(int, int, int, int))(*(_DWORD *)result + 32))(result, a2, a3, a4);
      goto LABEL_11;
    }
    goto LABEL_9;
  }
  if ( v9 )
  {
LABEL_9:
    result = v9(result, 6, a4, 0, a2, a3, 1, 0);
    if ( result <= 0 )
      return result;
    goto LABEL_10;
  }
  result = v8(result, 6);
  if ( result <= 0 )
    return result;
LABEL_10:
  result = (*(int (__fastcall **)(_DWORD *, int, int, int))(*v4 + 32))(v4, a2, a3, a4);
LABEL_11:
  v10 = (int (__fastcall *)(_DWORD *, int, int, int, int, int))v4[1];
  v11 = (int (__fastcall *)(_DWORD *, int, int, _DWORD, int, int, int, _DWORD))v4[2];
  if ( v10 )
  {
    if ( !v11 )
      return v10(v4, 134, a4, a2, a3, result);
    return v11(v4, 134, a4, 0, a2, a3, result, 0);
  }
  if ( v11 )
    return v11(v4, 134, a4, 0, a2, a3, result, 0);
  return result;
}
