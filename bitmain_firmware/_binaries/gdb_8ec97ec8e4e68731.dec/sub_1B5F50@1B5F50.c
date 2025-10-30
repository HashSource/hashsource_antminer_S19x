int __fastcall sub_1B5F50(unsigned int a1, _DWORD *a2)
{
  char **v2; // r11
  char **v5; // r4
  int v6; // r2
  int v7; // r12
  int v8; // r1
  int v9; // r3
  int v10; // r3
  char *v12; // r4
  void *v13; // r5
  __int64 v14; // kr00_8
  int v15; // r4
  int *v16; // r0
  int v17; // r0
  int v18; // [sp+8h] [bp-Ch] BYREF
  int v19; // [sp+Ch] [bp-8h]

  v2 = &off_46D9CC;
  v5 = &off_46D9CC;
  do
  {
    while ( 1 )
    {
      sub_1B1BE8(&v18, *v5);
      v9 = v18;
      if ( v18 )
        break;
      if ( **v5 == 95 )
      {
        sub_1B1BE8(&v18, *v5 + 1);
        v9 = v18;
        if ( v18 )
          break;
      }
      v5[2] = 0;
      v5 += 4;
      *(v5 - 1) = 0;
      if ( v5 == (char **)&unk_46DA2C )
        goto LABEL_7;
    }
    v6 = *(__int16 *)(v9 + 22);
    v7 = *(_DWORD *)(v9 + 8);
    if ( v6 == -1 )
    {
      v14 = sub_94700((int)"objc-lang.c", 1294, "Section index is uninitialized");
      sub_92E40((int)&v18);
      if ( HIDWORD(v14) != 1 )
      {
        sub_339E78(v14);
        sub_92E60();
      }
      v15 = sub_339E78(v14);
      v16 = (int *)sub_242FB4(v15);
      v17 = sub_154B88(
              *v16,
              *(_DWORD *)v15,
              *(_DWORD *)(v15 + 4),
              *(const char **)(v15 + 8),
              "Unable to determine target of Objective-C method call (ignoring):\n");
      sub_339EF8(v17);
      return 0;
    }
    v5 += 4;
    v18 = v9;
    v8 = v19;
    *(v5 - 2) = (char *)(*(_DWORD *)(*(_DWORD *)(v19 + 144) + 4 * v6) + v7);
    *(v5 - 1) = (char *)((int (__fastcall *)(int, int))loc_1B2B18)(v9, v8);
  }
  while ( v5 != (char **)&unk_46DA2C );
LABEL_7:
  if ( a2 )
    *a2 = 0;
  v10 = 0;
  while ( (unsigned int)v2[2] > a1 || (unsigned int)v2[3] <= a1 )
  {
    ++v10;
    v2 += 4;
    if ( v10 == 6 )
      return 0;
  }
  v12 = (&off_46D9CC)[4 * v10 + 1];
  if ( !v12 )
    return 0;
  v13 = sub_92E28();
  if ( ((int (__fastcall *)(unsigned int, _DWORD *))v12)(a1, a2) )
  {
    sub_92E40((int)v13);
    return 0;
  }
  else
  {
    sub_92E40((int)v13);
    return 1;
  }
}
