_DWORD *__fastcall sub_58E60(int a1, int a2)
{
  _DWORD *v2; // r3
  void *ptr; // [sp+Ch] [bp-10h] BYREF
  int v8; // [sp+10h] [bp-Ch]
  _DWORD *i; // [sp+14h] [bp-8h]

  for ( i = *(_DWORD **)a1; i != (_DWORD *)(a1 + 4); i = v2 )
  {
    v8 = 0;
    sub_5A078(i[4], &ptr);
    v8 = (*(int (__fastcall **)(int, void *))(a1 + 36))(a2, ptr);
    free(ptr);
    if ( !v8 )
      break;
    if ( v8 >= 0 )
      v2 = (_DWORD *)i[1];
    else
      v2 = (_DWORD *)*i;
  }
  if ( i == (_DWORD *)(a1 + 4) )
    return 0;
  else
    return i;
}
