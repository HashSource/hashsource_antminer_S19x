int __fastcall sub_17C6D8(_DWORD *a1, const char *a2, int a3, int a4, int a5, int a6)
{
  int v9; // r12
  int v10; // r0

  if ( a4 > 0 )
    v9 = sub_171258(a1);
  else
    v9 = (int)a1;
  v10 = *(_DWORD *)(v9 + 24);
  if ( *(_BYTE *)v10 == 2 && **(_BYTE **)(*(_DWORD *)(v10 + 20) + 24) == 20 )
    return sub_25A6BC("string", a3);
  else
    return sub_E9398(v9, a2, a3, a4, a5, a6);
}
