int __fastcall sub_2E7D70(int result, int a2)
{
  int v2; // r4
  int v4; // r7
  unsigned int v5; // r3
  int v6; // r4
  unsigned int v7; // r3
  int v8; // r3
  int v9; // r2

  v2 = *(_DWORD *)(result + 100);
  if ( !v2 )
  {
    v8 = *(_DWORD *)(a2 + 28);
    v9 = *(_DWORD *)(v8 + 108);
LABEL_18:
    if ( !v9 )
      *(_DWORD *)(v8 + 108) = *(_DWORD *)(v8 + 112);
    return result;
  }
  v4 = result;
  while ( 1 )
  {
    if ( (*(_DWORD *)(v2 + 20) & 0x8009) == 1 )
    {
      v5 = *(_DWORD *)(*(_DWORD *)(v2 + 140) + 4);
      if ( v5 <= 1 || v5 == 8 )
      {
        result = sub_2DF2C0(a2, (const char **)v2);
        if ( !result )
          break;
      }
    }
    v2 = *(_DWORD *)(v2 + 12);
    if ( !v2 )
      goto LABEL_9;
  }
  *(_DWORD *)(*(_DWORD *)(a2 + 28) + 112) = v2;
LABEL_9:
  v6 = *(_DWORD *)(v4 + 100);
  if ( !v6 )
  {
LABEL_17:
    v8 = *(_DWORD *)(a2 + 28);
    v9 = *(_DWORD *)(v8 + 108);
    goto LABEL_18;
  }
  while ( 1 )
  {
    if ( (*(_DWORD *)(v6 + 20) & 0x8009) == 9 )
    {
      v7 = *(_DWORD *)(*(_DWORD *)(v6 + 140) + 4);
      if ( v7 <= 1 || v7 == 8 )
      {
        result = sub_2DF2C0(a2, (const char **)v6);
        if ( !result )
          break;
      }
    }
    v6 = *(_DWORD *)(v6 + 12);
    if ( !v6 )
      goto LABEL_17;
  }
  *(_DWORD *)(*(_DWORD *)(a2 + 28) + 108) = v6;
  return result;
}
