void *__fastcall sub_925CC(int a1, int a2)
{
  int v4; // r3
  void *result; // r0

  v4 = sub_93028(16);
  *(_DWORD *)(v4 + 4) = a1;
  result = off_46BBC8;
  *(_DWORD *)(v4 + 12) = a2;
  *(_DWORD *)(v4 + 8) = 0;
  *(_DWORD *)v4 = result;
  off_46BBC8 = (_UNKNOWN *)v4;
  if ( !result )
    sub_15AAC();
  return result;
}
