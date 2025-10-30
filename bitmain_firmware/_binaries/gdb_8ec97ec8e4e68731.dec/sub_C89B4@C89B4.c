int __fastcall sub_C89B4(int a1)
{
  _DWORD *v2; // r3
  const char *v3; // r0
  int result; // r0
  _DWORD *v5; // r3
  _DWORD *v6; // r3
  int v7; // r1
  int v8; // r5
  _DWORD *v9; // r0
  const char *v10; // r0
  int v11; // r0
  const char *v12; // r0
  const char *v13; // r0
  const char *v14; // r0
  _BYTE v15[20]; // [sp+4h] [bp-50h] BYREF
  int v16; // [sp+18h] [bp-3Ch]

  sub_2665F0(v15);
  v2 = *(_DWORD **)(a1 + 28);
  if ( !v2 )
  {
    v11 = *(_DWORD *)(a1 + 76);
    if ( *(_DWORD *)(a1 + 104) )
    {
      if ( *(_DWORD *)(a1 + 12) == 30 )
      {
        v13 = (const char *)((int (__fastcall *)(int))loc_19D228)(v11);
        return sub_259F10(" (%s,%s) pending.", v13, *(const char **)(a1 + 104));
      }
      else
      {
        v12 = (const char *)((int (__fastcall *)(int))loc_19D228)(v11);
        return sub_259F10(" (%s %s) pending.", v12, *(const char **)(a1 + 104));
      }
    }
    else
    {
      v14 = (const char *)((int (__fastcall *)(int))loc_19D228)(v11);
      return sub_259F10(" (%s) pending.", v14);
    }
  }
  if ( v16 || !v2[58] )
  {
    sub_259F10(" at ");
    v8 = sub_25AC8C(*(_DWORD *)(*(_DWORD *)(a1 + 28) + 44), *(_DWORD *)(*(_DWORD *)(a1 + 28) + 52));
    v9 = (_DWORD *)sub_242F8C(v8);
    sub_25A6BC(v8, *v9);
    v5 = *(_DWORD **)(a1 + 28);
    result = v5[58];
    if ( !result )
      goto LABEL_6;
    if ( *v5 )
      goto LABEL_5;
  }
  else if ( *v2 )
  {
LABEL_5:
    v3 = (const char *)((int (__fastcall *)(_DWORD))loc_19D228)(*(_DWORD *)(a1 + 76));
    result = sub_259F10(": %s.", v3);
    v5 = *(_DWORD **)(a1 + 28);
    goto LABEL_6;
  }
  v10 = (const char *)((int (*)(void))loc_2043D4)();
  result = sub_259F10(": file %s, line %d.", v10, *(_DWORD *)(*(_DWORD *)(a1 + 28) + 228));
  v5 = *(_DWORD **)(a1 + 28);
LABEL_6:
  v6 = (_DWORD *)*v5;
  if ( v6 )
  {
    v7 = 0;
    while ( 1 )
    {
      ++v7;
      if ( !v6 )
        break;
      v6 = (_DWORD *)*v6;
    }
    return sub_259F10(" (%d locations)", v7);
  }
  return result;
}
