int __fastcall sub_B69CC(int result, int a2, int a3)
{
  int v3; // r4
  int (__fastcall *v6)(int, int); // r8
  int (__fastcall *v7)(int, int, int, int, _DWORD, _DWORD, int, _DWORD); // r7
  int (__fastcall *v8)(int, int, int, int, _DWORD, int); // r9
  int (__fastcall *v9)(int, int, int, int, _DWORD, _DWORD, int, _DWORD *); // r7
  _DWORD v10[9]; // [sp+14h] [bp-24h] BYREF

  if ( a3 < 0 )
    return 0;
  v3 = result;
  if ( !result )
    return result;
  if ( !*(_DWORD *)result || !*(_DWORD *)(*(_DWORD *)result + 8) )
  {
    sub_D0048(32, 128, 121, "crypto/bio/bio_lib.c", 329);
    return -2;
  }
  v6 = *(int (__fastcall **)(int, int))(result + 4);
  v7 = *(int (__fastcall **)(int, int, int, int, _DWORD, _DWORD, int, _DWORD))(result + 8);
  if ( v6 )
  {
    if ( !v7 )
    {
      result = v6(result, 3);
LABEL_8:
      if ( result <= 0 )
        return result;
      goto LABEL_9;
    }
LABEL_7:
    result = v7(result, 3, a2, a3, 0, 0, 1, 0);
    goto LABEL_8;
  }
  if ( v7 )
    goto LABEL_7;
LABEL_9:
  if ( !*(_DWORD *)(v3 + 16) )
  {
    sub_D0048(32, 128, 120, "crypto/bio/bio_lib.c", 339);
    return -2;
  }
  result = (*(int (__fastcall **)(int, int, int, _DWORD *))(*(_DWORD *)v3 + 8))(v3, a2, a3, v10);
  if ( result > 0 )
    *(_QWORD *)(v3 + 64) += v10[0];
  v8 = *(int (__fastcall **)(int, int, int, int, _DWORD, int))(v3 + 4);
  v9 = *(int (__fastcall **)(int, int, int, int, _DWORD, _DWORD, int, _DWORD *))(v3 + 8);
  if ( !v8 )
  {
    if ( !v9 )
    {
LABEL_15:
      if ( result > 0 )
        return v10[0];
      return result;
    }
LABEL_14:
    result = v9(v3, 131, a2, a3, 0, 0, result, v10);
    goto LABEL_15;
  }
  if ( v9 )
    goto LABEL_14;
  if ( result > 0 && (result = v10[0], v10[0] < 0) )
    return -1;
  else
    return v8(v3, 131, a2, a3, 0, result);
}
