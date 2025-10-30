int __fastcall sub_1A37A0(int *a1)
{
  int v1; // r3
  _BYTE *v2; // r0
  int v3; // r3
  int v4; // r3

  v1 = *a1;
  v2 = (_BYTE *)a1[1];
  v3 = *(_DWORD *)(v1 + 12);
  if ( v3 && (v4 = *(_DWORD *)(v3 + 28)) != 0 && *v2 != 47 )
    return sub_31E27C(v4, &word_398974, v2);
  else
    return sub_327254(v2);
}
