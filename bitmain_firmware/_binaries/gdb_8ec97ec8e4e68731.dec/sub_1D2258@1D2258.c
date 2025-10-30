char *__fastcall sub_1D2258(void *a1, size_t a2, int a3, char a4, char a5, int a6, int a7, int a8, int a9)
{
  char *result; // r0
  int v14; // r1
  int v15; // r3
  bool v16; // zf
  int v17; // r1
  int v18; // [sp+Ch] [bp-28h] BYREF
  _DWORD s[9]; // [sp+10h] [bp-24h] BYREF

  memset(s, 0, 0x20u);
  HIWORD(s[5]) = -1;
  s[2] = a7;
  ((void (__fastcall *)(_DWORD *, int, int))loc_21AEC4)(s, a8, a9 + 48);
  LOBYTE(s[6]) = a4 & 7 | (8 * (a5 & 0x1F));
  sub_21AF48((int)s, a1, a2, a3, a9);
  result = sub_C1630(s, 0x20u, **(struct obstack ***)(a9 + 92), (struct obstack *)&v18);
  if ( a6 != a9 + 108 || v18 )
  {
    v14 = *(_DWORD *)(a6 + 4);
    v15 = *(_DWORD *)(a6 + 8);
    s[0] = result;
    if ( v14 == v15 )
    {
      result = (char *)sub_1D2CD0(a6);
    }
    else
    {
      v16 = v14 == 0;
      v17 = v14 + 4;
      if ( !v16 )
        *(_DWORD *)(v17 - 4) = result;
      *(_DWORD *)(a6 + 4) = v17;
    }
    ++*(_DWORD *)(a9 + 188);
  }
  return result;
}
