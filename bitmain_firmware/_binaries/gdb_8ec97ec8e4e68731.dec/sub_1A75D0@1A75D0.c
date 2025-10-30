int __fastcall sub_1A75D0(const char *a1, _DWORD *a2, int a3, int a4)
{
  int v8; // r5
  const char **i; // r4
  unsigned int v10; // r3
  int v12; // r1
  _DWORD v13[6]; // [sp+0h] [bp-18h] BYREF

  v8 = *(unsigned __int8 *)a1;
  for ( i = (const char **)sub_C28A8(a2, v13); i; i = (const char **)sub_C28E4((int)v13) )
  {
    if ( *(unsigned __int8 *)*i == v8 )
    {
      v10 = *((unsigned __int8 *)i + 32);
      if ( (v10 & 7) == a3 && *((_DWORD *)off_46DBB8 + 4 * (v10 >> 3)) == a4 && !strcmp(*i, a1) )
        return (int)i;
    }
  }
  v12 = a2[3];
  if ( !v12 )
    return 0;
  return sub_1A75D0(a1, v12, a3, a4);
}
