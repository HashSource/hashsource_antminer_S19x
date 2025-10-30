int __fastcall sub_33A038(char *a1, int a2, int a3, int a4)
{
  __int64 v4; // kr00_8
  int v5; // r6
  int v9; // r2
  int result; // r0
  int v11; // [sp+14h] [bp-18h] BYREF
  int v12; // [sp+18h] [bp-14h]
  int v13; // [sp+1Ch] [bp-10h]
  int v14; // [sp+20h] [bp-Ch]
  int v15; // [sp+24h] [bp-8h]

  v4 = *(_QWORD *)(*(_DWORD *)a1 - 8);
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v5 = *(_DWORD *)(*(_DWORD *)&a1[v4] - 4);
  v14 = 0;
  v15 = 16;
  if ( v5 != HIDWORD(v4) )
    return 0;
  (*(void (__fastcall **)(int, int, int, int, char *, int, char *, int *))(*(_DWORD *)v5 + 28))(
    v5,
    a4,
    6,
    a3,
    &a1[v4],
    a2,
    a1,
    &v11);
  v9 = v11;
  result = v11;
  if ( !v11 )
    return 0;
  if ( (v14 & 6) != 6 && ((unsigned __int8)v12 & (unsigned __int8)v13 & 6) != 6 )
  {
    if ( (v13 & 5) == 4 || v14 )
      return 0;
    if ( a4 < 0 )
    {
      if ( a4 == -2 || ((*(int (__fastcall **)(int, int))(*(_DWORD *)a3 + 32))(a3, a4) & 6) != 6 )
        return 0;
      return v11;
    }
    else if ( a1 != (char *)(a4 + v11) )
    {
      return 0;
    }
    return v9;
  }
  return result;
}
