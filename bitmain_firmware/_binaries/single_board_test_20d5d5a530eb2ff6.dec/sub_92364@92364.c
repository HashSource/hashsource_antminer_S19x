int __fastcall sub_92364(_DWORD *a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  unsigned __int16 **v11; // r0
  int v12; // r1
  unsigned __int16 *v13; // r0
  unsigned __int16 *v14; // r4
  int (__fastcall *v15)(_DWORD *, int, int, int, int, int, int, int *, _DWORD); // r9
  int v17; // [sp+1Ch] [bp-8h] BYREF

  v11 = (unsigned __int16 **)(a1[257] + 240);
  if ( (a2 & 0x180) != 0 )
    v12 = a1[7] != 0;
  else
    v12 = 2;
  v13 = sub_92300(v11, v12, a3, 0);
  v14 = v13;
  if ( v13 && sub_8F1B0(a1, *((_DWORD *)v13 + 2), a2) )
  {
    if ( (a2 & 0x700) != 0 && (*((_DWORD *)v14 + 3) & 2) == 0 )
    {
      sub_95494(a1, 110, 555, 110, "ssl/statem/extensions_cust.c", 143);
      return 0;
    }
    v15 = (int (__fastcall *)(_DWORD *, int, int, int, int, int, int, int *, _DWORD))*((_DWORD *)v14 + 7);
    if ( (a2 & 0x4080) != 0 )
      *((_DWORD *)v14 + 3) |= 1u;
    if ( v15 && v15(a1, a3, a2, a4, a5, a6, a7, &v17, *((_DWORD *)v14 + 8)) <= 0 )
    {
      sub_95494(a1, v17, 555, 110, "ssl/statem/extensions_cust.c", 163);
      return 0;
    }
  }
  return 1;
}
