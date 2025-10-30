int __fastcall sub_3A114(int a1)
{
  int v2; // r6
  int v3; // r8
  int v4; // r3
  char v5; // r9
  void (__fastcall *v6)(int, int); // r3
  int v8; // r2

  v2 = *(unsigned __int8 *)(a1 + 88);
  ++*(_DWORD *)(a1 + 740);
  v3 = *(unsigned __int8 *)(a1 + 89);
  sub_6055C(a1 + 568);
  v4 = *(_DWORD *)(a1 + 308);
  if ( v4 )
  {
    *(_DWORD *)(a1 + 308) = v4 - 1;
    goto LABEL_7;
  }
  v5 = *(_BYTE *)(a1 + 298);
  *(_BYTE *)(a1 + 298) = 2 * v5;
  if ( ((2 * v5) & 0xE) != 0 )
  {
    *(_DWORD *)(a1 + 716) = current_time;
    goto LABEL_5;
  }
  sub_35AF4(a1);
  v8 = *(unsigned __int8 *)(a1 + 298);
  *(_DWORD *)(a1 + 716) = current_time;
  if ( v8 )
  {
LABEL_5:
    if ( (*(_DWORD *)(a1 + 68) & 0x40) != 0 )
      *(_DWORD *)(a1 + 308) = 5;
    goto LABEL_7;
  }
  if ( (v5 & 0xFE) != 0 )
  {
    sub_26294(131, a1, 0);
    *(_DWORD *)(a1 + 736) = current_time;
  }
LABEL_7:
  v6 = (void (__fastcall *)(int, int))*((_DWORD *)*(&refclock_conf + v2) + 2);
  if ( v6 )
    v6(v3, a1);
  return sub_348C4(a1, *(unsigned __int8 *)(a1 + 64));
}
