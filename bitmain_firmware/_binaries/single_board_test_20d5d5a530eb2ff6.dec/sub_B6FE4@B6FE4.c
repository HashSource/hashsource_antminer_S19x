int __fastcall sub_B6FE4(int result, int a2, int a3)
{
  _DWORD *v3; // r4
  _BOOL4 v4; // r3
  int (__fastcall *v5)(int, int); // r6
  int (__fastcall *v6)(int, int, int *, _DWORD, int, _DWORD, int, _DWORD); // r5
  int (__fastcall *v7)(_DWORD *, int, int); // r3
  int (__fastcall *v8)(_DWORD *, int, int *, int, _DWORD, int); // r6
  int (__fastcall *v9)(_DWORD *, int, int *, _DWORD, int, _DWORD, int, _DWORD); // r5
  int v10; // [sp+14h] [bp-4h] BYREF

  v10 = a3;
  v3 = (_DWORD *)result;
  if ( !result )
    return result;
  if ( !*(_DWORD *)result )
    goto LABEL_20;
  v4 = *(_DWORD *)(*(_DWORD *)result + 44) == 0;
  if ( a2 != 14 )
    v4 = 1;
  if ( v4 )
  {
LABEL_20:
    sub_D0048(32, 131, 121, "crypto/bio/bio_lib.c", 546);
    return -2;
  }
  v5 = *(int (__fastcall **)(int, int))(result + 4);
  v6 = *(int (__fastcall **)(int, int, int *, _DWORD, int, _DWORD, int, _DWORD))(result + 8);
  if ( v5 )
  {
    if ( !v6 )
    {
      result = v5(result, 6);
LABEL_9:
      if ( result <= 0 )
        return result;
      v7 = *(int (__fastcall **)(_DWORD *, int, int))(*v3 + 44);
      goto LABEL_11;
    }
LABEL_16:
    result = v6(result, 6, &v10, 0, 14, 0, 1, 0);
    goto LABEL_9;
  }
  v7 = *(int (__fastcall **)(_DWORD *, int, int))(*(_DWORD *)result + 44);
  if ( v6 )
    goto LABEL_16;
LABEL_11:
  result = v7(v3, 14, v10);
  v8 = (int (__fastcall *)(_DWORD *, int, int *, int, _DWORD, int))v3[1];
  v9 = (int (__fastcall *)(_DWORD *, int, int *, _DWORD, int, _DWORD, int, _DWORD))v3[2];
  if ( v8 )
  {
    if ( !v9 )
      return v8(v3, 134, &v10, 14, 0, result);
    return v9(v3, 134, &v10, 0, 14, 0, result, 0);
  }
  if ( v9 )
    return v9(v3, 134, &v10, 0, 14, 0, result, 0);
  return result;
}
