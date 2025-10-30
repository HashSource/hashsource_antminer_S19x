int __fastcall sub_21EFDC(_DWORD *a1, _DWORD *a2)
{
  int v2; // r3
  int v3; // r2
  _DWORD *v5; // r4
  int result; // r0
  const char **v7; // r0
  const char *v8; // r4
  const char *v9; // r1
  int v10; // r0

  v2 = a1[1];
  if ( (*(_BYTE *)(v2 + 33) & 1) != 0 )
  {
    v3 = a2[1];
    v5 = a1;
    a1 = *(_DWORD **)(*(_DWORD *)(v2 + 28) + 12);
    if ( (*(_BYTE *)(v3 + 33) & 1) != 0 )
    {
      result = j_strcmp((const char *)a1, *(const char **)(*(_DWORD *)(v3 + 28) + 12));
      if ( result )
        return result;
      if ( *v5 != *a2 )
        return *v5 - *a2;
      v7 = (const char **)v5[1];
      if ( dword_46D448 )
      {
        v8 = (const char *)sub_21B3C4((int)v7);
        if ( dword_46D448 )
        {
          v9 = (const char *)sub_21B3C4(a2[1]);
          return strcmp(v8, v9);
        }
      }
      else
      {
        v8 = *v7;
      }
      v9 = *(const char **)a2[1];
      return strcmp(v8, v9);
    }
  }
  v10 = ((int (__fastcall *)(_DWORD *))loc_21A4BC)(a1);
  return sub_21F094(v10);
}
