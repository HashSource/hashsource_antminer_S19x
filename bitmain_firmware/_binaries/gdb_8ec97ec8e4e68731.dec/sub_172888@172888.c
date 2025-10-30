int __fastcall sub_172888(_DWORD *a1, char *a2, int a3)
{
  int v5; // r0
  char *v6; // r3
  int v7; // r4
  int v8; // r2
  bool v9; // zf
  int v10; // r7
  int i; // r8
  int v12; // r2
  int v13; // r1
  int v14; // r3
  _BYTE *v15; // r9
  int result; // r0
  int v17; // r7
  int v18; // r8
  void *ptr[2]; // [sp+0h] [bp-1Ch] BYREF

  while ( 1 )
  {
    v5 = sub_171258(a1);
    v6 = *(char **)(v5 + 24);
    v7 = v5;
    v8 = *v6;
    v9 = v8 == 1;
    if ( v8 != 1 )
      v9 = v8 == 18;
    if ( !v9 )
      break;
    a1 = (_DWORD *)*((_DWORD *)v6 + 5);
  }
  if ( (unsigned __int8)(v8 - 3) > 1u )
  {
    sub_255DE4(ptr, v5);
    sub_946E0("Type %s is not a structure or union type.", (const char *)ptr[0]);
  }
  v10 = *((__int16 *)v6 + 2) - 1;
  for ( i = 24 * v10; ; i -= 24 )
  {
    v12 = *((_WORD *)v6 + 1) & 0x380;
    if ( v12 == 128 )
      v13 = *((_DWORD *)v6 + 7);
    else
      v13 = 0;
    if ( v12 == 128 )
      v13 = *(__int16 *)v13;
    if ( v10 < v13 )
      break;
    v14 = *((_DWORD *)v6 + 6) + i;
    v15 = *(_BYTE **)(v14 + 16);
    if ( !v15 )
      goto LABEL_18;
    if ( !sub_25BD2C(*(_DWORD *)(v14 + 16), a2) )
      return *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v7 + 24) + 24) + i + 12);
    v6 = *(char **)(v7 + 24);
    if ( !*v15 )
    {
      v14 = *((_DWORD *)v6 + 6) + i;
LABEL_18:
      result = sub_172888(*(_DWORD *)(v14 + 12), a2, 1);
      if ( result )
        return result;
      v6 = *(char **)(v7 + 24);
    }
    --v10;
  }
  if ( v12 == 128 && (v17 = **((__int16 **)v6 + 7) - 1, v17 >= 0) )
  {
    v18 = 24 * v17;
    while ( 1 )
    {
      result = sub_172888(*(_DWORD *)(*((_DWORD *)v6 + 6) + v18 + 12), a2, 1);
      if ( result )
        break;
      --v17;
      v18 -= 24;
      if ( v17 == -1 )
        goto LABEL_24;
      v6 = *(char **)(v7 + 24);
    }
  }
  else
  {
LABEL_24:
    if ( !a3 )
    {
      sub_255DE4(ptr, v7);
      sub_946E0("Type %s has no component named %s.", (const char *)ptr[0], a2);
    }
    return 0;
  }
  return result;
}
