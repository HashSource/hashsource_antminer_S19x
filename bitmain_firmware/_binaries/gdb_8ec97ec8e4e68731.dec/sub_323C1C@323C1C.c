void *__fastcall sub_323C1C(int a1)
{
  unsigned int v2; // r7
  char *v3; // r8
  unsigned int v4; // r5
  char *v5; // r6
  unsigned int v6; // t1
  int v7; // r0
  void (__fastcall *v8)(_DWORD); // r2
  int v9; // r5
  int v10; // r6
  int (__fastcall *v11)(_DWORD, int, int); // r3
  void *result; // r0
  void (__fastcall *v13)(_DWORD, _DWORD); // r3

  v2 = *(_DWORD *)(a1 + 16);
  v3 = *(char **)(a1 + 12);
  if ( *(_DWORD *)(a1 + 8) )
  {
    v4 = v2 - 1;
    if ( (int)(v2 - 1) >= 0 )
    {
      v5 = &v3[4 * v2];
      do
      {
        v6 = *((_DWORD *)v5 - 1);
        v5 -= 4;
        --v4;
        if ( v6 > 1 )
          (*(void (**)(void))(a1 + 8))();
      }
      while ( v4 != -1 );
    }
  }
  if ( v2 <= 0x40000 )
  {
    result = memset(v3, 0, 4 * v2);
  }
  else
  {
    v7 = sub_3236D8(0x100u);
    v8 = *(void (__fastcall **)(_DWORD))(a1 + 40);
    v9 = v7;
    v10 = dword_4381A8[4 * v7];
    if ( v8 )
    {
      v8(*(_DWORD *)(a1 + 12));
    }
    else
    {
      v13 = *(void (__fastcall **)(_DWORD, _DWORD))(a1 + 52);
      if ( v13 )
        v13(*(_DWORD *)(a1 + 44), *(_DWORD *)(a1 + 12));
    }
    v11 = *(int (__fastcall **)(_DWORD, int, int))(a1 + 48);
    if ( v11 )
      result = (void *)v11(*(_DWORD *)(a1 + 44), v10, 4);
    else
      result = (void *)(*(int (__fastcall **)(int, int))(a1 + 36))(v10, 4);
    *(_DWORD *)(a1 + 12) = result;
    *(_DWORD *)(a1 + 16) = v10;
    *(_DWORD *)(a1 + 56) = v9;
  }
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  return result;
}
