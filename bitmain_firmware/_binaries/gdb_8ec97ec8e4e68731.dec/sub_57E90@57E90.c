_DWORD *__fastcall sub_57E90(_DWORD *a1, int a2, _BYTE *a3)
{
  _DWORD *v4; // r4
  _DWORD *v6; // [sp+4h] [bp-8h] BYREF

  v4 = (_DWORD *)sub_571C0(a2, a3);
  if ( sub_57928((int (__fastcall *)(int))sub_570E4, v4, 0, 0) != (void *)10 )
  {
    *a1 = v4;
    return a1;
  }
  sub_946B0("Error reading in canned sequence of commands.");
  *a1 = 0;
  if ( !v4 )
    return a1;
  v6 = v4;
  sub_57E18(&v6);
  return a1;
}
