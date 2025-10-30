int __fastcall sub_C10E4(int a1, int a2)
{
  int result; // r0
  const char *v5; // r0
  int v6; // r6
  int v7; // r4
  _BYTE *v8; // r7
  bool v9; // nf
  int v10; // r2
  const char *v11; // r0

  if ( ((int (__fastcall *)(_DWORD))loc_166E9C)(*(_DWORD *)(a1 + 12)) > a2 )
  {
    result = ((int (__fastcall *)(_DWORD, int))loc_169750)(*(_DWORD *)(a1 + 12), a2);
    v6 = result / 8;
    v7 = result;
    if ( *(_DWORD *)(a1 + 40) <= result / 8 )
    {
      v8 = sub_93050(*(void **)(a1 + 44), v6 + 1);
      result = (int)memset(&v8[*(_DWORD *)(a1 + 40)], 0, v6 + 1 - *(_DWORD *)(a1 + 40));
      *(_DWORD *)(a1 + 40) = v6 + 1;
      *(_DWORD *)(a1 + 44) = v8;
    }
    else
    {
      v8 = *(_BYTE **)(a1 + 44);
    }
    v9 = -v7 < 0;
    v10 = -v7 & 7;
    LOBYTE(v7) = v7 & 7;
    if ( !v9 )
      v7 = -v10;
    v8[v6] |= 1 << v7;
  }
  else
  {
    if ( !((int (__fastcall *)(_DWORD))loc_166FC0)(*(_DWORD *)(a1 + 12)) )
    {
      v11 = (const char *)sub_257FBC(*(_DWORD *)(a1 + 12), a2);
      sub_946E0("'%s' is a pseudo-register; GDB cannot yet trace its contents.", v11);
    }
    result = ((int (__fastcall *)(_DWORD, int, int))loc_16700C)(*(_DWORD *)(a1 + 12), a1, a2);
    if ( result )
    {
      v5 = (const char *)sub_257FBC(*(_DWORD *)(a1 + 12), a2);
      sub_946E0("Trace '%s' failed.", v5);
    }
  }
  return result;
}
