int __fastcall sub_234AF0(int a1, unsigned int a2)
{
  int v2; // r0

  v2 = sub_234AC0(a1, a2);
  if ( v2 && *(_DWORD *)v2 )
    return *(_DWORD *)(*(_DWORD *)v2 + 28);
  else
    return -1;
}
