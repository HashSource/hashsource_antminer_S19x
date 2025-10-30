int __fastcall sub_C0C84(int a1, int a2)
{
  int result; // r0
  const char *v5; // r0
  unsigned int v6; // r0
  __int16 v7; // r5
  const char *v8; // r0

  if ( ((int (__fastcall *)(_DWORD))loc_166E9C)(*(_DWORD *)(a1 + 12)) > a2 )
  {
    v6 = ((int (__fastcall *)(_DWORD, int))loc_169750)(*(_DWORD *)(a1 + 12), a2);
    v7 = v6;
    if ( v6 >= 0x10000 )
      sub_946E0("GDB bug: ax-general.c (ax_reg): register number out of range");
    sub_C0878((char *)a1, 3);
    *(_BYTE *)(*(_DWORD *)a1 + *(_DWORD *)(a1 + 4)) = 38;
    *(_BYTE *)(*(_DWORD *)(a1 + 4) + *(_DWORD *)a1 + 1) = HIBYTE(v7);
    *(_BYTE *)(*(_DWORD *)(a1 + 4) + *(_DWORD *)a1 + 2) = v7;
    *(_DWORD *)(a1 + 4) += 3;
    return 38;
  }
  else
  {
    if ( !((int (__fastcall *)(_DWORD))loc_1670D4)(*(_DWORD *)(a1 + 12)) )
    {
      v8 = (const char *)sub_257FBC(*(_DWORD *)(a1 + 12), a2);
      sub_946E0("'%s' is a pseudo-register; GDB cannot yet trace its contents.", v8);
    }
    result = ((int (__fastcall *)(_DWORD, int, int))loc_167120)(*(_DWORD *)(a1 + 12), a1, a2);
    if ( result )
    {
      v5 = (const char *)sub_257FBC(*(_DWORD *)(a1 + 12), a2);
      sub_946E0("Trace '%s' failed.", v5);
    }
  }
  return result;
}
