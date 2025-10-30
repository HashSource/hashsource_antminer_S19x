int __fastcall sub_12EC78(_DWORD **a1, _BYTE *a2)
{
  _DWORD *v2; // r4
  int v4; // r6
  int v5; // r0
  int v6; // r3
  int v7; // r0

  v2 = *a1;
  if ( !*a1 )
    return -1;
  if ( (sub_B85BC(*a1) & 7) == 0 )
  {
    v4 = 1;
    if ( !a2 )
      goto LABEL_6;
    v4 = 1;
    *a2++ = 0;
    goto LABEL_5;
  }
  v4 = (int)a2;
  if ( a2 )
  {
    v4 = 0;
LABEL_5:
    sub_B8648(v2, (int)a2);
  }
LABEL_6:
  v5 = sub_B85BC(v2);
  v6 = v5 + 14;
  v7 = v5 + 7;
  if ( v7 < 0 )
    v7 = v6;
  return v4 + (v7 >> 3);
}
