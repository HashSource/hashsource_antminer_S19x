char *__fastcall sub_5A6D8(_DWORD *a1)
{
  int v2; // r6
  int v3; // r4
  char *result; // r0
  int v5; // r8
  int v6; // r3
  int v7; // [sp+18h] [bp-10h] BYREF
  char v8; // [sp+1Ch] [bp-Ch] BYREF
  int v9; // [sp+20h] [bp-8h] BYREF

  v2 = a1[1];
  v3 = *(_DWORD *)(v2 + 84);
  result = *(char **)(v3 + 184);
  v5 = *(_DWORD *)v3;
  if ( (int)result <= 28 )
  {
    if ( result )
    {
      memcpy(&result[v3 + 56], a1 + 22, a1[21]);
      result = (char *)(*(_DWORD *)(v3 + 184) + a1[21]);
      *(_DWORD *)(v3 + 184) = result;
      result[v3 + 56] = 0;
      goto LABEL_5;
    }
  }
  else
  {
    *(_DWORD *)(v3 + 184) = 0;
  }
  if ( *((_BYTE *)a1 + 88) != 33 )
    return result;
  result = sub_3A6D4((int)a1, (bool *)(v3 + 56), 128, (_DWORD *)(v3 + 232));
  *(_DWORD *)(v3 + 184) = result;
LABEL_5:
  if ( (int)result > 28 )
  {
    sub_42D0C(v2 + 16, (const char *)(v3 + 56));
    if ( *(_DWORD *)(v3 + 184) != 29 )
      return (char *)sub_39C88(v2, 6);
    result = (char *)sscanf(
                       (const char *)(v3 + 56),
                       "!TIME,%4d,%3d,%2d,%2d,%2d,%d,%d,%d",
                       v3 + 188,
                       v3 + 192,
                       v3 + 196,
                       v3 + 200,
                       v3 + 204,
                       &v7,
                       &v8,
                       &v9);
    if ( result != byte_8 )
      return (char *)sub_39C88(v2, 2);
    if ( v7 != 2 )
      return (char *)sub_39C88(v2, 6);
    if ( v9 != 1 )
    {
      *(_BYTE *)(v3 + 40) = 3;
      return result;
    }
    result = (char *)sub_3A4E8((_DWORD *)v3);
    if ( !result )
      return (char *)sub_39C88(v2, 6);
    v6 = *(unsigned __int8 *)(v5 + 30);
    *(_DWORD *)(v5 + 32) = 2;
    if ( v6 )
    {
      *(_BYTE *)(v5 + 30) = 0;
      return (char *)sub_3A534(v2);
    }
  }
  return result;
}
