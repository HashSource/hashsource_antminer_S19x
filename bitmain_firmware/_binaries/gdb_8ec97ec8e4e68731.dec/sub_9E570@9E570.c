int __fastcall sub_9E570(int a1, char *a2, int a3)
{
  int v5; // r8
  int v6; // r6
  int v7; // r5
  int v8; // r4

  v5 = *(_DWORD *)(sub_171258(a1) + 24);
  v6 = *(__int16 *)(v5 + 4);
  if ( v6 <= 0 )
  {
LABEL_6:
    if ( !a3 )
      sub_946E0("Unable to find field %s in struct %s.  Aborting", a2, *(const char **)(v5 + 8));
    return -1;
  }
  else
  {
    v7 = *(_DWORD *)(v5 + 24);
    v8 = 0;
    while ( !sub_9DF20(*(const char **)(v7 + 16), a2) )
    {
      ++v8;
      v7 += 24;
      if ( v8 == v6 )
        goto LABEL_6;
    }
  }
  return v8;
}
