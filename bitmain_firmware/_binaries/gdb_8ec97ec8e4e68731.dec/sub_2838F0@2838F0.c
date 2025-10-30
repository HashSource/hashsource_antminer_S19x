int __fastcall sub_2838F0(_DWORD *a1)
{
  int v1; // r1
  int v3; // r0
  size_t v5; // r0
  char *v6; // r0
  int v7; // r0

  v1 = a1[10];
  dword_4900D4 = v1;
  v3 = dword_48ABE0;
  if ( dword_4900D8 )
  {
    dword_48ABDC = a1[11];
    if ( dword_48ABE0 )
      free((void *)dword_48ABE0);
    v5 = strlen((const char *)dword_48AAD4);
    v6 = (char *)sub_93028(v5 + 1);
    dword_48ABE0 = (int)strcpy(v6, (const char *)dword_48AAD4);
    v3 = sub_2923B8(dword_48ABE0);
    goto LABEL_3;
  }
  if ( dword_48ABE0 )
  {
LABEL_3:
    sub_28D478(v3);
    return sub_283808((_BYTE *)dword_48ABE0, a1[18]);
  }
  v7 = sub_2945C8(0, v1);
  sub_28D478(v7);
  dword_48AAA0 &= ~0x100u;
  return -1;
}
