int __fastcall sub_26EAAC(int a1)
{
  int v1; // r4
  char *v2; // r2
  int v3; // r3

  v1 = sub_26EA24(a1);
  v2 = *(char **)(sub_171258(*(_DWORD **)(v1 + 64)) + 24);
  v3 = *v2;
  if ( v3 != 2 )
  {
    if ( v3 == 7 )
      return sub_261670(v1);
    return v1;
  }
  if ( (v2[2] & 1) != 0 || !*((_BYTE *)off_46D5A4[0] + 112) )
    return v1;
  return sub_26160C(v1);
}
