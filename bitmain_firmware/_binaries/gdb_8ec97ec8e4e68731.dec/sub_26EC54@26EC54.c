_BYTE *__fastcall sub_26EC54(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6, _DWORD *a7)
{
  int v9; // r11
  int v10; // r0
  int v11; // r0
  int v12; // r4
  unsigned int v13; // r2
  int v14; // r1
  void *v16; // r5
  const void *v17; // r1
  int v18; // r0

  if ( *(_DWORD *)(a1 + 8) == 1 )
  {
    v9 = sub_26E954(*(_DWORD *)(a1 + 16));
    v10 = sub_170040(*(_DWORD *)(*(_DWORD *)(a1 + 16) + 64));
    v11 = ((int (__fastcall *)(int))loc_16EA14)(v10);
    if ( a6 )
    {
      v12 = *(_DWORD *)(*(_DWORD *)(a1 + 16) + 64);
      v13 = sub_26EB1C((int)a7);
      return sub_26D7D8(v12, v9 + a3, v13, v14, a5, a6);
    }
    else
    {
      v16 = (void *)(v9 + a3 * v11);
      v17 = (const void *)sub_26E978(a7);
      return memcpy(v16, v17, *(_DWORD *)(a7[16] + 20));
    }
  }
  else
  {
    v18 = sub_94700((int)"value.c", 2376, "set_internalvar_component");
    return (_BYTE *)sub_26ED18(v18);
  }
}
