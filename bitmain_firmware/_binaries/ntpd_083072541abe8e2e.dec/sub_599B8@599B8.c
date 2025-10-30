__int16 *__fastcall sub_599B8(_DWORD *a1)
{
  int v2; // r7
  int *v3; // r4
  __int16 *result; // r0
  int v5; // r9
  const char *v6; // r8
  int v7; // r3
  int v8; // [sp+18h] [bp-14h] BYREF
  char v9; // [sp+1Ch] [bp-10h] BYREF
  int v10; // [sp+20h] [bp-Ch] BYREF

  v2 = a1[1];
  v3 = *(int **)(v2 + 84);
  result = (__int16 *)v3[46];
  v5 = *v3;
  if ( (int)result <= 28 )
  {
    if ( result )
    {
      v6 = (const char *)(v3 + 14);
      memcpy((char *)result + (_DWORD)(v3 + 14), a1 + 22, a1[21]);
      result = (__int16 *)(v3[46] + a1[21]);
      v3[46] = (int)result;
      *((_BYTE *)result + (_DWORD)v3 + 56) = 0;
      goto LABEL_5;
    }
  }
  else
  {
    v3[46] = 0;
  }
  if ( *((_BYTE *)a1 + 88) != 33 )
    return result;
  v6 = (const char *)(v3 + 14);
  result = (__int16 *)sub_39EE4((int)a1, (bool *)v3 + 56, 128, v3 + 58);
  v3[46] = (int)result;
LABEL_5:
  if ( (int)result > 28 )
  {
    sub_41F44(v2 + 16, v6);
    if ( v3[46] != 29 )
      return sub_394A0((__int16 *)v2, 6);
    result = (__int16 *)sscanf(
                          v6,
                          "!TIME,%4d,%3d,%2d,%2d,%2d,%d,%d,%d",
                          v3 + 47,
                          v3 + 48,
                          v3 + 49,
                          v3 + 50,
                          v3 + 51,
                          &v8,
                          &v9,
                          &v10);
    if ( result != (__int16 *)byte_8 )
      return sub_394A0((__int16 *)v2, 2);
    if ( v8 != 2 )
      return sub_394A0((__int16 *)v2, 6);
    if ( v10 != 1 )
    {
      *((_BYTE *)v3 + 40) = 3;
      return result;
    }
    result = (__int16 *)sub_39CF8(v3);
    if ( !result )
      return sub_394A0((__int16 *)v2, 6);
    v7 = *(unsigned __int8 *)(v5 + 30);
    *(_DWORD *)(v5 + 32) = 2;
    if ( v7 )
    {
      *(_BYTE *)(v5 + 30) = 0;
      return (__int16 *)sub_39D44(v2);
    }
  }
  return result;
}
