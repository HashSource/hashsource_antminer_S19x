int __fastcall sub_24BB14(_BYTE *a1, int a2)
{
  int v4; // r4
  _DWORD *v5; // r0

  if ( dword_48A8D0 )
    sub_248B08(&dword_48A8C8);
  if ( a1 && *a1 )
  {
    v4 = sub_14CC00((int)a1);
  }
  else
  {
    v4 = dword_48A8C0;
    if ( dword_48A8C0 == -1 )
      sub_946E0("No current tracepoint -- please supply an argument.");
  }
  v5 = sub_D1908(v4);
  if ( v5 )
    v4 = v5[36];
  return sub_24B678(2, v4, 0, 0, a2);
}
