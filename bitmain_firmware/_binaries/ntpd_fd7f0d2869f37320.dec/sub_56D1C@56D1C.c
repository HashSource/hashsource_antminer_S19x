int __fastcall sub_56D1C(int a1)
{
  _DWORD *v1; // r4
  int v2; // r3
  int v3; // r0
  int result; // r0

  v1 = *(_DWORD **)a1;
  v2 = *(_DWORD *)(*(_DWORD *)a1 + 2124);
  v3 = *(_DWORD *)(*(_DWORD *)a1 + 2116);
  if ( v2 )
  {
    if ( v2 <= 100 )
      goto LABEL_5;
    v3 -= 4;
    if ( v3 < 0 )
      v3 = 0;
LABEL_9:
    v1[529] = v3;
    goto LABEL_5;
  }
  v3 += 4;
  if ( v3 <= 255 )
    goto LABEL_9;
  v3 = 255;
  v1[529] = 255;
LABEL_5:
  result = sub_621DC(v3, v1[530]);
  v1[531] = 0;
  return result;
}
