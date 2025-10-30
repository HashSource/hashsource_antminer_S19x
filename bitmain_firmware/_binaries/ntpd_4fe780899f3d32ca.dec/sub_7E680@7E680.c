char *__fastcall sub_7E680(char *result)
{
  int v1; // r5
  int v2; // r8
  int v3; // r4
  char *v4; // r7
  int v5; // r5
  int v6; // r3
  int v7; // r2
  const char *v8; // r11
  int v9; // r10

  v1 = *((_DWORD *)result + 25);
  v2 = *((_DWORD *)result + 20);
  v3 = *((_DWORD *)result + 17);
  if ( v1 > 0 )
  {
    v4 = result;
    v5 = v1 - 1;
    while ( 1 )
    {
      v6 = *(_DWORD *)(v3 + 16);
      v7 = (unsigned __int16)v6 >> 12;
      if ( v7 != 1 )
        break;
      if ( (v6 & 0x400) != 0 )
        *(_DWORD *)(*(_DWORD *)(v2 + 68) + v3 - *((_DWORD *)v4 + 17) + 28) = 0;
      if ( (v6 & 0x40) != 0 )
      {
        v8 = *(const char **)(v3 + 24);
        v9 = *(_DWORD *)(v2 + 68) + v3 - *((_DWORD *)v4 + 17);
        result = _strdup(v8);
        if ( !result )
          sub_7E624(v8);
        --v5;
        *(_DWORD *)(v9 + 24) = result;
        v3 += 64;
        if ( v5 == -1 )
          return result;
      }
      else
      {
LABEL_5:
        --v5;
        v3 += 64;
        if ( v5 == -1 )
          return result;
      }
    }
    if ( v7 == 6 )
      *(_DWORD *)(*(_DWORD *)(v2 + 68) + v3 - *((_DWORD *)v4 + 17) + 28) = 0;
    goto LABEL_5;
  }
  return result;
}
